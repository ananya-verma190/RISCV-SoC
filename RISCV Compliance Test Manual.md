# RISC-V Compliance Testing

Follow these steps in order. Every command here is confirmed working.
`Advaita_V` is the example core name — replace it with your own core's
top module name wherever it appears.

Refer to `compliance_test` for the full working environment this guide was built from.

`EXTS` is used throughout — set it once to your core's real extension
list (comma-separated for Makefile flags, space-separated in
`run_tests.sh`). This guide's own worked example uses `I,Zicsr`.

---

## 1. Install prerequisites

```bash
sudo apt update
sudo apt install -y ruby-full build-essential verilator
gem install bundler --user-install

RUBY_GEM_BIN=$(ruby -e 'puts Gem.user_dir')/bin
echo "export PATH=\"$RUBY_GEM_BIN:\$PATH\"" >> ~/.bashrc
source ~/.bashrc
bundle --version

curl -LsSf https://astral.sh/uv/install.sh | sh
source ~/.bashrc

curl https://mise.jdx.dev/install.sh | sh
echo 'export PATH="$HOME/.local/bin:$PATH"' >> ~/.bashrc
source ~/.bashrc
mise --version
```

`gem install bundler` (without `--user-install`) fails on most systems
with a `Gem::FilePermissionError` — the system gem directory isn't
writable by a regular user. `--user-install` installs to your own
home directory instead; the `RUBY_GEM_BIN` line finds exactly where
that is and puts it on PATH.

`mise` isn't preinstalled on most systems either — don't use
`sudo snap install mise` if apt suggests it (older/sandboxed build); the
official installer above is what the rest of this guide assumes.

## 2. Install sail-riscv (prebuilt binary)

```bash
mkdir -p ~/bin
curl -sL -o /tmp/sail.tar.gz \
  "https://github.com/riscv/sail-riscv/releases/download/0.13.1/sail-riscv-$(uname)-$(arch).tar.gz"
tar xvzf /tmp/sail.tar.gz --directory=$HOME/bin --strip-components=1

echo 'export PATH="$HOME/bin:$HOME/bin/bin:$PATH"' >> ~/.bashrc
source ~/.bashrc
hash -r
sail_riscv_sim --version      # should print 0.13.1
```

**Version matters — ACT4 checks it strictly.** `riscv-arch-test`'s `act4`
branch validates the reference model version and refuses to run against
anything else, failing with `Sail reference model version mismatch. ACT4
requires version 0.13.1, ... was found.` If you already installed a
different version, remove it and reinstall 0.13.1:
```bash
rm -f ~/bin/sail_riscv_sim ~/bin/bin/sail_riscv_sim
# then rerun the curl/tar block above
```
If a future ACT4 update bumps this requirement again, the error message
tells you the exact version it wants — swap that into the URL above.

The release tarball packages a full install tree (`bin/`, `include/`,
`share/`), not just a bare binary — after `--strip-components=1` those
three folders land directly inside `~/bin`, so the actual executable is
at `~/bin/bin/sail_riscv_sim`. The `PATH` line above covers both
`~/bin` and `~/bin/bin` so this works regardless of which layout a given
release uses. If `sail_riscv_sim --version` still isn't found after this,
confirm the binary's actual location and adjust PATH to match:
```bash
find ~/bin -name "sail_riscv_sim"
```

## 3. Install the RISC-V GCC toolchain

```bash
curl -L -o riscv-gcc15.tar.gz \
  https://github.com/xpack-dev-tools/riscv-none-elf-gcc-xpack/releases/download/v15.2.0-1/xpack-riscv-none-elf-gcc-15.2.0-1-linux-x64.tar.gz
mkdir -p ~/xpack-riscv-none-elf-gcc-15.2.0-1
tar xvzf riscv-gcc15.tar.gz --directory=$HOME/xpack-riscv-none-elf-gcc-15.2.0-1 --strip-components=1

echo 'export PATH="$HOME/xpack-riscv-none-elf-gcc-15.2.0-1/bin:$PATH"' >> ~/.bashrc
source ~/.bashrc
riscv-none-elf-gcc --version
```

## 4. Clone the test suite

```bash
mkdir -p ~/compliance_test
cd ~/compliance_test
git clone https://github.com/riscv/riscv-arch-test.git
cd riscv-arch-test
git checkout act4
mise trust
```

## 5. Point the stock sail config at your toolchain

```bash
sed -i 's/compiler_exe: riscv64-unknown-elf-gcc/compiler_exe: riscv-none-elf-gcc/' \
  config/sail/sail-RVI20U32/test_config.yaml
sed -i 's/objdump_exe: riscv64-unknown-elf-objdump/objdump_exe: riscv-none-elf-objdump/' \
  config/sail/sail-RVI20U32/test_config.yaml
```

## 6. Build the golden (sail) reference signatures

```bash
cd ~/compliance_test/riscv-arch-test
EXTS="I,Zicsr"   # your core's real extension list
UV_PYTHON=3.12 make CONFIG_FILES=config/sail/sail-RVI20U32/test_config.yaml \
  EXTENSIONS=$EXTS JOBS=1
```

Verify:
```bash
ls work/sail-RVI20U32/build/rv32i/I/*.sig | head -5
```

## 7. Create your DUT config

**First, copy every file the sail config uses — all five at once.**
`config/sail/sail-RVI20U32/` already ships a complete, working set; your
DUT config starts as a copy of it, then gets edited file by file below.
Nothing here is written from scratch.

```bash
mkdir -p ~/compliance_test/riscv-arch-test/config/advaita/advaita-RVI20U32
cd ~/compliance_test/riscv-arch-test/config/advaita/advaita-RVI20U32

cp ../../sail/sail-RVI20U32/test_config.yaml     ./test_config.yaml
cp ../../sail/sail-RVI20U32/rvmodel_macros.h     ./rvmodel_macros.h
cp ../../sail/sail-RVI20U32/link.ld              ./link.ld
cp ../../sail/sail-RVI20U32/sail-RVI20U32.yaml   ./advaita-RVI20U32.yaml
cp ../../sail/sail-RVI20U32/sail.json            ./sail.json

ls
```
You should see all five files. Now edit each one in turn.

### Edit `test_config.yaml`

Copied content:
```yaml
name: sail-RVI20U32
compiler_exe: riscv64-unknown-elf-gcc
objdump_exe: riscv64-unknown-elf-objdump
ref_model_exe: sail_riscv_sim
udb_config: sail-RVI20U32.yaml
linker_script: link.ld
dut_include_dir: .
include_priv_tests: False
```
Change it to:
```yaml
name: advaita-RVI20U32
compiler_exe: riscv-none-elf-gcc
objdump_exe: riscv-none-elf-objdump
ref_model_exe: sail_riscv_sim
udb_config: advaita-RVI20U32.yaml
linker_script: link.ld
dut_include_dir: .
include_priv_tests: False
```
- `name` → matches the config directory name.
- `compiler_exe`/`objdump_exe` → match whatever xpack toolchain binary
  names you actually installed in step 3 (same fix as step 5, but this
  copy needs it independently — editing the sail config in step 5 does
  not carry over here).
- `udb_config` → renamed to match the yaml file you're about to edit.
- `ref_model_exe` stays `sail_riscv_sim` — this config still runs sail to
  cross-check the compiled ELFs (see step 8); leave it as-is even though
  you don't have a native model of your own.
- `include_priv_tests` → set `True` only if your core implements
  privileged-mode instructions and you're testing them.

### Edit `rvmodel_macros.h`

The copied file is sail's own — full of CLINT addresses, timer/interrupt
setup, and a console-print loop your core has none of. Since your core
has no MMIO, no UART, and no real HTIF device, strip it down to the bare
minimum needed to compile and to signal pass/fail. Replace the file's
contents with:

```c
#ifndef _RVMODEL_MACROS_H
#define _RVMODEL_MACROS_H

#define RVMODEL_DATA_SECTION \
        .pushsection .tohost,"aw",@progbits;                \
        .balign 8; .global tohost; tohost: .dword 0;         \
        .balign 8; .global fromhost; fromhost: .dword 0;     \
        .popsection

#define RVMODEL_BOOT
#define RVMODEL_BOOT_TO_MMODE

// tohost is a plain memory word — the Verilator harness polls it.
#define RVMODEL_HALT_PASS  \
  li x1, 1                ;\
  la t0, tohost           ;\
  write_tohost_pass:      ;\
    sw x1, 0(t0)          ;\
    sw x0, 4(t0)          ;\
    j write_tohost_pass   ;\

#define RVMODEL_HALT_FAIL \
  li x1, 3                ;\
  la t0, tohost           ;\
  write_tohost_fail:      ;\
    sw x1, 0(t0)          ;\
    sw x0, 4(t0)          ;\
    j write_tohost_fail   ;\

#define RVMODEL_IO_INIT(_R1, _R2, _R3)
#define RVMODEL_IO_WRITE_STR(_R1, _R2, _R3, _STR_PTR)

#define RVMODEL_ACCESS_FAULT_ADDRESS 0xBAD00000
#define RVMODEL_MTIMECMP_ADDRESS  0x02004000
#define RVMODEL_MTIME_ADDRESS     0x0200BFF8
#define RVMODEL_MAX_CYCLES_PER_TIMER_TICK 1
#define RVMODEL_INTERRUPT_LATENCY 10
#define RVMODEL_TIMER_INT_SOON_DELAY 100
#define RVMODEL_MEXT_ADDRESS  0x80000000
#define RVMODEL_SET_MEXT_INT(_R1, _R2)
#define RVMODEL_CLR_MEXT_INT(_R1, _R2)
#define RVMODEL_SET_MSW_INT(_R1, _R2)
#define RVMODEL_CLR_MSW_INT(_R1, _R2)
#define RVMODEL_SET_SEXT_INT(_R1, _R2)
#define RVMODEL_CLR_SEXT_INT(_R1, _R2)
#define RVMODEL_SET_SSW_INT(_R1, _R2)
#define RVMODEL_CLR_SSW_INT(_R1, _R2)

#endif
```
`RVMODEL_MEXT_ADDRESS` here is `0x80000000` — same address as `link.ld`'s
`RAM_ORIGIN` below. If you change one, change both (see the `RAM_ORIGIN`
note under `link.ld`).

### Edit `link.ld`

Copied content:
```ld
/* Set these to match the DUT memory map and hart count. */
RAM_ORIGIN = 0x80000000;
RAM_LENGTH = 0x80000000;
TEST_BASE = RAM_ORIGIN;
NUM_HARTS = 1;

/* Most users should not need to modify anything below this line. */
STACK_SIZE = 0x20000;

OUTPUT_ARCH( "riscv" )
ENTRY(rvtest_entry_point)

MEMORY
{
  ram (rwx) : ORIGIN = RAM_ORIGIN, LENGTH = RAM_LENGTH
}

PROVIDE(__stack_size = STACK_SIZE);
PROVIDE(__num_harts = NUM_HARTS);

SECTIONS
{
  ASSERT(TEST_BASE >= ORIGIN(ram) && TEST_BASE < ORIGIN(ram) + LENGTH(ram), "TEST_BASE is outside RAM; update TEST_BASE and RAM_ORIGIN/RAM_LENGTH in link.ld, and the matching memory.regions entry in sail.json")

  .text.init   TEST_BASE : { *(.text.init) } > ram
  .text.rvtest . : { *(.text.rvtest) *(.text.rvtest.*) } > ram

  . = ALIGN(0x4000);
  .rodata . : { *(.rodata) *(.rodata.*) *(.srodata) *(.srodata.*) } > ram
  .data   . : { *(.data) *(.data.*) *(.sdata) *(.sdata.*) } > ram

  . = ALIGN(16);
  .bss . : {
    __bss_start = .;
    *(.sbss) *(.sbss.*) *(.bss) *(.bss.*) *(COMMON)
    . = ALIGN(16);
    __bss_end = .;
  } > ram

  . = ALIGN(16);
  __stack_bottom = .;
  . += __stack_size * __num_harts;
  __stack_top = .;

  . = ALIGN(0x1000);
  .text.rvmodel . : { *(.text.rvmodel) *(.text.rvmodel.*) *(.text) *(.text.*) } > ram

  . = ALIGN(0x1000);
  _end = .;

  ASSERT(_end <= ORIGIN(ram) + LENGTH(ram), "ACT ELF exceeds RAM; increase RAM_LENGTH in link.ld and the matching memory.regions size in sail.json")
}
```
Only the first two lines need changing — leave everything below `NUM_HARTS`
untouched:
- **`RAM_ORIGIN`** — leave at `0x80000000` unless your core's memory map
  genuinely starts somewhere else. **This must exactly match your RTL's
  reset PC.** If your core resets to PC `0x0` (a common default) while
  this stays at `0x80000000`, the core will fetch from an address with no
  code in it and nothing will ever run — this is a real, easy-to-hit
  mismatch, not a hypothetical one. Either change your reset PC to
  `0x80000000`, or change `RAM_ORIGIN` (and `RVMODEL_MEXT_ADDRESS` above)
  to match your actual reset PC — pick one and keep both files consistent
  with it.
- **`RAM_LENGTH`** — the shipped default (`0x80000000`, i.e. 2GB) is a
  sail-scale placeholder; a real RTL memory can't be that large. Set it
  to whatever your RTL's memory arrays and `sim_main.cpp`'s `MEM_BYTES`
  actually are, e.g. `RAM_LENGTH = 0x40000;` for 256KB. **256KB is only
  enough for `I`+`Zicsr`** — the `ASSERT(_end <= ...)` at the bottom will
  fail the build with a clear error if a test's compiled size exceeds
  this, which is exactly what happens once you add extensions with
  larger test suites (`M`, `C`, `F`/`D` in particular). If you hit that
  assert, raise `RAM_LENGTH` here, and raise the matching `MEM_BYTES` in
  your RTL and in `sim_main.cpp` (step 10) to the same value — all three
  must move together.

  **Sizing your RTL memory array: use `MEM_BYTES` directly, not divided
  by anything.** `sim_main.cpp`'s load loop (step 10) pokes one byte per
  index — `mem[i] = image[i]` for `i` from `0` to `MEM_BYTES` — so your
  RTL's `mem` array must be **byte-addressable with exactly `MEM_BYTES`
  entries**: `mem[0:MEM_BYTES-1]`. For `MEM_BYTES = 262144`, that's
  `mem[0:262143]` — not `mem[0:131071]` (that's half the needed size,
  an easy off-by-factor mistake if you assume word-indexing where none
  exists). This applies to both the instruction and data memory arrays,
  since both get poked the same way.

### Edit `advaita-RVI20U32.yaml`

The copied file's `implemented_extensions:` list is sail's full
capability set (`I`, `M`, `A`, `F`, `D`, `C`, `Zicntr`, `Zihpm`, `Zicsr`,
`Zifencei`, `Zaamo`, ...) — trim it to only what your core actually
implements, plus `Sm` (a pseudo-extension providing baseline M-mode
params; every hart needs it, it isn't optional):
```yaml
implemented_extensions:
  - { name: I, version: "= 2.1" }
  - { name: Zicsr, version: "= 2.0" }
  - { name: Sm, version: "= 1.12.0" }
```
Watch for **sub-extension dependencies** when deleting entries — `M`
requires `Zmmul`, so if you remove one without the other, validation
fails with `Extension requirement is unmet: M@... Zmmul~>1.0.0{false}`.
The fix is to delete `M` (and any similarly-linked entry) entirely, not
to add the dependency back.

Then, in the `params:` section further down, extension-specific params
need attention — but **"gated on a disabled extension" doesn't always
mean "delete it."** UDB draws a distinction:
- Some params only exist *because* an extension is present (e.g. `M`'s
  divide-latency params) — these get deleted entirely when you remove
  that extension. UDB's error for this case says the param's
  **requirement is unmet**.
- Other params are part of the base ISA and always required, but their
  *value* must be consistent with whatever extensions are disabled —
  deleting these instead gets you **"Parameter is required but missing"**
  on the next build.

`MCOUNTENABLE_EN` is the second kind — it's always required, but with
`Zicntr` (bits 0–2: cycle/time/instret) and `Zihpm` (bits 3–31: HPM
counters) both disabled, every bit has to be `false` rather than the
line being deleted:
```bash
grep -n "MCOUNTENABLE_EN" advaita-RVI20U32.yaml
```
```yaml
MCOUNTENABLE_EN: [false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false]
```
(32 entries, one per bit — all `false` since none of these counters are
implemented)

Expect to iterate a few times either way — UDB validates one failing
requirement per run, so after fixing one, rebuild (below) and address
whatever it reports next. Read the error message's exact wording each
time (**"requirement is unmet"** → delete the param; **"required but
missing"** → put it back with values matching your disabled extensions,
usually all `false`/`0`) rather than assuming every failure means delete.

### Edit `sail.json`

Set every extension your core doesn't implement to `false` under
`"extensions"`:
```json
"M": { "supported": false },
"A": { "supported": false },
"F": { "supported": false },
"D": { "supported": false },
```
(also `Zicntr`, `Zifencei`, `Zihpm`, `Zmmul`, `Zaamo`, `Zalrsc`, `Zca`,
`Zcf`, `Zcd` — set `false` unless your core genuinely implements them,
e.g. `Zifencei` only if `fence.i` is real in your design)

If you disabled `F`/`D`, also add/edit the `mstatus` block — sail will
otherwise refuse to run with an internal-consistency error
(`mstatus.FS` must be read-only zero when F isn't enabled):
```json
"mstatus": {
  "fs_legal_states": "ExtContext_Off",
  "vs_legal_states": "ExtContext_Off"
}
```

### Build the ELFs

```bash
cd ~/compliance_test/riscv-arch-test
make CONFIG_FILES=config/advaita/advaita-RVI20U32/test_config.yaml \
  EXTENSIONS=$EXTS elfs
```

## 8. RTL: instruction memory read must be combinational

Registered (`always_ff`) instruction reads introduce a one-cycle PC skew
that breaks every branch/`JAL`/`JALR`/`AUIPC`. Fix:
```systemverilog
always_comb begin
    if (reset)
        instruction = 32'h00000013;             // NOP
    else if (!cs_n && we_n && in_range)
        instruction = { mem[local_addr+3], mem[local_addr+2],
                         mem[local_addr+1], mem[local_addr+0] };
    else
        instruction = 32'h00000013;
end
```
(keep the write path as `always_ff`)

## 9. Get signature addresses

```bash
riscv-none-elf-nm work/advaita-RVI20U32/build/rv32i/I/I-add-00.sig.elf \
  | grep -E "begin_signature|end_signature|tohost"
```

## 10. Verilator testbench — `sim_main.cpp`

**Find your core's mangled memory array names first** — this requires a
throwaway Verilator pass, since `obj_dir` doesn't exist until Verilator
has run at least once, but you need the mangled names before you can
write a `sim_main.cpp` that compiles. Run header-generation only (no
`sim_main.cpp`, no `--exe --build` yet):

```bash
mkdir -p ~/compliance_test/sim
cd ~/compliance_test/sim
# your .sv files should already be in ~/compliance_test/design

verilator --cc --top-module Advaita_V \
  --Mdir obj_dir -O2 \
  -I/home/<you>/compliance_test/design \
  Advaita_V.sv alu.sv alu_control.sv csr_bank.sv data_mem_wrapper.sv \
  data_memory.sv decoder.sv ex_stage.sv id_stage.sv if_stage.sv \
  imm_generator.sv inst_memory.sv main_control.sv register_file.sv \
  reset_sync.sv single_cycle_riscv.sv wb_stage.sv

grep -n "mem" obj_dir/VAdvaita_V___024root.h
```

Adjust the `.sv` list and `-I` path to your own core — same file list
you'll use for the full build in step 11. Substitute the exact mangled
names this prints into `sim_main.cpp` below (Verilator turns
`.`-separated hierarchy into `__DOT__`). Once `sim_main.cpp` is written,
step 11's full `--exe --build` run recompiles everything — including
this file — into the actual simulator binary; you don't need to repeat
this header-only pass unless your RTL's hierarchy changes.

Save `sim_main.cpp` in `~/compliance_test/sim/`:

```cpp
#include "VAdvaita_V.h"
#include "VAdvaita_V___024root.h"
#include "verilated.h"
#include <cstdio>
#include <cstdint>
#include <cstring>
#include <fstream>
#include <vector>
#include <string>

static constexpr uint32_t BASE      = 0x80000000u;
static constexpr uint32_t MEM_BYTES = 262144u;   // must match RTL + link.ld's RAM_LENGTH

struct Elf32_Ehdr { uint8_t e_ident[16]; uint16_t e_type,e_machine; uint32_t e_version,e_entry,e_phoff,e_shoff,e_flags;
                     uint16_t e_ehsize,e_phentsize,e_phnum,e_shentsize,e_shnum,e_shstrndx; };
struct Elf32_Phdr { uint32_t p_type,p_offset,p_vaddr,p_paddr,p_filesz,p_memsz,p_flags,p_align; };

static bool load_elf(const char* path, std::vector<uint8_t>& image) {
    std::ifstream f(path, std::ios::binary);
    if (!f) { fprintf(stderr, "cannot open %s\n", path); return false; }
    std::vector<uint8_t> buf((std::istreambuf_iterator<char>(f)), std::istreambuf_iterator<char>());
    Elf32_Ehdr eh; memcpy(&eh, buf.data(), sizeof(eh));
    for (int i = 0; i < eh.e_phnum; i++) {
        Elf32_Phdr ph;
        memcpy(&ph, buf.data() + eh.e_phoff + i * eh.e_phentsize, sizeof(ph));
        if (ph.p_type != 1) continue;
        if (ph.p_vaddr < BASE || (ph.p_vaddr - BASE + ph.p_memsz) > MEM_BYTES) {
            fprintf(stderr, "segment out of range: vaddr=0x%x memsz=0x%x\n", ph.p_vaddr, ph.p_memsz);
            return false;
        }
        uint32_t off = ph.p_vaddr - BASE;
        memcpy(image.data() + off, buf.data() + ph.p_offset, ph.p_filesz);
        for (uint32_t z = ph.p_filesz; z < ph.p_memsz; z++) image[off + z] = 0;
    }
    return true;
}

int main(int argc, char** argv) {
    if (argc < 6) {
        fprintf(stderr, "usage: %s <elf> <sig_out> <begin_sig_hex> <end_sig_hex> <tohost_hex> [max_cycles]\n", argv[0]);
        return 1;
    }
    const char* elf_path = argv[1];
    const char* sig_out  = argv[2];
    uint32_t begin_sig   = strtoul(argv[3], nullptr, 16);
    uint32_t end_sig     = strtoul(argv[4], nullptr, 16);
    uint32_t tohost_addr = strtoul(argv[5], nullptr, 16);
    uint64_t max_cycles  = (argc > 6) ? strtoull(argv[6], nullptr, 10) : 2000000ULL;

    std::vector<uint8_t> image(MEM_BYTES, 0);
    if (!load_elf(elf_path, image)) return 1;

    Verilated::commandArgs(argc, argv);
    VAdvaita_V* dut = new VAdvaita_V;

    for (uint32_t i = 0; i < MEM_BYTES; i++) {
        dut->rootp->Advaita_V__DOT__i_imem__DOT__mem[i] = image[i];
        dut->rootp->Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem[i] = image[i];
    }

    dut->reset = 1;
    dut->ext_inst_we = 0;
    dut->ext_write_inst = 0;
    dut->ext_interrupts = 0;
    dut->clk = 0;

    for (int i = 0; i < 4; i++) {
        dut->clk = 0; dut->eval();
        dut->clk = 1; dut->eval();
    }
    dut->reset = 0;

    uint32_t tohost_off = tohost_addr - BASE;
    bool halted = false;
    uint64_t cycle = 0;

    for (; cycle < max_cycles; cycle++) {
        dut->clk = 0; dut->eval();
        dut->clk = 1; dut->eval();

        uint32_t tohost_val =
              dut->rootp->Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem[tohost_off]
            | (dut->rootp->Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem[tohost_off+1] << 8)
            | (dut->rootp->Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem[tohost_off+2] << 16)
            | (dut->rootp->Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem[tohost_off+3] << 24);

        if (tohost_val != 0) { halted = true; break; }
    }

    if (!halted) {
        fprintf(stderr, "TIMEOUT after %llu cycles (no tohost write) — %s\n",
                (unsigned long long)cycle, elf_path);
    }

    std::ofstream out(sig_out);
    if (!out) { fprintf(stderr, "cannot write %s\n", sig_out); delete dut; return 1; }
    for (uint32_t addr = begin_sig; addr < end_sig; addr += 4) {
        uint32_t off = addr - BASE;
        uint32_t word = dut->rootp->Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem[off]
                       | (dut->rootp->Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem[off+1] << 8)
                       | (dut->rootp->Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem[off+2] << 16)
                       | (dut->rootp->Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem[off+3] << 24);
        char line[16];
        snprintf(line, sizeof(line), "%08x\n", word);
        out << line;
    }

    delete dut;
    return halted ? 0 : 2;
}
```

If your core loads programs through a self-clocking write port instead of
exposing plain memory arrays, drive that port during a load phase and
issue a second `reset` afterward, rather than poking arrays directly.

## 11. Build the simulator

This is the same command as step 10's header-only pass, plus `--exe
--build` and `sim_main.cpp` — it recompiles everything into the actual
simulator binary:

```bash
cd ~/compliance_test/sim
# sim_main.cpp should already be here from step 10

verilator --cc --exe --build -Wno-fatal --top-module Advaita_V \
  --Mdir obj_dir -O2 \
  -I/home/<you>/compliance_test/design \
  Advaita_V.sv alu.sv alu_control.sv csr_bank.sv data_mem_wrapper.sv \
  data_memory.sv decoder.sv ex_stage.sv id_stage.sv if_stage.sv \
  imm_generator.sv inst_memory.sv main_control.sv register_file.sv \
  reset_sync.sv single_cycle_riscv.sv wb_stage.sv \
  sim_main.cpp
```
Adjust the `.sv` list, `--top-module`, and `-I` path to your own core.
Re-run this whole command any time RTL *or* `sim_main.cpp` changes.

## 12. `run_tests.sh`

```bash
#!/usr/bin/env bash
set -u
ARCHTEST=~/compliance_test/riscv-arch-test
SIM=~/compliance_test/sim/obj_dir/VAdvaita_V
OUTDIR=~/compliance_test/sim/results
EXTS="I Zicsr"
mkdir -p "$OUTDIR"

PASS=0
FAIL=0

for ext in $EXTS; do
  for elf in "$ARCHTEST"/work/advaita-RVI20U32/build/rv32i/$ext/*.sig.elf; do
    name=$(basename "$elf" .sig.elf)
    sail_sig="$ARCHTEST/work/advaita-RVI20U32/build/rv32i/$ext/${name}.sig"
    [ -f "$sail_sig" ] || { echo "SKIP (no sail sig): $name"; continue; }

    addrs=$(riscv-none-elf-nm "$elf" | grep -E "begin_signature|end_signature|^[0-9a-f]+ D tohost")
    begin=$(echo "$addrs" | awk '/begin_signature/{print $1}')
    end=$(echo "$addrs"   | awk '/end_signature/{print $1}')
    tohost=$(echo "$addrs" | awk '/tohost/{print $1}')

    my_sig="$OUTDIR/${ext}_${name}.sig"
    "$SIM" "$elf" "$my_sig" "$begin" "$end" "$tohost" 2000000 2> "$OUTDIR/${ext}_${name}.log"

    if diff -q "$sail_sig" "$my_sig" > /dev/null 2>&1; then
      echo "PASS: $ext/$name"
      PASS=$((PASS+1))
    else
      echo "FAIL: $ext/$name  (see $OUTDIR/${ext}_${name}.log)"
      FAIL=$((FAIL+1))
    fi
  done
done

echo
echo "=== $PASS passed, $FAIL failed ==="
```

```bash
chmod +x ~/compliance_test/sim/run_tests.sh
cd ~/compliance_test/sim
./run_tests.sh
```

---

## Appendix: Writing a top-level wrapper for a different DUT

Everything above was written against `Advaita_V.sv` as the worked
example. If you're adapting this flow for a *different* core, here's
the actual contract `sim_main.cpp` and this build flow require — plus
`Advaita_V.sv` itself as a concrete illustration of a wrapper that
satisfies it, since it's real, working RTL, not a hypothetical template.

### The contract

A DUT top module is compatible with this flow if it satisfies all of
the following. Everything else about its internals — pipelining style,
interrupt handling, debug outputs, CSR structure — is free to differ.

1. **`clk` and `reset` ports, and nothing else required.**
   `sim_main.cpp` only ever drives these two. Any other input ports
   (interrupt lines, external instruction-load ports, etc.) are fine to
   have, but the testbench will tie them to `0` and never touch them
   again — see `Advaita_V.sv`'s `ext_write_inst`, `ext_inst_we`,
   `ext_interrupts`, all tied off at init in step 10's `sim_main.cpp`.

2. **Reset must bring the PC to the same address as `link.ld`'s
   `RAM_ORIGIN`/`TEST_BASE`** (`0x80000000` throughout this guide). In
   `Advaita_V.sv`'s case this happens in `if_stage.sv`:
   ```systemverilog
   always_ff @(posedge clk or posedge reset) begin
       if (reset)
           address <= 32'h8000_0000;
   ```
   This is the single most common thing to get wrong when wiring up a
   new core — see step 7's `RAM_ORIGIN` note.

3. **Instruction fetch must be combinational with respect to PC** — see
   step 8. `Advaita_V.sv`'s `inst_memory.sv` does this with an
   `always_comb` block gated on `cs_n`/`we_n`/`in_range`, defaulting to
   a NOP (`32'h00000013`) outside valid range or during reset.

4. **Instruction and data memories must be plain, byte-addressable
   arrays (`logic [7:0] mem [0:MEM_BYTES-1]`) reachable from the DUT's
   root scope by hierarchical path.** This is what makes step 10's
   `grep -n "mem" obj_dir/V<Top>___024root.h` and the direct
   `rootp->...__DOT__...mem[i]` pokes in `sim_main.cpp` work at all. In
   `Advaita_V.sv`'s hierarchy this resolves to:
   - `Advaita_V__DOT__i_imem__DOT__mem` — the `inst_memory` instance,
     directly inside the top module.
   - `Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem` —
     nested two levels deep, since data memory here goes through a
     `data_mem_wrapper` (handles load/store byte-alignment and
     sign/zero extension) before reaching the raw `data_memory` module
     that actually holds the array.

   The nesting depth doesn't matter — one level or three, `grep` finds
   the real mangled name either way. What matters is that the array is
   a plain array, not hidden behind a SystemVerilog `interface`, a
   `generate` block with a variable index, or memory-compiler IP with
   an opaque model — any of those make the hierarchical path harder or
   impossible to reach directly, and would need a different loading
   strategy (see point 6).

5. **`tohost` needs no special MMIO decode logic.** Because it's just
   a normal address inside the data memory's range (placed there by
   `link.ld`'s `.tohost` section, at whatever address the compiled
   ELF's symbol table reports), a plain `sw` instruction from your
   `rvmodel_macros.h`'s `RVMODEL_HALT_PASS`/`RVMODEL_HALT_FAIL` reaches
   it through the same store path as any other data write — no
   dedicated hardware needed. `sim_main.cpp` polls that address (from
   the ELF's `tohost` symbol, resolved at step 9) after every clock
   edge.

6. **If your core doesn't expose plain memory arrays** (point 4
   doesn't hold — e.g. memory-compiler IP, an interface-wrapped
   memory, or a design that intentionally hides its internals behind a
   loader port), direct `rootp->` poking won't work. In that case the
   wrapper needs to expose a self-clocking write port instead —
   `Advaita_V.sv`'s `ext_write_inst`/`ext_inst_we` inputs are exactly
   this pattern for instruction memory (one word written per cycle
   while `ext_inst_we` is high, at whatever address the memory's
   internal write pointer is on). `sim_main.cpp` would then need a load
   phase that drives this port once per word instead of poking the
   array directly, followed by a second `reset` pulse to bring the PC
   back to `RAM_ORIGIN` before execution starts. This guide's
   `sim_main.cpp` doesn't implement that path — it assumes point 4
   holds — so building it out is the one piece of custom testbench work
   a truly opaque-memory DUT requires.

### Minimal wrapper skeleton

Trimmed down to just what's required by the contract above (dropping
`Advaita_V.sv`'s debug outputs, interrupt plumbing, and CSR bank, which
are specific to that core and not part of the compliance-test
interface):

```systemverilog
module YourCore (
    input  logic        clk,
    input  logic        reset
    // any other ports are fine — the testbench never drives them
);

    wire [31:0] instruction;
    wire [31:0] pc_address;
    // ... your core's other internal wires ...

    your_inst_memory i_imem (
        .clk        (clk),
        .reset      (reset),
        .address    (pc_address),
        .instruction(instruction)
        // combinational read w.r.t. pc_address — see point 3
    );

    your_cpu_core i_cpu_core (
        .clk        (clk),
        .reset      (reset),
        .instruction(instruction),
        .pc         (pc_address),
        // reset drives pc to 32'h8000_0000 — see point 2
        // ... rest of your core's ports ...
    );

    your_data_memory i_dmem (
        .clk   (clk),
        .reset (reset),
        // plain byte-addressable array inside, reachable by
        // hierarchical path — see point 4
        // ... your core's data-memory ports ...
    );

endmodule
```

Once a wrapper like this exists, everything from step 9 onward in this
guide applies unchanged — only the module name, `.sv` file list, and
the mangled hierarchical paths in `sim_main.cpp` need to change to
match.

## Common fixes if something breaks

- **`sail_riscv_sim` not found** → either PATH isn't picking up `~/bin`
  yet (`source ~/.bashrc && hash -r`), or the binary landed at
  `~/bin/bin/sail_riscv_sim` instead of `~/bin/sail_riscv_sim` — step 2's
  PATH line covers both locations, but confirm with
  `find ~/bin -name sail_riscv_sim`.
- **`mise ... not trusted`** → `mise trust` in the repo root.
- **`Command 'mise' not found`** → install it with the official script in
  step 1 (`curl https://mise.jdx.dev/install.sh | sh`) — don't use the
  `snap install mise` apt suggests.
- **`Neither uv nor mise found`** → install `uv` (step 1), open a fresh
  terminal or `source ~/.bashrc`.
- **`Gem::FilePermissionError` on `gem install bundler`** → use
  `gem install bundler --user-install` (step 1 already does this) — the
  system gem directory isn't writable by a regular user.
- **`Bundle not found` from the Makefile** → bundler installed but isn't
  on PATH; re-run the `RUBY_GEM_BIN` PATH line from step 1.
- **Linker relocation errors** → add `-mno-relax` to the gcc invocation.
- **WSL2 OOM during `make`** → raise `memory`/`swap` in
  `%UserProfile%\.wslconfig`, then `wsl --shutdown` from **PowerShell**
  (not from inside WSL).
- **`/usr/bin/env: 'bash\r': No such file or directory` when running
  `run_tests.sh`** → the script has Windows (`\r\n`) line endings, likely
  from creating/editing it in a Windows-side editor on WSL. Fix in place:
  `sed -i 's/\r$//' run_tests.sh` (or `dos2unix run_tests.sh`), then
  re-run. Check with `file run_tests.sh` — it shouldn't mention "CRLF".
- **`segment out of range: vaddr=... memsz=...` in a test's `.log`, and
  no instructions ran for that test** → your simulator's `MEM_BYTES` is
  too small for that test's actual compiled size — `load_elf()` in
  `sim_main.cpp` refuses to load it and exits before any cycle runs, so
  "nothing executed" is expected here, not a functional bug. This shows
  up reliably once you add extensions with bigger test suites (`M`
  especially) on top of a `MEM_BYTES` sized for `I`/`Zicsr` alone (see
  step 7's memory-sizing note). Compute the real minimum you need and
  raise `MEM_BYTES` (`sim_main.cpp`), `RAM_LENGTH` (`link.ld`), and your
  RTL's memory array size together — all three, or the mismatch just
  moves somewhere else:
  ```bash
  cd ~/compliance_test/riscv-arch-test
  for elf in work/advaita-RVI20U32/build/rv32i/*/*.sig.elf; do
    riscv-none-elf-readelf -l "$elf" 2>/dev/null | awk '/LOAD/{print $4, $6}'
  done | awk '{split($1,a,"x"); split($2,b,"x"); v=strtonum("0x"a[2]); m=strtonum("0x"b[2]); if (v+m-2147483648 > max) max=v+m-2147483648} END{printf "%d bytes (0x%x)\n", max, max}'
  ```
  Round the result up (e.g. to the next power of two) for headroom, then
  rebuild the ELFs (`link.ld` changed) and the simulator (`sim_main.cpp`
  and/or RTL changed) before re-running `run_tests.sh`.
- **Wrong `rootp->` array name** → regenerate: `grep -n "mem" obj_dir/V<Top>___024root.h`.
- **Sporadic mismatches on branches/JAL/JALR/AUIPC** → step 8, instruction
  memory read isn't combinational.
- **A single test fails during `make ... elfs`** → that's sail failing on
  its own generated binary, not your core; check
  `work/advaita-RVI20U32/build/rv32i/<ext>/<test>.sig.log` before assuming
  it's your fault.
