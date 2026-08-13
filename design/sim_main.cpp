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
static constexpr uint32_t MEM_BYTES = 262144u;

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