#!/usr/bin/env bash
set -u
ARCHTEST=~/Desktop/compliance_test/riscv-arch-test
SIM=~/Desktop/compliance_test/sim/obj_dir/VAdvaita_V
SAIL=~/Desktop/compliance_test/bin/sail_riscv_sim
SAIL_CONFIG=/home/chips/Desktop/compliance_test/riscv-arch-test/config/sail/sail-RVI20U32/sail.json
OUTDIR=~/Desktop/compliance_test/sim/results
mkdir -p "$OUTDIR"
PASS=0
FAIL=0

COMPARE=~/Desktop/compliance_test/sim/compare_traces.py

for ext in I Zicsr; do
  for elf in "$ARCHTEST"/work/advaita-RVI20U32/build/rv32i/$ext/*.sig.elf; do
    name=$(basename "$elf" .sig.elf)
    sail_sig="$ARCHTEST/work/sail-RVI20U32/build/rv32i/$ext/${name}.sig"
    [ -f "$sail_sig" ] || { echo "SKIP (no sail sig): $name"; continue; }
    addrs=$(riscv-none-elf-nm "$elf" | grep -E "begin_signature|end_signature|^[0-9a-f]+ D tohost")
    begin=$(echo "$addrs" | awk '/begin_signature/{print $1}')
    end=$(echo "$addrs"   | awk '/end_signature/{print $1}')
    tohost=$(echo "$addrs" | awk '/tohost/{print $1}')
    my_sig="$OUTDIR/${ext}_${name}.sig"
    dut_log="$OUTDIR/${ext}_${name}.log"
    "$SIM" "$elf" "$my_sig" "$begin" "$end" "$tohost" 2000000 2> "$dut_log"

    if diff -q "$sail_sig" "$my_sig" > /dev/null 2>&1; then
      echo "PASS: $ext/$name"
      PASS=$((PASS+1))
    else
      echo "FAIL: $ext/$name  (see $dut_log, diff below)"
      diff "$sail_sig" "$my_sig" | head -5
      FAIL=$((FAIL+1))

      # --- generate matching instruction traces for this failing test ---
      # Run sail on the EXACT SAME elf your DUT just ran (not a separate
      # sail-target elf — different target builds are linked independently
      # and are not byte-comparable). Sail just needs a valid RV32I+Zicsr
      # binary; it doesn't care which target's build system produced it.
      sail_trace_raw="$OUTDIR/${ext}_${name}.sail_trace_raw.log"
      trace_diff="$OUTDIR/${ext}_${name}.trace_diff.log"

      # Sail's loader jumps straight to the ELF's declared e_entry, skipping
      # the reset-vector boot preamble your hardware always executes (it
      # hardwires PC to 0x80000000 regardless of e_entry). That leaves sp/gp
      # uninitialized in Sail and causes an immediate store-access-fault trap
      # loop. Fix: patch a scratch copy's e_entry to the real reset vector so
      # Sail runs the identical boot sequence your DUT does.
      patched_elf="$OUTDIR/${ext}_${name}.entry_patched.elf"
      cp "$elf" "$patched_elf"
      python3 -c "
import struct
with open('$patched_elf', 'r+b') as f:
    f.seek(0x18)
    f.write(struct.pack('<I', 0x80000000))
"

      "$SAIL" --trace "$patched_elf" --config "$SAIL_CONFIG" > "$sail_trace_raw" 2>&1

      python3 "$COMPARE" "$dut_log" "$sail_trace_raw" "$trace_diff"
      echo "  trace diff: $trace_diff"
    fi
  done
done
echo
echo "=== $PASS passed, $FAIL failed ==="
