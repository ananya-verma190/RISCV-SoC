#!/usr/bin/env python3
"""
Compare a DUT raw commit-log against a Sail raw --trace log by normalizing
both down to bare numeric events (PC + instruction word, register writes,
CSR writes, mem accesses) — dropping mnemonics, cycle indices, and hex case,
none of which reflect real behavioral differences.

Usage: compare_traces.py <dut_raw_log> <sail_raw_log> <output_diff>
"""
import re
import sys
import difflib

def norm_hex(h):
    return "0x{:08x}".format(int(h, 16) & 0xFFFFFFFF)

def parse_dut(path):
    commit_re = re.compile(r"^\[\d+\] \[M\]:\s+(0x[0-9a-fA-F]+)\s+\((0x[0-9a-fA-F]+)\)")
    reg_re = re.compile(r"^x(\d+)\s*<-\s*(0x[0-9a-fA-F]+)")
    memx_re = re.compile(r"^mem\[X,(0x[0-9a-fA-F]+)\]\s*->\s*(0x[0-9a-fA-F]+)")
    memw_re = re.compile(r"^mem\[W,(0x[0-9a-fA-F]+)\]\s*<-\s*(0x[0-9a-fA-F]+)")
    csr_re = re.compile(r"^CSR\s+(0x[0-9a-fA-F]+)\s*<-\s*(0x[0-9a-fA-F]+)")
    return _parse(path, commit_re, reg_re, memx_re, memw_re, csr_re)

def parse_sail(path):
    commit_re = re.compile(r"^\[\d+\] \[M\]:\s+(0x[0-9a-fA-F]+)\s+\((0x[0-9a-fA-F]+)\)")
    reg_re = re.compile(r"^x(\d+)\s*<-\s*(0x[0-9a-fA-F]+)")
    memx_re = re.compile(r"^mem\[X,(0x[0-9a-fA-F]+)\]\s*->\s*(0x[0-9a-fA-F]+)")
    memw_re = re.compile(r"^mem\[W,(0x[0-9a-fA-F]+)\]\s*<-\s*(0x[0-9a-fA-F]+)")
    csr_re = re.compile(r"^CSR\s+\S+\s+\((0x[0-9a-fA-F]+)\)\s*<-\s*(0x[0-9a-fA-F]+)")
    return _parse(path, commit_re, reg_re, memx_re, memw_re, csr_re)

def _parse(path, commit_re, reg_re, memx_re, memw_re, csr_re):
    # First pass: collect raw typed events in order.
    raw = []
    with open(path, errors="replace") as f:
        for line in f:
            line = line.strip()
            m = commit_re.match(line)
            if m:
                raw.append(("COMMIT", norm_hex(m.group(1)), norm_hex(m.group(2))))
                continue
            m = reg_re.match(line)
            if m:
                raw.append(("REG", m.group(1), norm_hex(m.group(2))))
                continue
            m = memx_re.match(line)
            if m:
                raw.append(("MEMR", norm_hex(m.group(1)), norm_hex(m.group(2))))
                continue
            m = memw_re.match(line)
            if m:
                raw.append(("MEMW", norm_hex(m.group(1)), norm_hex(m.group(2))))
                continue
            m = csr_re.match(line)
            if m:
                raw.append(("CSR", norm_hex(m.group(1)), norm_hex(m.group(2))))
                continue

    # Second pass: drop instruction-fetch echo pairs — two consecutive MEMR
    # events at addr and addr+2 immediately followed by a COMMIT at addr.
    # These only appear in Sail's raw trace (it echoes each fetched halfword);
    # the DUT's log never emits them, since the fetched word is already in
    # the COMMIT line itself. Real data-load MEMR events (the ones worth
    # comparing) don't fit this exact pre-COMMIT pairing pattern.
    filtered = []
    i = 0
    n = len(raw)
    while i < n:
        if (i + 2 < n and raw[i][0] == "MEMR" and raw[i+1][0] == "MEMR"
                and raw[i+2][0] == "COMMIT"):
            addr_lo = int(raw[i][1], 16)
            addr_hi = int(raw[i+1][1], 16)
            commit_pc = int(raw[i+2][1], 16)
            if addr_lo == commit_pc and addr_hi == commit_pc + 2:
                i += 2  # skip the fetch-echo pair, keep the COMMIT
                continue
        filtered.append(raw[i])
        i += 1

    lines = []
    for kind, a, b in filtered:
        if kind == "COMMIT":
            lines.append(f"COMMIT pc={a} instr={b}")
        elif kind == "REG":
            lines.append(f"REG x{a} <- {b}")
        elif kind == "MEMR":
            lines.append(f"MEMR {a} -> {b}")
        elif kind == "MEMW":
            lines.append(f"MEMW {a} <- {b}")
        elif kind == "CSR":
            lines.append(f"CSR {a} <- {b}")
    return lines

def main():
    if len(sys.argv) != 4:
        print(f"usage: {sys.argv[0]} <dut_raw_log> <sail_raw_log> <output_diff>", file=sys.stderr)
        sys.exit(1)

    dut_path, sail_path, out_path = sys.argv[1:4]
    dut_lines = parse_dut(dut_path)
    sail_lines = parse_sail(sail_path)

    # The DUT halts as soon as it sees the first tohost write (correct — all
    # signature-relevant stores happen earlier in program order). Sail keeps
    # running through the post-signature print/exit sequence, adding
    # thousands of irrelevant trailing lines. Trim Sail's trace to the same
    # cutoff point so the diff doesn't drown in that tail.
    last_dut_commit = None
    for line in reversed(dut_lines):
        if line.startswith("COMMIT "):
            last_dut_commit = line
            break
    if last_dut_commit is not None:
        try:
            cutoff = sail_lines.index(last_dut_commit)
            # keep a few lines after the matching commit (its REG/MEMW effects)
            cutoff = min(len(sail_lines), cutoff + 3)
            sail_lines = sail_lines[:cutoff]
        except ValueError:
            pass  # DUT's last commit never appears in Sail's trace — leave as-is

    diff = list(difflib.unified_diff(
        sail_lines, dut_lines,
        fromfile="sail (expected)", tofile="dut (actual)",
        lineterm=""
    ))

    with open(out_path, "w") as out:
        if not diff:
            out.write("No differences after normalization.\n")
        else:
            out.write("\n".join(diff) + "\n")

if __name__ == "__main__":
    main()
