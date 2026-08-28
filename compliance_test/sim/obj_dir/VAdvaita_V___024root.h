// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAdvaita_V.h for the primary calling header

#ifndef VERILATED_VADVAITA_V___024ROOT_H_
#define VERILATED_VADVAITA_V___024ROOT_H_  // guard

#include "verilated.h"


class VAdvaita_V__Syms;

class alignas(VL_CACHE_LINE_BYTES) VAdvaita_V___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ Advaita_V__DOT__i_reset_sync__DOT__reset_ff2;
    VL_IN8(ext_inst_we,0,0);
    VL_OUT8(trap_active_o,0,0);
    CData/*0:0*/ Advaita_V__DOT__mem_write_en;
    CData/*0:0*/ Advaita_V__DOT__mem_read_en;
    CData/*0:0*/ Advaita_V__DOT__csr_write_en;
    CData/*0:0*/ Advaita_V__DOT__trap_detected;
    CData/*0:0*/ Advaita_V__DOT__is_mret_instr;
    CData/*0:0*/ Advaita_V__DOT__interrupt_pending_wire;
    CData/*0:0*/ Advaita_V__DOT__i_reset_sync__DOT__reset_ff1;
    CData/*0:0*/ Advaita_V__DOT__i_imem__DOT__in_range;
    CData/*4:0*/ Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd;
    CData/*0:0*/ Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__gated_reg_write;
    CData/*3:0*/ Advaita_V__DOT__i_dmem_subsystem__DOT__internal_be;
    CData/*0:0*/ Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__in_range;
    CData/*0:0*/ __VdfgTmp_hfc48439b__0;
    CData/*7:0*/ __VdfgTmp_ha727496b__0;
    CData/*7:0*/ __VdfgTmp_h58517da4__0;
    CData/*0:0*/ __VdfgTmp_ha0d88f65__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Advaita_V__DOT__i_reset_sync__DOT__reset_ff2__0;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ Advaita_V__DOT__csr_address;
    SData/*15:0*/ Advaita_V__DOT__i_dmem_subsystem__DOT__half_to_ext;
    VL_IN(ext_write_inst,31,0);
    VL_IN(ext_interrupts,31,0);
    VL_OUT(mstatus_o,31,0);
    VL_OUT(pc_debug_o,31,0);
    IData/*31:0*/ Advaita_V__DOT__instruction;
    IData/*31:0*/ Advaita_V__DOT__pc_address;
    IData/*31:0*/ Advaita_V__DOT__alu_result;
    IData/*31:0*/ Advaita_V__DOT__rs2_data;
    IData/*31:0*/ Advaita_V__DOT__cpu_mem_out;
    IData/*31:0*/ Advaita_V__DOT__exc_cause;
    IData/*31:0*/ Advaita_V__DOT__exc_tval;
    IData/*31:0*/ Advaita_V__DOT__i_cpu_core__DOT__wb_data;
    IData/*31:0*/ Advaita_V__DOT__i_cpu_core__DOT__int_cause;
    IData/*31:0*/ Advaita_V__DOT__i_cpu_core__DOT__if_st__DOT__pc_next;
    IData/*31:0*/ Advaita_V__DOT__i_csr_bank__DOT__mstatus;
    IData/*31:0*/ Advaita_V__DOT__i_csr_bank__DOT__mtvec;
    IData/*31:0*/ Advaita_V__DOT__i_csr_bank__DOT__mepc;
    IData/*31:0*/ Advaita_V__DOT__i_csr_bank__DOT__mcause;
    IData/*31:0*/ Advaita_V__DOT__i_csr_bank__DOT__mtval;
    IData/*31:0*/ Advaita_V__DOT__i_csr_bank__DOT__mscratch;
    IData/*31:0*/ Advaita_V__DOT__i_csr_bank__DOT__mie;
    IData/*31:0*/ Advaita_V__DOT__i_csr_bank__DOT__mip;
    IData/*31:0*/ Advaita_V__DOT__i_dmem_subsystem__DOT__swizzled_write_data;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ Advaita_V__DOT__i_csr_bank__DOT__mcycle;
    QData/*63:0*/ Advaita_V__DOT__i_csr_bank__DOT__minstret;
    VlUnpacked<CData/*7:0*/, 262144> Advaita_V__DOT__i_imem__DOT__mem;
    VlUnpacked<IData/*31:0*/, 32> Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register;
    VlUnpacked<CData/*7:0*/, 262144> Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VAdvaita_V__Syms* const vlSymsp;

    // CONSTRUCTORS
    VAdvaita_V___024root(VAdvaita_V__Syms* symsp, const char* v__name);
    ~VAdvaita_V___024root();
    VL_UNCOPYABLE(VAdvaita_V___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
