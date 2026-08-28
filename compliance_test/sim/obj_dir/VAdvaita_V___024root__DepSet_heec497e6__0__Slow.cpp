// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAdvaita_V.h for the primary calling header

#include "VAdvaita_V__pch.h"
#include "VAdvaita_V___024root.h"

VL_ATTR_COLD void VAdvaita_V___024root___eval_static(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___eval_static\n"); );
}

VL_ATTR_COLD void VAdvaita_V___024root___eval_initial(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
    vlSelf->__Vtrigprevexpr___TOP__Advaita_V__DOT__i_reset_sync__DOT__reset_ff2__0 
        = vlSelf->Advaita_V__DOT__i_reset_sync__DOT__reset_ff2;
}

VL_ATTR_COLD void VAdvaita_V___024root___eval_final(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAdvaita_V___024root___dump_triggers__stl(VAdvaita_V___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VAdvaita_V___024root___eval_phase__stl(VAdvaita_V___024root* vlSelf);

VL_ATTR_COLD void VAdvaita_V___024root___eval_settle(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VAdvaita_V___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/chips/Desktop/compliance_test/design/Advaita_V.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VAdvaita_V___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAdvaita_V___024root___dump_triggers__stl(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VAdvaita_V___024root___stl_sequent__TOP__0(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ Advaita_V__DOT__instr_fn3;
    Advaita_V__DOT__instr_fn3 = 0;
    CData/*6:0*/ Advaita_V__DOT__instr_opcode;
    Advaita_V__DOT__instr_opcode = 0;
    IData/*31:0*/ Advaita_V__DOT__csr_rdata_wire;
    Advaita_V__DOT__csr_rdata_wire = 0;
    IData/*31:0*/ Advaita_V__DOT__i_cpu_core__DOT__rs1_data;
    Advaita_V__DOT__i_cpu_core__DOT__rs1_data = 0;
    IData/*31:0*/ Advaita_V__DOT__i_cpu_core__DOT__imm_out;
    Advaita_V__DOT__i_cpu_core__DOT__imm_out = 0;
    IData/*31:0*/ Advaita_V__DOT__i_cpu_core__DOT__pc_signed_offset;
    Advaita_V__DOT__i_cpu_core__DOT__pc_signed_offset = 0;
    CData/*0:0*/ Advaita_V__DOT__i_cpu_core__DOT__and_out_ex;
    Advaita_V__DOT__i_cpu_core__DOT__and_out_ex = 0;
    CData/*0:0*/ Advaita_V__DOT__i_cpu_core__DOT__branch;
    Advaita_V__DOT__i_cpu_core__DOT__branch = 0;
    CData/*0:0*/ Advaita_V__DOT__i_cpu_core__DOT__alu_src;
    Advaita_V__DOT__i_cpu_core__DOT__alu_src = 0;
    CData/*1:0*/ Advaita_V__DOT__i_cpu_core__DOT__memtoreg;
    Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0;
    CData/*2:0*/ Advaita_V__DOT__i_cpu_core__DOT__aluop;
    Advaita_V__DOT__i_cpu_core__DOT__aluop = 0;
    CData/*0:0*/ Advaita_V__DOT__i_cpu_core__DOT__fn7_5;
    Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0;
    CData/*0:0*/ Advaita_V__DOT__i_cpu_core__DOT__mux_inp;
    Advaita_V__DOT__i_cpu_core__DOT__mux_inp = 0;
    CData/*6:0*/ Advaita_V__DOT__i_cpu_core__DOT__fn7;
    Advaita_V__DOT__i_cpu_core__DOT__fn7 = 0;
    CData/*6:0*/ Advaita_V__DOT__i_cpu_core__DOT__imm11_5;
    Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0;
    CData/*0:0*/ Advaita_V__DOT__i_cpu_core__DOT__sw_trap;
    Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0;
    CData/*0:0*/ Advaita_V__DOT__i_cpu_core__DOT__mem_write_raw;
    Advaita_V__DOT__i_cpu_core__DOT__mem_write_raw = 0;
    CData/*0:0*/ Advaita_V__DOT__i_cpu_core__DOT__mem_read_raw;
    Advaita_V__DOT__i_cpu_core__DOT__mem_read_raw = 0;
    CData/*0:0*/ Advaita_V__DOT__i_cpu_core__DOT__illegal_instr;
    Advaita_V__DOT__i_cpu_core__DOT__illegal_instr = 0;
    CData/*0:0*/ Advaita_V__DOT__i_cpu_core__DOT__load_misaligned;
    Advaita_V__DOT__i_cpu_core__DOT__load_misaligned = 0;
    CData/*0:0*/ Advaita_V__DOT__i_cpu_core__DOT__store_misaligned;
    Advaita_V__DOT__i_cpu_core__DOT__store_misaligned = 0;
    CData/*0:0*/ Advaita_V__DOT__i_cpu_core__DOT__instr_misaligned;
    Advaita_V__DOT__i_cpu_core__DOT__instr_misaligned = 0;
    IData/*31:0*/ Advaita_V__DOT__i_cpu_core__DOT__actual_branch_target;
    Advaita_V__DOT__i_cpu_core__DOT__actual_branch_target = 0;
    CData/*0:0*/ Advaita_V__DOT__i_cpu_core__DOT____VdfgTmp_hef36f37c__0;
    Advaita_V__DOT__i_cpu_core__DOT____VdfgTmp_hef36f37c__0 = 0;
    CData/*0:0*/ Advaita_V__DOT__i_cpu_core__DOT____VdfgTmp_h8574b542__0;
    Advaita_V__DOT__i_cpu_core__DOT____VdfgTmp_h8574b542__0 = 0;
    CData/*1:0*/ Advaita_V__DOT__i_cpu_core__DOT__if_st__DOT__pc_sel;
    Advaita_V__DOT__i_cpu_core__DOT__if_st__DOT__pc_sel = 0;
    CData/*4:0*/ Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1;
    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0;
    CData/*4:0*/ Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2;
    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0;
    SData/*11:0*/ Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s;
    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0;
    IData/*19:0*/ Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j;
    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0;
    CData/*0:0*/ Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_write_out;
    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_write_out = 0;
    SData/*11:0*/ Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT____Vcellinp__mc__inst;
    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT____Vcellinp__mc__inst = 0;
    IData/*31:0*/ Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operand_b;
    Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operand_b = 0;
    CData/*0:0*/ Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__branch_taken;
    Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__branch_taken = 0;
    CData/*4:0*/ Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation;
    Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation = 0;
    CData/*0:0*/ Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_unit__DOT____VdfgExtracted_hb991dac8__0;
    Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_unit__DOT____VdfgExtracted_hb991dac8__0 = 0;
    IData/*31:0*/ Advaita_V__DOT__i_cpu_core__DOT__wb_st__DOT__pre_wb_data;
    Advaita_V__DOT__i_cpu_core__DOT__wb_st__DOT__pre_wb_data = 0;
    IData/*31:0*/ Advaita_V__DOT__i_dmem_subsystem__DOT__raw_mem_read_data;
    Advaita_V__DOT__i_dmem_subsystem__DOT__raw_mem_read_data = 0;
    CData/*7:0*/ Advaita_V__DOT__i_dmem_subsystem__DOT__byte_to_ext;
    Advaita_V__DOT__i_dmem_subsystem__DOT__byte_to_ext = 0;
    CData/*0:0*/ __VdfgTmp_hf9b71b32__0;
    __VdfgTmp_hf9b71b32__0 = 0;
    // Body
    vlSelf->pc_debug_o = vlSelf->Advaita_V__DOT__pc_address;
    vlSelf->mstatus_o = vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mstatus;
    vlSelf->Advaita_V__DOT__interrupt_pending_wire 
        = ((vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mstatus 
            >> 3U) & (0U != (0x888U & (vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mie 
                                       & vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mip))));
    vlSelf->__VdfgTmp_h58517da4__0 = vlSelf->Advaita_V__DOT__i_imem__DOT__mem
        [(0x3ffffU & ((IData)(2U) + vlSelf->Advaita_V__DOT__pc_address))];
    vlSelf->__VdfgTmp_ha727496b__0 = vlSelf->Advaita_V__DOT__i_imem__DOT__mem
        [(0x3ffffU & ((IData)(3U) + vlSelf->Advaita_V__DOT__pc_address))];
    vlSelf->Advaita_V__DOT__i_imem__DOT__in_range = 
        ((0x80000000U <= vlSelf->Advaita_V__DOT__pc_address) 
         & ((0x40000U > (vlSelf->Advaita_V__DOT__pc_address 
                         - (IData)(0x80000000U))) & 
            (0U == (3U & vlSelf->Advaita_V__DOT__pc_address))));
    vlSelf->Advaita_V__DOT__i_cpu_core__DOT__int_cause = 0U;
    if (vlSelf->Advaita_V__DOT__interrupt_pending_wire) {
        if ((0x800U & vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mie)) {
            vlSelf->Advaita_V__DOT__i_cpu_core__DOT__int_cause = 0x8000000bU;
        } else if ((8U & vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mie)) {
            vlSelf->Advaita_V__DOT__i_cpu_core__DOT__int_cause = 0x80000003U;
        } else if ((0x80U & vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mie)) {
            vlSelf->Advaita_V__DOT__i_cpu_core__DOT__int_cause = 0x80000007U;
        }
    }
    vlSelf->__VdfgTmp_hfc48439b__0 = ((~ (IData)(vlSelf->ext_inst_we)) 
                                      & (IData)(vlSelf->Advaita_V__DOT__i_imem__DOT__in_range));
    if (vlSelf->Advaita_V__DOT__i_reset_sync__DOT__reset_ff2) {
        Advaita_V__DOT__i_cpu_core__DOT__fn7 = 0U;
        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT____Vcellinp__mc__inst = 0U;
        vlSelf->Advaita_V__DOT__instruction = 0x13U;
    } else if (vlSelf->__VdfgTmp_hfc48439b__0) {
        Advaita_V__DOT__i_cpu_core__DOT__fn7 = (0x7fU 
                                                & ((IData)(vlSelf->__VdfgTmp_ha727496b__0) 
                                                   >> 1U));
        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT____Vcellinp__mc__inst 
            = (((IData)(vlSelf->__VdfgTmp_ha727496b__0) 
                << 4U) | (0xfU & ((IData)(vlSelf->__VdfgTmp_h58517da4__0) 
                                  >> 4U)));
        vlSelf->Advaita_V__DOT__instruction = (((IData)(vlSelf->__VdfgTmp_ha727496b__0) 
                                                << 0x18U) 
                                               | (((IData)(vlSelf->__VdfgTmp_h58517da4__0) 
                                                   << 0x10U) 
                                                  | ((vlSelf->Advaita_V__DOT__i_imem__DOT__mem
                                                      [
                                                      (0x3ffffU 
                                                       & ((IData)(1U) 
                                                          + vlSelf->Advaita_V__DOT__pc_address))] 
                                                      << 8U) 
                                                     | vlSelf->Advaita_V__DOT__i_imem__DOT__mem
                                                     [
                                                     (0x3ffffU 
                                                      & vlSelf->Advaita_V__DOT__pc_address)])));
    } else {
        Advaita_V__DOT__i_cpu_core__DOT__fn7 = 0U;
        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT____Vcellinp__mc__inst = 0U;
        vlSelf->Advaita_V__DOT__instruction = 0x13U;
    }
    vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
    Advaita_V__DOT__instr_fn3 = 0U;
    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
    Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
    Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
    vlSelf->Advaita_V__DOT__csr_address = 0U;
    Advaita_V__DOT__instr_opcode = (0x7fU & vlSelf->Advaita_V__DOT__instruction);
    if ((0x40U & (IData)(Advaita_V__DOT__instr_opcode))) {
        if ((0x20U & (IData)(Advaita_V__DOT__instr_opcode))) {
            if ((0x10U & (IData)(Advaita_V__DOT__instr_opcode))) {
                if ((8U & (IData)(Advaita_V__DOT__instr_opcode))) {
                    vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
                    Advaita_V__DOT__instr_fn3 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
                    Advaita_V__DOT__instr_opcode = 
                        (0x7fU & vlSelf->Advaita_V__DOT__instruction);
                    vlSelf->Advaita_V__DOT__csr_address = 0U;
                } else if ((4U & (IData)(Advaita_V__DOT__instr_opcode))) {
                    vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
                    Advaita_V__DOT__instr_fn3 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
                    Advaita_V__DOT__instr_opcode = 
                        (0x7fU & vlSelf->Advaita_V__DOT__instruction);
                    vlSelf->Advaita_V__DOT__csr_address = 0U;
                } else if ((2U & (IData)(Advaita_V__DOT__instr_opcode))) {
                    if ((1U & (IData)(Advaita_V__DOT__instr_opcode))) {
                        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd 
                            = (0x1fU & (vlSelf->Advaita_V__DOT__instruction 
                                        >> 7U));
                        Advaita_V__DOT__instr_fn3 = 
                            (7U & (vlSelf->Advaita_V__DOT__instruction 
                                   >> 0xcU));
                        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 
                            = (0x1fU & (vlSelf->Advaita_V__DOT__instruction 
                                        >> 0xfU));
                        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 
                            = (0x1fU & (vlSelf->Advaita_V__DOT__instruction 
                                        >> 0xfU));
                        vlSelf->Advaita_V__DOT__csr_address 
                            = (vlSelf->Advaita_V__DOT__instruction 
                               >> 0x14U);
                    } else {
                        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
                        Advaita_V__DOT__instr_fn3 = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
                        Advaita_V__DOT__instr_opcode 
                            = (0x7fU & vlSelf->Advaita_V__DOT__instruction);
                        vlSelf->Advaita_V__DOT__csr_address = 0U;
                    }
                } else {
                    vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
                    Advaita_V__DOT__instr_fn3 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
                    Advaita_V__DOT__instr_opcode = 
                        (0x7fU & vlSelf->Advaita_V__DOT__instruction);
                    vlSelf->Advaita_V__DOT__csr_address = 0U;
                }
            } else if ((8U & (IData)(Advaita_V__DOT__instr_opcode))) {
                if ((4U & (IData)(Advaita_V__DOT__instr_opcode))) {
                    if ((2U & (IData)(Advaita_V__DOT__instr_opcode))) {
                        if ((1U & (IData)(Advaita_V__DOT__instr_opcode))) {
                            vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd 
                                = (0x1fU & (vlSelf->Advaita_V__DOT__instruction 
                                            >> 7U));
                            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j 
                                = ((0x80000U & (vlSelf->Advaita_V__DOT__instruction 
                                                >> 0xcU)) 
                                   | ((0x7f800U & (vlSelf->Advaita_V__DOT__instruction 
                                                   >> 1U)) 
                                      | ((0x400U & 
                                          (vlSelf->Advaita_V__DOT__instruction 
                                           >> 0xaU)) 
                                         | (0x3ffU 
                                            & (vlSelf->Advaita_V__DOT__instruction 
                                               >> 0x15U)))));
                        } else {
                            vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
                            Advaita_V__DOT__instr_fn3 = 0U;
                            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
                            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
                            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
                            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
                            Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
                            Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
                            Advaita_V__DOT__instr_opcode 
                                = (0x7fU & vlSelf->Advaita_V__DOT__instruction);
                            vlSelf->Advaita_V__DOT__csr_address = 0U;
                        }
                    } else {
                        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
                        Advaita_V__DOT__instr_fn3 = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
                        Advaita_V__DOT__instr_opcode 
                            = (0x7fU & vlSelf->Advaita_V__DOT__instruction);
                        vlSelf->Advaita_V__DOT__csr_address = 0U;
                    }
                } else {
                    vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
                    Advaita_V__DOT__instr_fn3 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
                    Advaita_V__DOT__instr_opcode = 
                        (0x7fU & vlSelf->Advaita_V__DOT__instruction);
                    vlSelf->Advaita_V__DOT__csr_address = 0U;
                }
            } else if ((4U & (IData)(Advaita_V__DOT__instr_opcode))) {
                if ((2U & (IData)(Advaita_V__DOT__instr_opcode))) {
                    if ((1U & (IData)(Advaita_V__DOT__instr_opcode))) {
                        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd 
                            = (0x1fU & (vlSelf->Advaita_V__DOT__instruction 
                                        >> 7U));
                        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 
                            = (0x1fU & (vlSelf->Advaita_V__DOT__instruction 
                                        >> 0xfU));
                        Advaita_V__DOT__instr_fn3 = 
                            (7U & (vlSelf->Advaita_V__DOT__instruction 
                                   >> 0xcU));
                        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s 
                            = (vlSelf->Advaita_V__DOT__instruction 
                               >> 0x14U);
                    } else {
                        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
                        Advaita_V__DOT__instr_fn3 = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
                        Advaita_V__DOT__instr_opcode 
                            = (0x7fU & vlSelf->Advaita_V__DOT__instruction);
                        vlSelf->Advaita_V__DOT__csr_address = 0U;
                    }
                } else {
                    vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
                    Advaita_V__DOT__instr_fn3 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
                    Advaita_V__DOT__instr_opcode = 
                        (0x7fU & vlSelf->Advaita_V__DOT__instruction);
                    vlSelf->Advaita_V__DOT__csr_address = 0U;
                }
            } else if ((2U & (IData)(Advaita_V__DOT__instr_opcode))) {
                if ((1U & (IData)(Advaita_V__DOT__instr_opcode))) {
                    Advaita_V__DOT__instr_fn3 = (7U 
                                                 & (vlSelf->Advaita_V__DOT__instruction 
                                                    >> 0xcU));
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 
                        = (0x1fU & (vlSelf->Advaita_V__DOT__instruction 
                                    >> 0xfU));
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 
                        = (0x1fU & (vlSelf->Advaita_V__DOT__instruction 
                                    >> 0x14U));
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s 
                        = ((0x800U & (vlSelf->Advaita_V__DOT__instruction 
                                      >> 0x14U)) | 
                           ((0x400U & (vlSelf->Advaita_V__DOT__instruction 
                                       << 3U)) | ((0x3f0U 
                                                   & (vlSelf->Advaita_V__DOT__instruction 
                                                      >> 0x15U)) 
                                                  | (0xfU 
                                                     & (vlSelf->Advaita_V__DOT__instruction 
                                                        >> 8U)))));
                } else {
                    vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
                    Advaita_V__DOT__instr_fn3 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
                    Advaita_V__DOT__instr_opcode = 
                        (0x7fU & vlSelf->Advaita_V__DOT__instruction);
                    vlSelf->Advaita_V__DOT__csr_address = 0U;
                }
            } else {
                vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
                Advaita_V__DOT__instr_fn3 = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
                Advaita_V__DOT__instr_opcode = (0x7fU 
                                                & vlSelf->Advaita_V__DOT__instruction);
                vlSelf->Advaita_V__DOT__csr_address = 0U;
            }
        } else {
            vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
            Advaita_V__DOT__instr_fn3 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
            Advaita_V__DOT__instr_opcode = (0x7fU & vlSelf->Advaita_V__DOT__instruction);
            vlSelf->Advaita_V__DOT__csr_address = 0U;
        }
    } else if ((0x20U & (IData)(Advaita_V__DOT__instr_opcode))) {
        if ((0x10U & (IData)(Advaita_V__DOT__instr_opcode))) {
            if ((8U & (IData)(Advaita_V__DOT__instr_opcode))) {
                vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
                Advaita_V__DOT__instr_fn3 = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
                Advaita_V__DOT__instr_opcode = (0x7fU 
                                                & vlSelf->Advaita_V__DOT__instruction);
                vlSelf->Advaita_V__DOT__csr_address = 0U;
            } else if ((4U & (IData)(Advaita_V__DOT__instr_opcode))) {
                if ((2U & (IData)(Advaita_V__DOT__instr_opcode))) {
                    if ((1U & (IData)(Advaita_V__DOT__instr_opcode))) {
                        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd 
                            = (0x1fU & (vlSelf->Advaita_V__DOT__instruction 
                                        >> 7U));
                        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j 
                            = (vlSelf->Advaita_V__DOT__instruction 
                               >> 0xcU);
                    } else {
                        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
                        Advaita_V__DOT__instr_fn3 = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
                        Advaita_V__DOT__instr_opcode 
                            = (0x7fU & vlSelf->Advaita_V__DOT__instruction);
                        vlSelf->Advaita_V__DOT__csr_address = 0U;
                    }
                } else {
                    vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
                    Advaita_V__DOT__instr_fn3 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
                    Advaita_V__DOT__instr_opcode = 
                        (0x7fU & vlSelf->Advaita_V__DOT__instruction);
                    vlSelf->Advaita_V__DOT__csr_address = 0U;
                }
            } else if ((2U & (IData)(Advaita_V__DOT__instr_opcode))) {
                if ((1U & (IData)(Advaita_V__DOT__instr_opcode))) {
                    vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd 
                        = (0x1fU & (vlSelf->Advaita_V__DOT__instruction 
                                    >> 7U));
                    Advaita_V__DOT__instr_fn3 = (7U 
                                                 & (vlSelf->Advaita_V__DOT__instruction 
                                                    >> 0xcU));
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 
                        = (0x1fU & (vlSelf->Advaita_V__DOT__instruction 
                                    >> 0xfU));
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 
                        = (0x1fU & (vlSelf->Advaita_V__DOT__instruction 
                                    >> 0x14U));
                    Advaita_V__DOT__i_cpu_core__DOT__fn7_5 
                        = (1U & (vlSelf->Advaita_V__DOT__instruction 
                                 >> 0x1eU));
                } else {
                    vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
                    Advaita_V__DOT__instr_fn3 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
                    Advaita_V__DOT__instr_opcode = 
                        (0x7fU & vlSelf->Advaita_V__DOT__instruction);
                    vlSelf->Advaita_V__DOT__csr_address = 0U;
                }
            } else {
                vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
                Advaita_V__DOT__instr_fn3 = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
                Advaita_V__DOT__instr_opcode = (0x7fU 
                                                & vlSelf->Advaita_V__DOT__instruction);
                vlSelf->Advaita_V__DOT__csr_address = 0U;
            }
        } else if ((8U & (IData)(Advaita_V__DOT__instr_opcode))) {
            vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
            Advaita_V__DOT__instr_fn3 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
            Advaita_V__DOT__instr_opcode = (0x7fU & vlSelf->Advaita_V__DOT__instruction);
            vlSelf->Advaita_V__DOT__csr_address = 0U;
        } else if ((4U & (IData)(Advaita_V__DOT__instr_opcode))) {
            vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
            Advaita_V__DOT__instr_fn3 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
            Advaita_V__DOT__instr_opcode = (0x7fU & vlSelf->Advaita_V__DOT__instruction);
            vlSelf->Advaita_V__DOT__csr_address = 0U;
        } else if ((2U & (IData)(Advaita_V__DOT__instr_opcode))) {
            if ((1U & (IData)(Advaita_V__DOT__instr_opcode))) {
                Advaita_V__DOT__instr_fn3 = (7U & (vlSelf->Advaita_V__DOT__instruction 
                                                   >> 0xcU));
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 
                    = (0x1fU & (vlSelf->Advaita_V__DOT__instruction 
                                >> 0xfU));
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 
                    = (0x1fU & (vlSelf->Advaita_V__DOT__instruction 
                                >> 0x14U));
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s 
                    = ((0xfe0U & (vlSelf->Advaita_V__DOT__instruction 
                                  >> 0x14U)) | (0x1fU 
                                                & (vlSelf->Advaita_V__DOT__instruction 
                                                   >> 7U)));
            } else {
                vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
                Advaita_V__DOT__instr_fn3 = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
                Advaita_V__DOT__instr_opcode = (0x7fU 
                                                & vlSelf->Advaita_V__DOT__instruction);
                vlSelf->Advaita_V__DOT__csr_address = 0U;
            }
        } else {
            vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
            Advaita_V__DOT__instr_fn3 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
            Advaita_V__DOT__instr_opcode = (0x7fU & vlSelf->Advaita_V__DOT__instruction);
            vlSelf->Advaita_V__DOT__csr_address = 0U;
        }
    } else if ((0x10U & (IData)(Advaita_V__DOT__instr_opcode))) {
        if ((8U & (IData)(Advaita_V__DOT__instr_opcode))) {
            vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
            Advaita_V__DOT__instr_fn3 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
            Advaita_V__DOT__instr_opcode = (0x7fU & vlSelf->Advaita_V__DOT__instruction);
            vlSelf->Advaita_V__DOT__csr_address = 0U;
        } else if ((4U & (IData)(Advaita_V__DOT__instr_opcode))) {
            if ((2U & (IData)(Advaita_V__DOT__instr_opcode))) {
                if ((1U & (IData)(Advaita_V__DOT__instr_opcode))) {
                    vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd 
                        = (0x1fU & (vlSelf->Advaita_V__DOT__instruction 
                                    >> 7U));
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j 
                        = (vlSelf->Advaita_V__DOT__instruction 
                           >> 0xcU);
                } else {
                    vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
                    Advaita_V__DOT__instr_fn3 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
                    Advaita_V__DOT__instr_opcode = 
                        (0x7fU & vlSelf->Advaita_V__DOT__instruction);
                    vlSelf->Advaita_V__DOT__csr_address = 0U;
                }
            } else {
                vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
                Advaita_V__DOT__instr_fn3 = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
                Advaita_V__DOT__instr_opcode = (0x7fU 
                                                & vlSelf->Advaita_V__DOT__instruction);
                vlSelf->Advaita_V__DOT__csr_address = 0U;
            }
        } else if ((2U & (IData)(Advaita_V__DOT__instr_opcode))) {
            if ((1U & (IData)(Advaita_V__DOT__instr_opcode))) {
                vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd 
                    = (0x1fU & (vlSelf->Advaita_V__DOT__instruction 
                                >> 7U));
                Advaita_V__DOT__instr_fn3 = (7U & (vlSelf->Advaita_V__DOT__instruction 
                                                   >> 0xcU));
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 
                    = (0x1fU & (vlSelf->Advaita_V__DOT__instruction 
                                >> 0xfU));
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s 
                    = (vlSelf->Advaita_V__DOT__instruction 
                       >> 0x14U);
                Advaita_V__DOT__i_cpu_core__DOT__imm11_5 
                    = (vlSelf->Advaita_V__DOT__instruction 
                       >> 0x19U);
            } else {
                vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
                Advaita_V__DOT__instr_fn3 = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
                Advaita_V__DOT__instr_opcode = (0x7fU 
                                                & vlSelf->Advaita_V__DOT__instruction);
                vlSelf->Advaita_V__DOT__csr_address = 0U;
            }
        } else {
            vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
            Advaita_V__DOT__instr_fn3 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
            Advaita_V__DOT__instr_opcode = (0x7fU & vlSelf->Advaita_V__DOT__instruction);
            vlSelf->Advaita_V__DOT__csr_address = 0U;
        }
    } else if ((8U & (IData)(Advaita_V__DOT__instr_opcode))) {
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
        Advaita_V__DOT__instr_fn3 = 0U;
        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
        Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
        Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
        Advaita_V__DOT__instr_opcode = (0x7fU & vlSelf->Advaita_V__DOT__instruction);
        vlSelf->Advaita_V__DOT__csr_address = 0U;
    } else if ((4U & (IData)(Advaita_V__DOT__instr_opcode))) {
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
        Advaita_V__DOT__instr_fn3 = 0U;
        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
        Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
        Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
        Advaita_V__DOT__instr_opcode = (0x7fU & vlSelf->Advaita_V__DOT__instruction);
        vlSelf->Advaita_V__DOT__csr_address = 0U;
    } else if ((2U & (IData)(Advaita_V__DOT__instr_opcode))) {
        if ((1U & (IData)(Advaita_V__DOT__instr_opcode))) {
            vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd 
                = (0x1fU & (vlSelf->Advaita_V__DOT__instruction 
                            >> 7U));
            Advaita_V__DOT__instr_fn3 = (7U & (vlSelf->Advaita_V__DOT__instruction 
                                               >> 0xcU));
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 
                = (0x1fU & (vlSelf->Advaita_V__DOT__instruction 
                            >> 0xfU));
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s 
                = (vlSelf->Advaita_V__DOT__instruction 
                   >> 0x14U);
        } else {
            vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
            Advaita_V__DOT__instr_fn3 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
            Advaita_V__DOT__instr_opcode = (0x7fU & vlSelf->Advaita_V__DOT__instruction);
            vlSelf->Advaita_V__DOT__csr_address = 0U;
        }
    } else {
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = 0U;
        Advaita_V__DOT__instr_fn3 = 0U;
        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1 = 0U;
        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2 = 0U;
        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s = 0U;
        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j = 0U;
        Advaita_V__DOT__i_cpu_core__DOT__imm11_5 = 0U;
        Advaita_V__DOT__i_cpu_core__DOT__fn7_5 = 0U;
        Advaita_V__DOT__instr_opcode = (0x7fU & vlSelf->Advaita_V__DOT__instruction);
        vlSelf->Advaita_V__DOT__csr_address = 0U;
    }
    Advaita_V__DOT__csr_rdata_wire = ((0x800U & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                       ? ((0x400U & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                           ? ((0x200U 
                                               & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                               ? ((0x100U 
                                                   & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                   ? 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                    ? 0U
                                                    : 
                                                   ((0x40U 
                                                     & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                     ? 0U
                                                     : 
                                                    ((0x20U 
                                                      & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                      ? 0U
                                                      : 
                                                     ((0x10U 
                                                       & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                       ? 
                                                      ((8U 
                                                        & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                           ? 0x1000000U
                                                           : 0U)
                                                          : 0U)))
                                                       : 0U))))
                                                   : 0U)
                                               : 0U)
                                           : ((0x200U 
                                               & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                               ? ((0x100U 
                                                   & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                   ? 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                    ? 
                                                   ((0x40U 
                                                     & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                     ? 0U
                                                     : 
                                                    ((0x20U 
                                                      & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                      ? 0U
                                                      : 
                                                     ((0x10U 
                                                       & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                           ? 0U
                                                           : (IData)(
                                                                     (vlSelf->Advaita_V__DOT__i_csr_bank__DOT__minstret 
                                                                      >> 0x20U)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                           ? 0U
                                                           : (IData)(
                                                                     (vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mcycle 
                                                                      >> 0x20U)))))))))
                                                    : 
                                                   ((0x40U 
                                                     & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                     ? 0U
                                                     : 
                                                    ((0x20U 
                                                      & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                      ? 0U
                                                      : 
                                                     ((0x10U 
                                                       & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                           ? 0U
                                                           : (IData)(vlSelf->Advaita_V__DOT__i_csr_bank__DOT__minstret))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                           ? 0U
                                                           : (IData)(vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mcycle)))))))))
                                                   : 0U)
                                               : 0U))
                                       : ((0x400U & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                           ? 0U : (
                                                   (0x200U 
                                                    & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                    ? 
                                                   ((0x100U 
                                                     & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                     ? 
                                                    ((0x80U 
                                                      & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                      ? 0U
                                                      : 
                                                     ((0x40U 
                                                       & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                       ? 
                                                      ((0x20U 
                                                        & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                        ? 0U
                                                        : 
                                                       ((0x10U 
                                                         & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                         ? 0U
                                                         : 
                                                        ((8U 
                                                          & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                          ? 0U
                                                          : 
                                                         ((4U 
                                                           & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                           ? 
                                                          ((2U 
                                                            & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                            ? 0U
                                                            : 
                                                           ((1U 
                                                             & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                             ? 0U
                                                             : vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mip))
                                                           : 
                                                          ((2U 
                                                            & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                            ? 
                                                           ((1U 
                                                             & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                             ? vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mtval
                                                             : vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mcause)
                                                            : 
                                                           ((1U 
                                                             & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                             ? vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mepc
                                                             : vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mscratch))))))
                                                       : 
                                                      ((0x20U 
                                                        & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                        ? 0U
                                                        : 
                                                       ((0x10U 
                                                         & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                         ? 0U
                                                         : 
                                                        ((8U 
                                                          & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                          ? 0U
                                                          : 
                                                         ((4U 
                                                           & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                           ? 
                                                          ((2U 
                                                            & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                            ? 0U
                                                            : 
                                                           ((1U 
                                                             & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                             ? vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mtvec
                                                             : vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mie))
                                                           : 
                                                          ((2U 
                                                            & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                            ? 0U
                                                            : 
                                                           ((1U 
                                                             & (IData)(vlSelf->Advaita_V__DOT__csr_address))
                                                             ? 0x40000100U
                                                             : vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mstatus))))))))
                                                     : 0U)
                                                    : 0U)));
    vlSelf->Advaita_V__DOT__rs2_data = ((0U == (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2))
                                         ? 0U : vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register
                                        [Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs2]);
    Advaita_V__DOT__i_cpu_core__DOT__rs1_data = ((0U 
                                                  == (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1))
                                                  ? 0U
                                                  : 
                                                 vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register
                                                 [Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1]);
    Advaita_V__DOT__i_cpu_core__DOT__mem_read_raw = 0U;
    Advaita_V__DOT__i_cpu_core__DOT__mem_write_raw = 0U;
    Advaita_V__DOT__i_cpu_core__DOT__branch = 0U;
    __VdfgTmp_hf9b71b32__0 = ((0x6fU == (IData)(Advaita_V__DOT__instr_opcode)) 
                              | (0x67U == (IData)(Advaita_V__DOT__instr_opcode)));
    Advaita_V__DOT__i_cpu_core__DOT__mux_inp = 0U;
    vlSelf->Advaita_V__DOT__csr_write_en = 0U;
    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_write_out = 0U;
    Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 3U;
    vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
    Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
    Advaita_V__DOT__i_cpu_core__DOT____VdfgTmp_hef36f37c__0 
        = ((0U == (IData)(Advaita_V__DOT__instr_fn3)) 
           | (1U == (IData)(Advaita_V__DOT__instr_fn3)));
    Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
    Advaita_V__DOT__i_cpu_core__DOT__alu_src = 0U;
    Advaita_V__DOT__i_cpu_core__DOT__imm_out = 0U;
    Advaita_V__DOT__i_cpu_core__DOT____VdfgTmp_h8574b542__0 
        = ((IData)(Advaita_V__DOT__i_cpu_core__DOT____VdfgTmp_hef36f37c__0) 
           | (2U == (IData)(Advaita_V__DOT__instr_fn3)));
    if ((0x40U & (IData)(Advaita_V__DOT__instr_opcode))) {
        if ((0x20U & (IData)(Advaita_V__DOT__instr_opcode))) {
            if ((0x10U & (IData)(Advaita_V__DOT__instr_opcode))) {
                if ((8U & (IData)(Advaita_V__DOT__instr_opcode))) {
                    Advaita_V__DOT__i_cpu_core__DOT__mem_read_raw = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__mem_write_raw = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__branch = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__mux_inp = 0U;
                    vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_write_out = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
                    vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
                } else if ((4U & (IData)(Advaita_V__DOT__instr_opcode))) {
                    Advaita_V__DOT__i_cpu_core__DOT__mem_read_raw = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__mem_write_raw = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__branch = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__mux_inp = 0U;
                    vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_write_out = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
                    vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
                } else if ((2U & (IData)(Advaita_V__DOT__instr_opcode))) {
                    if ((1U & (~ (IData)(Advaita_V__DOT__instr_opcode)))) {
                        Advaita_V__DOT__i_cpu_core__DOT__mem_read_raw = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__mem_write_raw = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__branch = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__mux_inp = 0U;
                    }
                    if ((1U & (IData)(Advaita_V__DOT__instr_opcode))) {
                        if ((0U != (IData)(Advaita_V__DOT__instr_fn3))) {
                            vlSelf->Advaita_V__DOT__csr_write_en 
                                = ((1U == (3U & (IData)(Advaita_V__DOT__instr_fn3))) 
                                   | ((1U != (3U & (IData)(Advaita_V__DOT__instr_fn3))) 
                                      & (0U != (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1))));
                            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_write_out = 1U;
                            Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 3U;
                            Advaita_V__DOT__i_cpu_core__DOT__aluop = 5U;
                        }
                        if ((0U == (IData)(Advaita_V__DOT__instr_fn3))) {
                            if ((0U != (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT____Vcellinp__mc__inst))) {
                                if ((1U != (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT____Vcellinp__mc__inst))) {
                                    if ((0x302U == (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT____Vcellinp__mc__inst))) {
                                        vlSelf->Advaita_V__DOT__is_mret_instr = 1U;
                                    }
                                }
                            }
                            if ((0U == (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT____Vcellinp__mc__inst))) {
                                Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 1U;
                            } else if ((1U == (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT____Vcellinp__mc__inst))) {
                                Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 1U;
                            }
                        }
                    } else {
                        vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_write_out = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
                        vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
                    }
                } else {
                    Advaita_V__DOT__i_cpu_core__DOT__mem_read_raw = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__mem_write_raw = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__branch = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__mux_inp = 0U;
                    vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_write_out = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
                    vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
                }
            } else {
                Advaita_V__DOT__i_cpu_core__DOT__mem_read_raw = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__mem_write_raw = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__branch 
                    = ((1U & (~ ((IData)(Advaita_V__DOT__instr_opcode) 
                                 >> 3U))) && ((1U & 
                                               (~ ((IData)(Advaita_V__DOT__instr_opcode) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(Advaita_V__DOT__instr_opcode) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(Advaita_V__DOT__instr_opcode)))));
                Advaita_V__DOT__i_cpu_core__DOT__mux_inp 
                    = ((1U & (~ ((IData)(Advaita_V__DOT__instr_opcode) 
                                 >> 3U))) && ((1U & 
                                               ((IData)(Advaita_V__DOT__instr_opcode) 
                                                >> 2U)) 
                                              && ((1U 
                                                   & ((IData)(Advaita_V__DOT__instr_opcode) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(Advaita_V__DOT__instr_opcode)))));
                if ((8U & (IData)(Advaita_V__DOT__instr_opcode))) {
                    if ((4U & (IData)(Advaita_V__DOT__instr_opcode))) {
                        if ((2U & (IData)(Advaita_V__DOT__instr_opcode))) {
                            if ((1U & (~ (IData)(Advaita_V__DOT__instr_opcode)))) {
                                vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                                vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                                Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                            }
                            if ((1U & (IData)(Advaita_V__DOT__instr_opcode))) {
                                Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 2U;
                                Advaita_V__DOT__i_cpu_core__DOT__aluop = 6U;
                            } else {
                                Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
                                Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
                            }
                        } else {
                            vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                            Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
                            vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                            Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                            Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
                        }
                    } else {
                        vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
                        vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
                    }
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_write_out 
                        = ((1U & ((IData)(Advaita_V__DOT__instr_opcode) 
                                  >> 2U)) && ((1U & 
                                               ((IData)(Advaita_V__DOT__instr_opcode) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(Advaita_V__DOT__instr_opcode))));
                } else {
                    if ((4U & (IData)(Advaita_V__DOT__instr_opcode))) {
                        if ((2U & (IData)(Advaita_V__DOT__instr_opcode))) {
                            if ((1U & (~ (IData)(Advaita_V__DOT__instr_opcode)))) {
                                vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                                vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                                Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                            }
                            if ((1U & (IData)(Advaita_V__DOT__instr_opcode))) {
                                Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 2U;
                                Advaita_V__DOT__i_cpu_core__DOT__aluop = 1U;
                            } else {
                                Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
                                Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
                            }
                        } else {
                            vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                            Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
                            vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                            Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                            Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
                        }
                    } else {
                        if ((2U & (IData)(Advaita_V__DOT__instr_opcode))) {
                            if ((1U & (~ (IData)(Advaita_V__DOT__instr_opcode)))) {
                                vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                                vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                                Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                            }
                            Advaita_V__DOT__i_cpu_core__DOT__aluop 
                                = ((1U & (IData)(Advaita_V__DOT__instr_opcode))
                                    ? 4U : 0U);
                        } else {
                            vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                            vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                            Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                            Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
                        }
                        Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
                    }
                    Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_write_out 
                        = ((1U & ((IData)(Advaita_V__DOT__instr_opcode) 
                                  >> 2U)) && ((1U & 
                                               ((IData)(Advaita_V__DOT__instr_opcode) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(Advaita_V__DOT__instr_opcode))));
                }
            }
        } else {
            Advaita_V__DOT__i_cpu_core__DOT__mem_read_raw = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__mem_write_raw = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__branch = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__mux_inp = 0U;
            vlSelf->Advaita_V__DOT__csr_write_en = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_write_out = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
            vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
        }
    } else {
        Advaita_V__DOT__i_cpu_core__DOT__mem_read_raw 
            = ((1U & (~ ((IData)(Advaita_V__DOT__instr_opcode) 
                         >> 5U))) && ((1U & (~ ((IData)(Advaita_V__DOT__instr_opcode) 
                                                >> 4U))) 
                                      && ((1U & (~ 
                                                 ((IData)(Advaita_V__DOT__instr_opcode) 
                                                  >> 3U))) 
                                          && ((1U & 
                                               (~ ((IData)(Advaita_V__DOT__instr_opcode) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(Advaita_V__DOT__instr_opcode) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(Advaita_V__DOT__instr_opcode)))))));
        Advaita_V__DOT__i_cpu_core__DOT__mem_write_raw 
            = ((1U & ((IData)(Advaita_V__DOT__instr_opcode) 
                      >> 5U)) && ((1U & (~ ((IData)(Advaita_V__DOT__instr_opcode) 
                                            >> 4U))) 
                                  && ((1U & (~ ((IData)(Advaita_V__DOT__instr_opcode) 
                                                >> 3U))) 
                                      && ((1U & (~ 
                                                 ((IData)(Advaita_V__DOT__instr_opcode) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(Advaita_V__DOT__instr_opcode) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(Advaita_V__DOT__instr_opcode)))))));
        Advaita_V__DOT__i_cpu_core__DOT__branch = 0U;
        Advaita_V__DOT__i_cpu_core__DOT__mux_inp = 0U;
        if ((0x20U & (IData)(Advaita_V__DOT__instr_opcode))) {
            if ((0x10U & (IData)(Advaita_V__DOT__instr_opcode))) {
                if ((8U & (IData)(Advaita_V__DOT__instr_opcode))) {
                    vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
                    vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
                } else if ((4U & (IData)(Advaita_V__DOT__instr_opcode))) {
                    if ((2U & (IData)(Advaita_V__DOT__instr_opcode))) {
                        if ((1U & (~ (IData)(Advaita_V__DOT__instr_opcode)))) {
                            vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                            vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                            Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                        }
                        if ((1U & (IData)(Advaita_V__DOT__instr_opcode))) {
                            Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 2U;
                            Advaita_V__DOT__i_cpu_core__DOT__aluop = 6U;
                        } else {
                            Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
                            Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
                        }
                    } else {
                        vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
                        vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
                    }
                } else {
                    if ((2U & (IData)(Advaita_V__DOT__instr_opcode))) {
                        if ((1U & (~ (IData)(Advaita_V__DOT__instr_opcode)))) {
                            vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                            vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                            Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                        }
                    } else {
                        vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                        vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                    }
                    Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
                }
            } else if ((8U & (IData)(Advaita_V__DOT__instr_opcode))) {
                vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
                vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
            } else if ((4U & (IData)(Advaita_V__DOT__instr_opcode))) {
                vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
                vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
            } else if ((2U & (IData)(Advaita_V__DOT__instr_opcode))) {
                if ((1U & (~ (IData)(Advaita_V__DOT__instr_opcode)))) {
                    vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                    vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                }
                if ((1U & (IData)(Advaita_V__DOT__instr_opcode))) {
                    Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 3U;
                    Advaita_V__DOT__i_cpu_core__DOT__aluop = 3U;
                } else {
                    Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
                }
            } else {
                vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
                vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
            }
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_write_out 
                = ((1U & ((IData)(Advaita_V__DOT__instr_opcode) 
                          >> 4U)) && ((1U & (~ ((IData)(Advaita_V__DOT__instr_opcode) 
                                                >> 3U))) 
                                      && ((4U & (IData)(Advaita_V__DOT__instr_opcode))
                                           ? ((1U & 
                                               ((IData)(Advaita_V__DOT__instr_opcode) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(Advaita_V__DOT__instr_opcode)))
                                           : ((1U & 
                                               ((IData)(Advaita_V__DOT__instr_opcode) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(Advaita_V__DOT__instr_opcode))))));
        } else if ((0x10U & (IData)(Advaita_V__DOT__instr_opcode))) {
            if ((8U & (IData)(Advaita_V__DOT__instr_opcode))) {
                vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
                vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
            } else if ((4U & (IData)(Advaita_V__DOT__instr_opcode))) {
                if ((2U & (IData)(Advaita_V__DOT__instr_opcode))) {
                    if ((1U & (~ (IData)(Advaita_V__DOT__instr_opcode)))) {
                        vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                        vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                    }
                    Advaita_V__DOT__i_cpu_core__DOT__memtoreg 
                        = ((1U & (IData)(Advaita_V__DOT__instr_opcode))
                            ? 2U : 0U);
                } else {
                    vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
                    vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                }
                Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
            } else {
                if ((2U & (IData)(Advaita_V__DOT__instr_opcode))) {
                    if ((1U & (~ (IData)(Advaita_V__DOT__instr_opcode)))) {
                        vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                        vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                    }
                    Advaita_V__DOT__i_cpu_core__DOT__aluop 
                        = ((1U & (IData)(Advaita_V__DOT__instr_opcode))
                            ? 1U : 0U);
                } else {
                    vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                    vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
                }
                Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
            }
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_write_out 
                = ((1U & (~ ((IData)(Advaita_V__DOT__instr_opcode) 
                             >> 3U))) && ((4U & (IData)(Advaita_V__DOT__instr_opcode))
                                           ? ((1U & 
                                               ((IData)(Advaita_V__DOT__instr_opcode) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(Advaita_V__DOT__instr_opcode)))
                                           : ((1U & 
                                               ((IData)(Advaita_V__DOT__instr_opcode) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(Advaita_V__DOT__instr_opcode)))));
        } else {
            if ((8U & (IData)(Advaita_V__DOT__instr_opcode))) {
                vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
                vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
            } else if ((4U & (IData)(Advaita_V__DOT__instr_opcode))) {
                vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
                vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
            } else if ((2U & (IData)(Advaita_V__DOT__instr_opcode))) {
                if ((1U & (~ (IData)(Advaita_V__DOT__instr_opcode)))) {
                    vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                    vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                }
                if ((1U & (IData)(Advaita_V__DOT__instr_opcode))) {
                    Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 1U;
                    Advaita_V__DOT__i_cpu_core__DOT__aluop = 2U;
                } else {
                    Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
                }
            } else {
                vlSelf->Advaita_V__DOT__csr_write_en = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__memtoreg = 0U;
                vlSelf->Advaita_V__DOT__is_mret_instr = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__sw_trap = 0U;
                Advaita_V__DOT__i_cpu_core__DOT__aluop = 0U;
            }
            Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_write_out 
                = ((1U & (~ ((IData)(Advaita_V__DOT__instr_opcode) 
                             >> 3U))) && ((1U & (~ 
                                                 ((IData)(Advaita_V__DOT__instr_opcode) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(Advaita_V__DOT__instr_opcode) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(Advaita_V__DOT__instr_opcode)))));
        }
    }
    Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation 
        = ((4U & (IData)(Advaita_V__DOT__i_cpu_core__DOT__aluop))
            ? ((2U & (IData)(Advaita_V__DOT__i_cpu_core__DOT__aluop))
                ? 0U : ((1U & (IData)(Advaita_V__DOT__i_cpu_core__DOT__aluop))
                         ? ((2U & (IData)(Advaita_V__DOT__instr_fn3))
                             ? ((1U & (IData)(Advaita_V__DOT__instr_fn3))
                                 ? 0x12U : 0x11U) : 
                            ((1U & (IData)(Advaita_V__DOT__instr_fn3))
                              ? 0x10U : 0U)) : ((4U 
                                                 & (IData)(Advaita_V__DOT__instr_fn3))
                                                 ? 
                                                ((2U 
                                                  & (IData)(Advaita_V__DOT__instr_fn3))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(Advaita_V__DOT__instr_fn3))
                                                   ? 0xfU
                                                   : 0xeU)
                                                  : 
                                                 ((1U 
                                                   & (IData)(Advaita_V__DOT__instr_fn3))
                                                   ? 0xdU
                                                   : 0xcU))
                                                 : 
                                                ((2U 
                                                  & (IData)(Advaita_V__DOT__instr_fn3))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(Advaita_V__DOT__instr_fn3))
                                                   ? 0xbU
                                                   : 0xaU)))))
            : ((2U & (IData)(Advaita_V__DOT__i_cpu_core__DOT__aluop))
                ? 0U : ((1U & (IData)(Advaita_V__DOT__i_cpu_core__DOT__aluop))
                         ? ((4U & (IData)(Advaita_V__DOT__instr_fn3))
                             ? ((2U & (IData)(Advaita_V__DOT__instr_fn3))
                                 ? ((1U & (IData)(Advaita_V__DOT__instr_fn3))
                                     ? 4U : 3U) : (
                                                   (1U 
                                                    & (IData)(Advaita_V__DOT__instr_fn3))
                                                    ? 
                                                   ((0x20U 
                                                     == (IData)(Advaita_V__DOT__i_cpu_core__DOT__imm11_5))
                                                     ? 7U
                                                     : 6U)
                                                    : 2U))
                             : ((2U & (IData)(Advaita_V__DOT__instr_fn3))
                                 ? ((1U & (IData)(Advaita_V__DOT__instr_fn3))
                                     ? 9U : 8U) : (
                                                   (1U 
                                                    & (IData)(Advaita_V__DOT__instr_fn3))
                                                    ? 5U
                                                    : 0U)))
                         : ((4U & (IData)(Advaita_V__DOT__instr_fn3))
                             ? ((2U & (IData)(Advaita_V__DOT__instr_fn3))
                                 ? ((1U & (IData)(Advaita_V__DOT__instr_fn3))
                                     ? 4U : 3U) : (
                                                   (1U 
                                                    & (IData)(Advaita_V__DOT__instr_fn3))
                                                    ? 
                                                   ((IData)(Advaita_V__DOT__i_cpu_core__DOT__fn7_5)
                                                     ? 7U
                                                     : 6U)
                                                    : 2U))
                             : ((2U & (IData)(Advaita_V__DOT__instr_fn3))
                                 ? ((1U & (IData)(Advaita_V__DOT__instr_fn3))
                                     ? 9U : 8U) : (
                                                   (1U 
                                                    & (IData)(Advaita_V__DOT__instr_fn3))
                                                    ? 5U
                                                    : 
                                                   ((IData)(Advaita_V__DOT__i_cpu_core__DOT__fn7_5)
                                                     ? 1U
                                                     : 0U)))))));
    if ((0x40U & (IData)(Advaita_V__DOT__instr_opcode))) {
        if ((0x20U & (IData)(Advaita_V__DOT__instr_opcode))) {
            if ((0x10U & (IData)(Advaita_V__DOT__instr_opcode))) {
                if ((8U & (IData)(Advaita_V__DOT__instr_opcode))) {
                    Advaita_V__DOT__i_cpu_core__DOT__alu_src = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__imm_out 
                        = (((- (IData)((1U & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                              >> 0xbU)))) 
                            << 0xcU) | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s));
                } else if ((4U & (IData)(Advaita_V__DOT__instr_opcode))) {
                    Advaita_V__DOT__i_cpu_core__DOT__alu_src = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__imm_out 
                        = (((- (IData)((1U & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                              >> 0xbU)))) 
                            << 0xcU) | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s));
                } else if ((2U & (IData)(Advaita_V__DOT__instr_opcode))) {
                    if ((1U & (IData)(Advaita_V__DOT__instr_opcode))) {
                        if ((0U != (IData)(Advaita_V__DOT__instr_fn3))) {
                            Advaita_V__DOT__i_cpu_core__DOT__alu_src 
                                = (1U & ((IData)(Advaita_V__DOT__instr_fn3) 
                                         >> 2U));
                        }
                        Advaita_V__DOT__i_cpu_core__DOT__imm_out 
                            = ((4U & (IData)(Advaita_V__DOT__instr_fn3))
                                ? (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rs1)
                                : 0U);
                    } else {
                        Advaita_V__DOT__i_cpu_core__DOT__alu_src = 0U;
                        Advaita_V__DOT__i_cpu_core__DOT__imm_out 
                            = (((- (IData)((1U & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                                  >> 0xbU)))) 
                                << 0xcU) | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s));
                    }
                } else {
                    Advaita_V__DOT__i_cpu_core__DOT__alu_src = 0U;
                    Advaita_V__DOT__i_cpu_core__DOT__imm_out 
                        = (((- (IData)((1U & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                              >> 0xbU)))) 
                            << 0xcU) | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s));
                }
            } else if ((8U & (IData)(Advaita_V__DOT__instr_opcode))) {
                Advaita_V__DOT__i_cpu_core__DOT__alu_src 
                    = ((1U & ((IData)(Advaita_V__DOT__instr_opcode) 
                              >> 2U)) && ((1U & ((IData)(Advaita_V__DOT__instr_opcode) 
                                                 >> 1U)) 
                                          && (1U & (IData)(Advaita_V__DOT__instr_opcode))));
                Advaita_V__DOT__i_cpu_core__DOT__imm_out 
                    = ((4U & (IData)(Advaita_V__DOT__instr_opcode))
                        ? ((2U & (IData)(Advaita_V__DOT__instr_opcode))
                            ? ((1U & (IData)(Advaita_V__DOT__instr_opcode))
                                ? VL_SHIFTL_III(32,32,32, 
                                                (((- (IData)(
                                                             (1U 
                                                              & (Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j 
                                                                 >> 0x13U)))) 
                                                  << 0x14U) 
                                                 | Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j), 1U)
                                : (((- (IData)((1U 
                                                & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                                   >> 0xbU)))) 
                                    << 0xcU) | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s)))
                            : (((- (IData)((1U & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                                  >> 0xbU)))) 
                                << 0xcU) | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s)))
                        : (((- (IData)((1U & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                              >> 0xbU)))) 
                            << 0xcU) | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s)));
            } else {
                Advaita_V__DOT__i_cpu_core__DOT__alu_src 
                    = ((1U & ((IData)(Advaita_V__DOT__instr_opcode) 
                              >> 2U)) && ((1U & ((IData)(Advaita_V__DOT__instr_opcode) 
                                                 >> 1U)) 
                                          && (1U & (IData)(Advaita_V__DOT__instr_opcode))));
                Advaita_V__DOT__i_cpu_core__DOT__imm_out 
                    = ((4U & (IData)(Advaita_V__DOT__instr_opcode))
                        ? ((2U & (IData)(Advaita_V__DOT__instr_opcode))
                            ? ((1U & (IData)(Advaita_V__DOT__instr_opcode))
                                ? (((- (IData)((1U 
                                                & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                                   >> 0xbU)))) 
                                    << 0xcU) | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s))
                                : (((- (IData)((1U 
                                                & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                                   >> 0xbU)))) 
                                    << 0xcU) | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s)))
                            : (((- (IData)((1U & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                                  >> 0xbU)))) 
                                << 0xcU) | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s)))
                        : ((2U & (IData)(Advaita_V__DOT__instr_opcode))
                            ? ((1U & (IData)(Advaita_V__DOT__instr_opcode))
                                ? VL_SHIFTL_III(32,32,32, 
                                                (((- (IData)(
                                                             (1U 
                                                              & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                                                 >> 0xbU)))) 
                                                  << 0xcU) 
                                                 | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s)), 1U)
                                : (((- (IData)((1U 
                                                & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                                   >> 0xbU)))) 
                                    << 0xcU) | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s)))
                            : (((- (IData)((1U & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                                  >> 0xbU)))) 
                                << 0xcU) | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s))));
            }
        } else {
            Advaita_V__DOT__i_cpu_core__DOT__alu_src = 0U;
            Advaita_V__DOT__i_cpu_core__DOT__imm_out 
                = (((- (IData)((1U & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                      >> 0xbU)))) << 0xcU) 
                   | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s));
        }
    } else if ((0x20U & (IData)(Advaita_V__DOT__instr_opcode))) {
        if ((0x10U & (IData)(Advaita_V__DOT__instr_opcode))) {
            Advaita_V__DOT__i_cpu_core__DOT__alu_src 
                = ((1U & (~ ((IData)(Advaita_V__DOT__instr_opcode) 
                             >> 3U))) && ((1U & ((IData)(Advaita_V__DOT__instr_opcode) 
                                                 >> 2U)) 
                                          && ((1U & 
                                               ((IData)(Advaita_V__DOT__instr_opcode) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(Advaita_V__DOT__instr_opcode)))));
            Advaita_V__DOT__i_cpu_core__DOT__imm_out 
                = ((8U & (IData)(Advaita_V__DOT__instr_opcode))
                    ? (((- (IData)((1U & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                          >> 0xbU)))) 
                        << 0xcU) | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s))
                    : ((4U & (IData)(Advaita_V__DOT__instr_opcode))
                        ? ((2U & (IData)(Advaita_V__DOT__instr_opcode))
                            ? ((1U & (IData)(Advaita_V__DOT__instr_opcode))
                                ? (Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j 
                                   << 0xcU) : (((- (IData)(
                                                           (1U 
                                                            & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                                               >> 0xbU)))) 
                                                << 0xcU) 
                                               | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s)))
                            : (((- (IData)((1U & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                                  >> 0xbU)))) 
                                << 0xcU) | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s)))
                        : (((- (IData)((1U & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                              >> 0xbU)))) 
                            << 0xcU) | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s))));
        } else {
            Advaita_V__DOT__i_cpu_core__DOT__alu_src 
                = ((1U & (~ ((IData)(Advaita_V__DOT__instr_opcode) 
                             >> 3U))) && ((1U & (~ 
                                                 ((IData)(Advaita_V__DOT__instr_opcode) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(Advaita_V__DOT__instr_opcode) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(Advaita_V__DOT__instr_opcode)))));
            Advaita_V__DOT__i_cpu_core__DOT__imm_out 
                = (((- (IData)((1U & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                      >> 0xbU)))) << 0xcU) 
                   | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s));
        }
    } else if ((0x10U & (IData)(Advaita_V__DOT__instr_opcode))) {
        Advaita_V__DOT__i_cpu_core__DOT__alu_src = 
            ((1U & (~ ((IData)(Advaita_V__DOT__instr_opcode) 
                       >> 3U))) && ((4U & (IData)(Advaita_V__DOT__instr_opcode))
                                     ? ((1U & ((IData)(Advaita_V__DOT__instr_opcode) 
                                               >> 1U)) 
                                        && (1U & (IData)(Advaita_V__DOT__instr_opcode)))
                                     : ((1U & ((IData)(Advaita_V__DOT__instr_opcode) 
                                               >> 1U)) 
                                        && (1U & (IData)(Advaita_V__DOT__instr_opcode)))));
        if ((8U & (IData)(Advaita_V__DOT__instr_opcode))) {
            Advaita_V__DOT__i_cpu_core__DOT__imm_out 
                = (((- (IData)((1U & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                      >> 0xbU)))) << 0xcU) 
                   | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s));
        } else if ((4U & (IData)(Advaita_V__DOT__instr_opcode))) {
            Advaita_V__DOT__i_cpu_core__DOT__imm_out 
                = ((2U & (IData)(Advaita_V__DOT__instr_opcode))
                    ? ((1U & (IData)(Advaita_V__DOT__instr_opcode))
                        ? (Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_u_j 
                           << 0xcU) : (((- (IData)(
                                                   (1U 
                                                    & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                                       >> 0xbU)))) 
                                        << 0xcU) | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s)))
                    : (((- (IData)((1U & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                          >> 0xbU)))) 
                        << 0xcU) | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s)));
        } else if ((2U & (IData)(Advaita_V__DOT__instr_opcode))) {
            if ((1U & (IData)(Advaita_V__DOT__instr_opcode))) {
                if ((1U == (IData)(Advaita_V__DOT__instr_fn3))) {
                    Advaita_V__DOT__i_cpu_core__DOT__imm_out 
                        = (0x1fU & (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s));
                } else if ((5U == (IData)(Advaita_V__DOT__instr_fn3))) {
                    if ((0U == (0x7fU & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                         >> 5U)))) {
                        Advaita_V__DOT__i_cpu_core__DOT__imm_out 
                            = (0x1fU & (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s));
                    } else if ((0x20U == (0x7fU & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                                   >> 5U)))) {
                        Advaita_V__DOT__i_cpu_core__DOT__imm_out 
                            = (0x1fU & (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s));
                    }
                } else {
                    Advaita_V__DOT__i_cpu_core__DOT__imm_out 
                        = (((- (IData)((1U & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                              >> 0xbU)))) 
                            << 0xcU) | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s));
                }
            } else {
                Advaita_V__DOT__i_cpu_core__DOT__imm_out 
                    = (((- (IData)((1U & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                          >> 0xbU)))) 
                        << 0xcU) | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s));
            }
        } else {
            Advaita_V__DOT__i_cpu_core__DOT__imm_out 
                = (((- (IData)((1U & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                      >> 0xbU)))) << 0xcU) 
                   | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s));
        }
    } else {
        Advaita_V__DOT__i_cpu_core__DOT__alu_src = 
            ((1U & (~ ((IData)(Advaita_V__DOT__instr_opcode) 
                       >> 3U))) && ((1U & (~ ((IData)(Advaita_V__DOT__instr_opcode) 
                                              >> 2U))) 
                                    && ((1U & ((IData)(Advaita_V__DOT__instr_opcode) 
                                               >> 1U)) 
                                        && (1U & (IData)(Advaita_V__DOT__instr_opcode)))));
        Advaita_V__DOT__i_cpu_core__DOT__imm_out = 
            (((- (IData)((1U & ((IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s) 
                                >> 0xbU)))) << 0xcU) 
             | (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__imm_i_s));
    }
    Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operand_b 
        = ((IData)(Advaita_V__DOT__i_cpu_core__DOT__alu_src)
            ? Advaita_V__DOT__i_cpu_core__DOT__imm_out
            : vlSelf->Advaita_V__DOT__rs2_data);
    Advaita_V__DOT__i_cpu_core__DOT__illegal_instr 
        = (1U & (~ ((0x37U == (IData)(Advaita_V__DOT__instr_opcode)) 
                    | ((0x17U == (IData)(Advaita_V__DOT__instr_opcode)) 
                       | ((0x6fU == (IData)(Advaita_V__DOT__instr_opcode)) 
                          | (((0x67U == (IData)(Advaita_V__DOT__instr_opcode)) 
                              & (0U == (IData)(Advaita_V__DOT__instr_fn3))) 
                             | (((0x63U == (IData)(Advaita_V__DOT__instr_opcode)) 
                                 & ((IData)(Advaita_V__DOT__i_cpu_core__DOT____VdfgTmp_hef36f37c__0) 
                                    | ((4U == (IData)(Advaita_V__DOT__instr_fn3)) 
                                       | ((5U == (IData)(Advaita_V__DOT__instr_fn3)) 
                                          | ((6U == (IData)(Advaita_V__DOT__instr_fn3)) 
                                             | (7U 
                                                == (IData)(Advaita_V__DOT__instr_fn3))))))) 
                                | (((3U == (IData)(Advaita_V__DOT__instr_opcode)) 
                                    & ((IData)(Advaita_V__DOT__i_cpu_core__DOT____VdfgTmp_h8574b542__0) 
                                       | ((4U == (IData)(Advaita_V__DOT__instr_fn3)) 
                                          | (5U == (IData)(Advaita_V__DOT__instr_fn3))))) 
                                   | (((0x23U == (IData)(Advaita_V__DOT__instr_opcode)) 
                                       & (IData)(Advaita_V__DOT__i_cpu_core__DOT____VdfgTmp_h8574b542__0)) 
                                      | ((0x13U == (IData)(Advaita_V__DOT__instr_opcode)) 
                                         | (((0x33U 
                                              == (IData)(Advaita_V__DOT__instr_opcode)) 
                                             & ((0U 
                                                 == (IData)(Advaita_V__DOT__i_cpu_core__DOT__fn7)) 
                                                | (0x20U 
                                                   == (IData)(Advaita_V__DOT__i_cpu_core__DOT__fn7)))) 
                                            | ((0xfU 
                                                == (IData)(Advaita_V__DOT__instr_opcode)) 
                                               | ((0x73U 
                                                   == (IData)(Advaita_V__DOT__instr_opcode)) 
                                                  & ((0U 
                                                      != (IData)(Advaita_V__DOT__instr_fn3)) 
                                                     | ((0U 
                                                         == (IData)(Advaita_V__DOT__instr_fn3)) 
                                                        & ((0U 
                                                            == (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT____Vcellinp__mc__inst)) 
                                                           | ((1U 
                                                               == (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT____Vcellinp__mc__inst)) 
                                                              | ((0x302U 
                                                                  == (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT____Vcellinp__mc__inst)) 
                                                                 | (0x105U 
                                                                    == (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT____Vcellinp__mc__inst))))))))))))))))))));
    Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_unit__DOT____VdfgExtracted_hb991dac8__0 
        = VL_LTS_III(32, Advaita_V__DOT__i_cpu_core__DOT__rs1_data, Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operand_b);
    Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__branch_taken = 0U;
    vlSelf->Advaita_V__DOT__alu_result = 0U;
    if ((0x10U & (IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation))) {
        if ((8U & (IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation))) {
            Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__branch_taken = 0U;
            vlSelf->Advaita_V__DOT__alu_result = 0U;
        } else if ((4U & (IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation))) {
            Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__branch_taken = 0U;
            vlSelf->Advaita_V__DOT__alu_result = 0U;
        } else if ((2U & (IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation))) {
            if ((1U & (IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation))) {
                Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__branch_taken = 0U;
                vlSelf->Advaita_V__DOT__alu_result = 0U;
            } else {
                vlSelf->Advaita_V__DOT__alu_result 
                    = (Advaita_V__DOT__csr_rdata_wire 
                       & (~ Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operand_b));
            }
        } else {
            vlSelf->Advaita_V__DOT__alu_result = ((1U 
                                                   & (IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation))
                                                   ? 
                                                  (Advaita_V__DOT__csr_rdata_wire 
                                                   | Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operand_b)
                                                   : Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operand_b);
        }
    } else if ((8U & (IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation))) {
        if ((4U & (IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation))) {
            Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__branch_taken 
                = ((2U & (IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation))
                    ? ((1U & (IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation))
                        ? (Advaita_V__DOT__i_cpu_core__DOT__rs1_data 
                           >= Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operand_b)
                        : (Advaita_V__DOT__i_cpu_core__DOT__rs1_data 
                           < Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operand_b))
                    : ((1U & (IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation))
                        ? VL_GTES_III(32, Advaita_V__DOT__i_cpu_core__DOT__rs1_data, Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operand_b)
                        : (IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_unit__DOT____VdfgExtracted_hb991dac8__0)));
        } else if ((2U & (IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation))) {
            Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__branch_taken 
                = ((1U & (IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation))
                    ? (Advaita_V__DOT__i_cpu_core__DOT__rs1_data 
                       != Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operand_b)
                    : (Advaita_V__DOT__i_cpu_core__DOT__rs1_data 
                       == Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operand_b));
        }
        if ((1U & (~ ((IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation) 
                          >> 1U)))) {
                vlSelf->Advaita_V__DOT__alu_result 
                    = ((1U & (IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation))
                        ? ((Advaita_V__DOT__i_cpu_core__DOT__rs1_data 
                            < Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operand_b)
                            ? 1U : 0U) : ((IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_unit__DOT____VdfgExtracted_hb991dac8__0)
                                           ? 1U : 0U));
            }
        }
    } else {
        vlSelf->Advaita_V__DOT__alu_result = ((4U & (IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation))
                                               ? ((2U 
                                                   & (IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, Advaita_V__DOT__i_cpu_core__DOT__rs1_data, 
                                                                  (0x1fU 
                                                                   & Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operand_b))
                                                    : 
                                                   (Advaita_V__DOT__i_cpu_core__DOT__rs1_data 
                                                    >> 
                                                    (0x1fU 
                                                     & Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operand_b)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation))
                                                    ? 
                                                   (Advaita_V__DOT__i_cpu_core__DOT__rs1_data 
                                                    << 
                                                    (0x1fU 
                                                     & Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operand_b))
                                                    : 
                                                   (Advaita_V__DOT__i_cpu_core__DOT__rs1_data 
                                                    & Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operand_b)))
                                               : ((2U 
                                                   & (IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation))
                                                    ? 
                                                   (Advaita_V__DOT__i_cpu_core__DOT__rs1_data 
                                                    | Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operand_b)
                                                    : 
                                                   (Advaita_V__DOT__i_cpu_core__DOT__rs1_data 
                                                    ^ Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operand_b))
                                                   : 
                                                  ((1U 
                                                    & (IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operation))
                                                    ? 
                                                   (Advaita_V__DOT__i_cpu_core__DOT__rs1_data 
                                                    - Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operand_b)
                                                    : 
                                                   (Advaita_V__DOT__i_cpu_core__DOT__rs1_data 
                                                    + Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__alu_operand_b))));
    }
    Advaita_V__DOT__i_cpu_core__DOT__and_out_ex = (
                                                   ((IData)(Advaita_V__DOT__i_cpu_core__DOT__branch) 
                                                    & (IData)(Advaita_V__DOT__i_cpu_core__DOT__ex_st__DOT__branch_taken)) 
                                                   | (IData)(__VdfgTmp_hf9b71b32__0));
    vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__in_range 
        = ((0x80000000U <= vlSelf->Advaita_V__DOT__alu_result) 
           & (0x40000U > (0xfffffffcU & (vlSelf->Advaita_V__DOT__alu_result 
                                         - (IData)(0x80000000U)))));
    Advaita_V__DOT__i_cpu_core__DOT__load_misaligned = 0U;
    if ((3U == (IData)(Advaita_V__DOT__instr_opcode))) {
        if ((2U == (IData)(Advaita_V__DOT__instr_fn3))) {
            if ((0U != (3U & vlSelf->Advaita_V__DOT__alu_result))) {
                Advaita_V__DOT__i_cpu_core__DOT__load_misaligned = 1U;
            }
        } else if (((1U == (IData)(Advaita_V__DOT__instr_fn3)) 
                    || (5U == (IData)(Advaita_V__DOT__instr_fn3)))) {
            if ((1U & vlSelf->Advaita_V__DOT__alu_result)) {
                Advaita_V__DOT__i_cpu_core__DOT__load_misaligned = 1U;
            }
        } else {
            Advaita_V__DOT__i_cpu_core__DOT__load_misaligned = 0U;
        }
    }
    Advaita_V__DOT__i_cpu_core__DOT__store_misaligned = 0U;
    if ((0x23U == (IData)(Advaita_V__DOT__instr_opcode))) {
        if ((2U == (IData)(Advaita_V__DOT__instr_fn3))) {
            if ((0U != (3U & vlSelf->Advaita_V__DOT__alu_result))) {
                Advaita_V__DOT__i_cpu_core__DOT__store_misaligned = 1U;
            }
        } else if ((1U == (IData)(Advaita_V__DOT__instr_fn3))) {
            if ((1U & vlSelf->Advaita_V__DOT__alu_result)) {
                Advaita_V__DOT__i_cpu_core__DOT__store_misaligned = 1U;
            }
        } else {
            Advaita_V__DOT__i_cpu_core__DOT__store_misaligned = 0U;
        }
    }
    if (Advaita_V__DOT__i_cpu_core__DOT__mux_inp) {
        Advaita_V__DOT__i_cpu_core__DOT__pc_signed_offset 
            = (0xfffffffeU & vlSelf->Advaita_V__DOT__alu_result);
        Advaita_V__DOT__i_cpu_core__DOT__actual_branch_target 
            = (0xfffffffeU & vlSelf->Advaita_V__DOT__alu_result);
    } else {
        Advaita_V__DOT__i_cpu_core__DOT__pc_signed_offset 
            = (Advaita_V__DOT__i_cpu_core__DOT__imm_out 
               + vlSelf->Advaita_V__DOT__pc_address);
        Advaita_V__DOT__i_cpu_core__DOT__actual_branch_target 
            = Advaita_V__DOT__i_cpu_core__DOT__pc_signed_offset;
    }
    Advaita_V__DOT__i_cpu_core__DOT__wb_st__DOT__pre_wb_data 
        = ((0x40U & (IData)(Advaita_V__DOT__instr_opcode))
            ? ((0x20U & (IData)(Advaita_V__DOT__instr_opcode))
                ? ((0x10U & (IData)(Advaita_V__DOT__instr_opcode))
                    ? vlSelf->Advaita_V__DOT__alu_result
                    : ((4U & (IData)(Advaita_V__DOT__instr_opcode))
                        ? ((2U & (IData)(Advaita_V__DOT__instr_opcode))
                            ? ((1U & (IData)(Advaita_V__DOT__instr_opcode))
                                ? ((IData)(4U) + vlSelf->Advaita_V__DOT__pc_address)
                                : vlSelf->Advaita_V__DOT__alu_result)
                            : vlSelf->Advaita_V__DOT__alu_result)
                        : vlSelf->Advaita_V__DOT__alu_result))
                : vlSelf->Advaita_V__DOT__alu_result)
            : ((0x20U & (IData)(Advaita_V__DOT__instr_opcode))
                ? ((0x10U & (IData)(Advaita_V__DOT__instr_opcode))
                    ? ((8U & (IData)(Advaita_V__DOT__instr_opcode))
                        ? vlSelf->Advaita_V__DOT__alu_result
                        : ((4U & (IData)(Advaita_V__DOT__instr_opcode))
                            ? ((2U & (IData)(Advaita_V__DOT__instr_opcode))
                                ? ((1U & (IData)(Advaita_V__DOT__instr_opcode))
                                    ? Advaita_V__DOT__i_cpu_core__DOT__imm_out
                                    : vlSelf->Advaita_V__DOT__alu_result)
                                : vlSelf->Advaita_V__DOT__alu_result)
                            : vlSelf->Advaita_V__DOT__alu_result))
                    : vlSelf->Advaita_V__DOT__alu_result)
                : ((0x10U & (IData)(Advaita_V__DOT__instr_opcode))
                    ? ((8U & (IData)(Advaita_V__DOT__instr_opcode))
                        ? vlSelf->Advaita_V__DOT__alu_result
                        : ((4U & (IData)(Advaita_V__DOT__instr_opcode))
                            ? ((2U & (IData)(Advaita_V__DOT__instr_opcode))
                                ? ((1U & (IData)(Advaita_V__DOT__instr_opcode))
                                    ? Advaita_V__DOT__i_cpu_core__DOT__pc_signed_offset
                                    : vlSelf->Advaita_V__DOT__alu_result)
                                : vlSelf->Advaita_V__DOT__alu_result)
                            : vlSelf->Advaita_V__DOT__alu_result))
                    : vlSelf->Advaita_V__DOT__alu_result)));
    Advaita_V__DOT__i_cpu_core__DOT__instr_misaligned 
        = (((IData)(Advaita_V__DOT__i_cpu_core__DOT__and_out_ex) 
            | (IData)(__VdfgTmp_hf9b71b32__0)) & (0U 
                                                  != 
                                                  (3U 
                                                   & Advaita_V__DOT__i_cpu_core__DOT__actual_branch_target)));
    vlSelf->Advaita_V__DOT__exc_tval = 0U;
    vlSelf->Advaita_V__DOT__exc_cause = 0U;
    vlSelf->Advaita_V__DOT__trap_detected = 0U;
    if (Advaita_V__DOT__i_cpu_core__DOT__illegal_instr) {
        vlSelf->Advaita_V__DOT__exc_tval = vlSelf->Advaita_V__DOT__instruction;
        vlSelf->Advaita_V__DOT__exc_cause = 2U;
        vlSelf->Advaita_V__DOT__trap_detected = 1U;
    } else if (Advaita_V__DOT__i_cpu_core__DOT__instr_misaligned) {
        vlSelf->Advaita_V__DOT__exc_tval = Advaita_V__DOT__i_cpu_core__DOT__actual_branch_target;
        vlSelf->Advaita_V__DOT__exc_cause = 0U;
        vlSelf->Advaita_V__DOT__trap_detected = 1U;
    } else if (Advaita_V__DOT__i_cpu_core__DOT__sw_trap) {
        if ((0U == (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT____Vcellinp__mc__inst))) {
            vlSelf->Advaita_V__DOT__exc_tval = 0U;
            vlSelf->Advaita_V__DOT__exc_cause = 0xbU;
        } else {
            vlSelf->Advaita_V__DOT__exc_tval = vlSelf->Advaita_V__DOT__pc_address;
            vlSelf->Advaita_V__DOT__exc_cause = 3U;
        }
        vlSelf->Advaita_V__DOT__trap_detected = 1U;
    } else if (Advaita_V__DOT__i_cpu_core__DOT__load_misaligned) {
        vlSelf->Advaita_V__DOT__exc_tval = vlSelf->Advaita_V__DOT__alu_result;
        vlSelf->Advaita_V__DOT__exc_cause = 4U;
        vlSelf->Advaita_V__DOT__trap_detected = 1U;
    } else if (Advaita_V__DOT__i_cpu_core__DOT__store_misaligned) {
        vlSelf->Advaita_V__DOT__exc_tval = vlSelf->Advaita_V__DOT__alu_result;
        vlSelf->Advaita_V__DOT__exc_cause = 6U;
        vlSelf->Advaita_V__DOT__trap_detected = 1U;
    } else if (vlSelf->Advaita_V__DOT__interrupt_pending_wire) {
        vlSelf->Advaita_V__DOT__exc_tval = 0U;
        vlSelf->Advaita_V__DOT__exc_cause = vlSelf->Advaita_V__DOT__i_cpu_core__DOT__int_cause;
        vlSelf->Advaita_V__DOT__trap_detected = 1U;
    }
    vlSelf->trap_active_o = vlSelf->Advaita_V__DOT__trap_detected;
    vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__gated_reg_write 
        = ((~ (IData)(vlSelf->Advaita_V__DOT__trap_detected)) 
           & (IData)(Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_write_out));
    Advaita_V__DOT__i_cpu_core__DOT__if_st__DOT__pc_sel 
        = ((IData)(vlSelf->Advaita_V__DOT__trap_detected)
            ? 3U : ((IData)(vlSelf->Advaita_V__DOT__is_mret_instr)
                     ? 2U : ((IData)(Advaita_V__DOT__i_cpu_core__DOT__and_out_ex)
                              ? 1U : 0U)));
    vlSelf->Advaita_V__DOT__i_cpu_core__DOT__if_st__DOT__pc_next 
        = ((2U & (IData)(Advaita_V__DOT__i_cpu_core__DOT__if_st__DOT__pc_sel))
            ? ((1U & (IData)(Advaita_V__DOT__i_cpu_core__DOT__if_st__DOT__pc_sel))
                ? (((1U == (3U & vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mtvec)) 
                    & (vlSelf->Advaita_V__DOT__exc_cause 
                       >> 0x1fU)) ? ((0xfffffffcU & vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mtvec) 
                                     + VL_SHIFTL_III(32,32,32, vlSelf->Advaita_V__DOT__exc_cause, 2U))
                    : (0xfffffffcU & vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mtvec))
                : vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mepc)
            : ((1U & (IData)(Advaita_V__DOT__i_cpu_core__DOT__if_st__DOT__pc_sel))
                ? Advaita_V__DOT__i_cpu_core__DOT__pc_signed_offset
                : ((IData)(4U) + vlSelf->Advaita_V__DOT__pc_address)));
    vlSelf->Advaita_V__DOT__mem_read_en = ((~ (IData)(vlSelf->Advaita_V__DOT__trap_detected)) 
                                           & (IData)(Advaita_V__DOT__i_cpu_core__DOT__mem_read_raw));
    vlSelf->Advaita_V__DOT__mem_write_en = ((~ (IData)(vlSelf->Advaita_V__DOT__trap_detected)) 
                                            & (IData)(Advaita_V__DOT__i_cpu_core__DOT__mem_write_raw));
    vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__internal_be = 0U;
    vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__swizzled_write_data = 0U;
    if (((IData)(vlSelf->Advaita_V__DOT__mem_write_en) 
         & (0x23U == (IData)(Advaita_V__DOT__instr_opcode)))) {
        if ((0U == (IData)(Advaita_V__DOT__instr_fn3))) {
            if ((2U & vlSelf->Advaita_V__DOT__alu_result)) {
                if ((1U & vlSelf->Advaita_V__DOT__alu_result)) {
                    vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__internal_be = 8U;
                    vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__swizzled_write_data 
                        = ((0xffffffU & vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__swizzled_write_data) 
                           | (vlSelf->Advaita_V__DOT__rs2_data 
                              << 0x18U));
                } else {
                    vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__internal_be = 4U;
                    vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__swizzled_write_data 
                        = ((0xff00ffffU & vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__swizzled_write_data) 
                           | (0xff0000U & (vlSelf->Advaita_V__DOT__rs2_data 
                                           << 0x10U)));
                }
            } else if ((1U & vlSelf->Advaita_V__DOT__alu_result)) {
                vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__internal_be = 2U;
                vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__swizzled_write_data 
                    = ((0xffff00ffU & vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__swizzled_write_data) 
                       | (0xff00U & (vlSelf->Advaita_V__DOT__rs2_data 
                                     << 8U)));
            } else {
                vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__internal_be = 1U;
                vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__swizzled_write_data 
                    = ((0xffffff00U & vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__swizzled_write_data) 
                       | (0xffU & vlSelf->Advaita_V__DOT__rs2_data));
            }
        } else if ((1U == (IData)(Advaita_V__DOT__instr_fn3))) {
            if ((2U & vlSelf->Advaita_V__DOT__alu_result)) {
                if ((2U & vlSelf->Advaita_V__DOT__alu_result)) {
                    vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__internal_be = 0xcU;
                    vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__swizzled_write_data 
                        = ((0xffffU & vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__swizzled_write_data) 
                           | (vlSelf->Advaita_V__DOT__rs2_data 
                              << 0x10U));
                }
            } else {
                vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__internal_be = 3U;
                vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__swizzled_write_data 
                    = ((0xffff0000U & vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__swizzled_write_data) 
                       | (0xffffU & vlSelf->Advaita_V__DOT__rs2_data));
            }
        } else if ((2U == (IData)(Advaita_V__DOT__instr_fn3))) {
            vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__internal_be = 0xfU;
            vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__swizzled_write_data 
                = vlSelf->Advaita_V__DOT__rs2_data;
        } else {
            vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__internal_be = 0U;
        }
    }
    vlSelf->__VdfgTmp_ha0d88f65__0 = ((IData)(vlSelf->Advaita_V__DOT__mem_read_en) 
                                      | (IData)(vlSelf->Advaita_V__DOT__mem_write_en));
    Advaita_V__DOT__i_dmem_subsystem__DOT__raw_mem_read_data 
        = (((IData)(vlSelf->__VdfgTmp_ha0d88f65__0) 
            & ((~ (IData)(vlSelf->Advaita_V__DOT__mem_write_en)) 
               & (IData)(vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__in_range)))
            ? ((vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem
                [(0x3ffffU & ((IData)(3U) + (0x3fffcU 
                                             & vlSelf->Advaita_V__DOT__alu_result)))] 
                << 0x18U) | ((vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem
                              [(0x3ffffU & ((IData)(2U) 
                                            + (0x3fffcU 
                                               & vlSelf->Advaita_V__DOT__alu_result)))] 
                              << 0x10U) | ((vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem
                                            [(0x3ffffU 
                                              & ((IData)(1U) 
                                                 + 
                                                 (0x3fffcU 
                                                  & vlSelf->Advaita_V__DOT__alu_result)))] 
                                            << 8U) 
                                           | vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem
                                           [(0x3fffcU 
                                             & vlSelf->Advaita_V__DOT__alu_result)])))
            : 0U);
    if ((2U & vlSelf->Advaita_V__DOT__alu_result)) {
        Advaita_V__DOT__i_dmem_subsystem__DOT__byte_to_ext 
            = (0xffU & ((1U & vlSelf->Advaita_V__DOT__alu_result)
                         ? (Advaita_V__DOT__i_dmem_subsystem__DOT__raw_mem_read_data 
                            >> 0x18U) : (Advaita_V__DOT__i_dmem_subsystem__DOT__raw_mem_read_data 
                                         >> 0x10U)));
        if ((2U & vlSelf->Advaita_V__DOT__alu_result)) {
            vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__half_to_ext 
                = (Advaita_V__DOT__i_dmem_subsystem__DOT__raw_mem_read_data 
                   >> 0x10U);
        }
    } else {
        Advaita_V__DOT__i_dmem_subsystem__DOT__byte_to_ext 
            = (0xffU & ((1U & vlSelf->Advaita_V__DOT__alu_result)
                         ? (Advaita_V__DOT__i_dmem_subsystem__DOT__raw_mem_read_data 
                            >> 8U) : Advaita_V__DOT__i_dmem_subsystem__DOT__raw_mem_read_data));
        vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__half_to_ext 
            = (0xffffU & Advaita_V__DOT__i_dmem_subsystem__DOT__raw_mem_read_data);
    }
    vlSelf->Advaita_V__DOT__cpu_mem_out = 0U;
    if (((IData)(vlSelf->Advaita_V__DOT__mem_read_en) 
         & (3U == (IData)(Advaita_V__DOT__instr_opcode)))) {
        vlSelf->Advaita_V__DOT__cpu_mem_out = ((4U 
                                                & (IData)(Advaita_V__DOT__instr_fn3))
                                                ? (
                                                   (2U 
                                                    & (IData)(Advaita_V__DOT__instr_fn3))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(Advaita_V__DOT__instr_fn3))
                                                     ? (IData)(vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__half_to_ext)
                                                     : (IData)(Advaita_V__DOT__i_dmem_subsystem__DOT__byte_to_ext)))
                                                : (
                                                   (2U 
                                                    & (IData)(Advaita_V__DOT__instr_fn3))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(Advaita_V__DOT__instr_fn3))
                                                     ? 0U
                                                     : Advaita_V__DOT__i_dmem_subsystem__DOT__raw_mem_read_data)
                                                    : 
                                                   ((1U 
                                                     & (IData)(Advaita_V__DOT__instr_fn3))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__half_to_ext) 
                                                                     >> 0xfU)))) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__half_to_ext))
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(Advaita_V__DOT__i_dmem_subsystem__DOT__byte_to_ext) 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (IData)(Advaita_V__DOT__i_dmem_subsystem__DOT__byte_to_ext)))));
    }
    vlSelf->Advaita_V__DOT__i_cpu_core__DOT__wb_data 
        = ((2U & (IData)(Advaita_V__DOT__i_cpu_core__DOT__memtoreg))
            ? ((1U & (IData)(Advaita_V__DOT__i_cpu_core__DOT__memtoreg))
                ? Advaita_V__DOT__csr_rdata_wire : Advaita_V__DOT__i_cpu_core__DOT__wb_st__DOT__pre_wb_data)
            : ((1U & (IData)(Advaita_V__DOT__i_cpu_core__DOT__memtoreg))
                ? vlSelf->Advaita_V__DOT__cpu_mem_out
                : vlSelf->Advaita_V__DOT__alu_result));
}

VL_ATTR_COLD void VAdvaita_V___024root___eval_stl(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VAdvaita_V___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VAdvaita_V___024root___eval_triggers__stl(VAdvaita_V___024root* vlSelf);

VL_ATTR_COLD bool VAdvaita_V___024root___eval_phase__stl(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VAdvaita_V___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VAdvaita_V___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAdvaita_V___024root___dump_triggers__ico(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VAdvaita_V___024root___dump_triggers__act(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge Advaita_V.i_reset_sync.reset_ff2 or posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VAdvaita_V___024root___dump_triggers__nba(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge Advaita_V.i_reset_sync.reset_ff2 or posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VAdvaita_V___024root___ctor_var_reset(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->ext_write_inst = VL_RAND_RESET_I(32);
    vlSelf->ext_inst_we = VL_RAND_RESET_I(1);
    vlSelf->ext_interrupts = VL_RAND_RESET_I(32);
    vlSelf->trap_active_o = VL_RAND_RESET_I(1);
    vlSelf->mstatus_o = VL_RAND_RESET_I(32);
    vlSelf->pc_debug_o = VL_RAND_RESET_I(32);
    vlSelf->Advaita_V__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->Advaita_V__DOT__pc_address = VL_RAND_RESET_I(32);
    vlSelf->Advaita_V__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->Advaita_V__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->Advaita_V__DOT__cpu_mem_out = VL_RAND_RESET_I(32);
    vlSelf->Advaita_V__DOT__mem_write_en = VL_RAND_RESET_I(1);
    vlSelf->Advaita_V__DOT__mem_read_en = VL_RAND_RESET_I(1);
    vlSelf->Advaita_V__DOT__csr_write_en = VL_RAND_RESET_I(1);
    vlSelf->Advaita_V__DOT__csr_address = VL_RAND_RESET_I(12);
    vlSelf->Advaita_V__DOT__trap_detected = VL_RAND_RESET_I(1);
    vlSelf->Advaita_V__DOT__is_mret_instr = VL_RAND_RESET_I(1);
    vlSelf->Advaita_V__DOT__exc_cause = VL_RAND_RESET_I(32);
    vlSelf->Advaita_V__DOT__exc_tval = VL_RAND_RESET_I(32);
    vlSelf->Advaita_V__DOT__interrupt_pending_wire = VL_RAND_RESET_I(1);
    vlSelf->Advaita_V__DOT__i_reset_sync__DOT__reset_ff1 = VL_RAND_RESET_I(1);
    vlSelf->Advaita_V__DOT__i_reset_sync__DOT__reset_ff2 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 262144; ++__Vi0) {
        vlSelf->Advaita_V__DOT__i_imem__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->Advaita_V__DOT__i_imem__DOT__in_range = VL_RAND_RESET_I(1);
    vlSelf->Advaita_V__DOT__i_cpu_core__DOT__wb_data = VL_RAND_RESET_I(32);
    vlSelf->Advaita_V__DOT__i_cpu_core__DOT__int_cause = VL_RAND_RESET_I(32);
    vlSelf->Advaita_V__DOT__i_cpu_core__DOT__if_st__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__gated_reg_write = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mtval = VL_RAND_RESET_I(32);
    vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mscratch = VL_RAND_RESET_I(32);
    vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mie = VL_RAND_RESET_I(32);
    vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mip = VL_RAND_RESET_I(32);
    vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mcycle = VL_RAND_RESET_Q(64);
    vlSelf->Advaita_V__DOT__i_csr_bank__DOT__minstret = VL_RAND_RESET_Q(64);
    vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__internal_be = VL_RAND_RESET_I(4);
    vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__swizzled_write_data = VL_RAND_RESET_I(32);
    vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__half_to_ext = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 262144; ++__Vi0) {
        vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__in_range = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_hfc48439b__0 = 0;
    vlSelf->__VdfgTmp_ha727496b__0 = 0;
    vlSelf->__VdfgTmp_h58517da4__0 = 0;
    vlSelf->__VdfgTmp_ha0d88f65__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Advaita_V__DOT__i_reset_sync__DOT__reset_ff2__0 = VL_RAND_RESET_I(1);
}
