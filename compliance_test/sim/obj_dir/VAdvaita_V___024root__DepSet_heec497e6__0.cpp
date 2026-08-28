// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAdvaita_V.h for the primary calling header

#include "VAdvaita_V__pch.h"
#include "VAdvaita_V___024root.h"

VL_INLINE_OPT void VAdvaita_V___024root___ico_sequent__TOP__0(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___ico_sequent__TOP__0\n"); );
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

void VAdvaita_V___024root___eval_ico(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VAdvaita_V___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VAdvaita_V___024root___eval_triggers__ico(VAdvaita_V___024root* vlSelf);

bool VAdvaita_V___024root___eval_phase__ico(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VAdvaita_V___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VAdvaita_V___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VAdvaita_V___024root___eval_act(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___eval_act\n"); );
}

VL_INLINE_OPT void VAdvaita_V___024root___nba_sequent__TOP__0(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*17:0*/ __Vdlyvdim0__Advaita_V__DOT__i_imem__DOT__mem__v0;
    __Vdlyvdim0__Advaita_V__DOT__i_imem__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__Advaita_V__DOT__i_imem__DOT__mem__v0;
    __Vdlyvval__Advaita_V__DOT__i_imem__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Advaita_V__DOT__i_imem__DOT__mem__v0;
    __Vdlyvset__Advaita_V__DOT__i_imem__DOT__mem__v0 = 0;
    IData/*17:0*/ __Vdlyvdim0__Advaita_V__DOT__i_imem__DOT__mem__v1;
    __Vdlyvdim0__Advaita_V__DOT__i_imem__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__Advaita_V__DOT__i_imem__DOT__mem__v1;
    __Vdlyvval__Advaita_V__DOT__i_imem__DOT__mem__v1 = 0;
    IData/*17:0*/ __Vdlyvdim0__Advaita_V__DOT__i_imem__DOT__mem__v2;
    __Vdlyvdim0__Advaita_V__DOT__i_imem__DOT__mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__Advaita_V__DOT__i_imem__DOT__mem__v2;
    __Vdlyvval__Advaita_V__DOT__i_imem__DOT__mem__v2 = 0;
    IData/*17:0*/ __Vdlyvdim0__Advaita_V__DOT__i_imem__DOT__mem__v3;
    __Vdlyvdim0__Advaita_V__DOT__i_imem__DOT__mem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__Advaita_V__DOT__i_imem__DOT__mem__v3;
    __Vdlyvval__Advaita_V__DOT__i_imem__DOT__mem__v3 = 0;
    IData/*17:0*/ __Vdlyvdim0__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v0;
    __Vdlyvdim0__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v0;
    __Vdlyvval__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v0;
    __Vdlyvset__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v0 = 0;
    IData/*17:0*/ __Vdlyvdim0__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v1;
    __Vdlyvdim0__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v1;
    __Vdlyvval__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v1;
    __Vdlyvset__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v1 = 0;
    IData/*17:0*/ __Vdlyvdim0__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v2;
    __Vdlyvdim0__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v2;
    __Vdlyvval__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v2;
    __Vdlyvset__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v2 = 0;
    IData/*17:0*/ __Vdlyvdim0__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v3;
    __Vdlyvdim0__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v3;
    __Vdlyvval__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v3;
    __Vdlyvset__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v3 = 0;
    // Body
    __Vdlyvset__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v0 = 0U;
    __Vdlyvset__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v1 = 0U;
    __Vdlyvset__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v2 = 0U;
    __Vdlyvset__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v3 = 0U;
    __Vdlyvset__Advaita_V__DOT__i_imem__DOT__mem__v0 = 0U;
    if ((((IData)(vlSelf->__VdfgTmp_ha0d88f65__0) & (IData)(vlSelf->Advaita_V__DOT__mem_write_en)) 
         & (IData)(vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__in_range))) {
        if ((1U & (IData)(vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__internal_be))) {
            __Vdlyvval__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v0 
                = (0xffU & vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__swizzled_write_data);
            __Vdlyvset__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v0 = 1U;
            __Vdlyvdim0__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v0 
                = (0x3fffcU & vlSelf->Advaita_V__DOT__alu_result);
        }
        if ((2U & (IData)(vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__internal_be))) {
            __Vdlyvval__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v1 
                = (0xffU & (vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__swizzled_write_data 
                            >> 8U));
            __Vdlyvset__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v1 = 1U;
            __Vdlyvdim0__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v1 
                = (0x3ffffU & ((IData)(1U) + (0x3fffcU 
                                              & vlSelf->Advaita_V__DOT__alu_result)));
        }
        if ((4U & (IData)(vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__internal_be))) {
            __Vdlyvval__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v2 
                = (0xffU & (vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__swizzled_write_data 
                            >> 0x10U));
            __Vdlyvset__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v2 = 1U;
            __Vdlyvdim0__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v2 
                = (0x3ffffU & ((IData)(2U) + (0x3fffcU 
                                              & vlSelf->Advaita_V__DOT__alu_result)));
        }
        if ((8U & (IData)(vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__internal_be))) {
            __Vdlyvval__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v3 
                = (vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__swizzled_write_data 
                   >> 0x18U);
            __Vdlyvset__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v3 = 1U;
            __Vdlyvdim0__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v3 
                = (0x3ffffU & ((IData)(3U) + (0x3fffcU 
                                              & vlSelf->Advaita_V__DOT__alu_result)));
        }
    }
    if (((IData)(vlSelf->ext_inst_we) & (IData)(vlSelf->Advaita_V__DOT__i_imem__DOT__in_range))) {
        __Vdlyvval__Advaita_V__DOT__i_imem__DOT__mem__v0 
            = (0xffU & vlSelf->ext_write_inst);
        __Vdlyvset__Advaita_V__DOT__i_imem__DOT__mem__v0 = 1U;
        __Vdlyvdim0__Advaita_V__DOT__i_imem__DOT__mem__v0 
            = (0x3ffffU & vlSelf->Advaita_V__DOT__pc_address);
        __Vdlyvval__Advaita_V__DOT__i_imem__DOT__mem__v1 
            = (0xffU & (vlSelf->ext_write_inst >> 8U));
        __Vdlyvdim0__Advaita_V__DOT__i_imem__DOT__mem__v1 
            = (0x3ffffU & ((IData)(1U) + vlSelf->Advaita_V__DOT__pc_address));
        __Vdlyvval__Advaita_V__DOT__i_imem__DOT__mem__v2 
            = (0xffU & (vlSelf->ext_write_inst >> 0x10U));
        __Vdlyvdim0__Advaita_V__DOT__i_imem__DOT__mem__v2 
            = (0x3ffffU & ((IData)(2U) + vlSelf->Advaita_V__DOT__pc_address));
        __Vdlyvval__Advaita_V__DOT__i_imem__DOT__mem__v3 
            = (vlSelf->ext_write_inst >> 0x18U);
        __Vdlyvdim0__Advaita_V__DOT__i_imem__DOT__mem__v3 
            = (0x3ffffU & ((IData)(3U) + vlSelf->Advaita_V__DOT__pc_address));
    }
    if (__Vdlyvset__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v0) {
        vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem[__Vdlyvdim0__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v0] 
            = __Vdlyvval__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v0;
    }
    if (__Vdlyvset__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v1) {
        vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem[__Vdlyvdim0__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v1] 
            = __Vdlyvval__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v1;
    }
    if (__Vdlyvset__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v2) {
        vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem[__Vdlyvdim0__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v2] 
            = __Vdlyvval__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v2;
    }
    if (__Vdlyvset__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v3) {
        vlSelf->Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem[__Vdlyvdim0__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v3] 
            = __Vdlyvval__Advaita_V__DOT__i_dmem_subsystem__DOT__storage_inst__DOT__mem__v3;
    }
    if (__Vdlyvset__Advaita_V__DOT__i_imem__DOT__mem__v0) {
        vlSelf->Advaita_V__DOT__i_imem__DOT__mem[__Vdlyvdim0__Advaita_V__DOT__i_imem__DOT__mem__v0] 
            = __Vdlyvval__Advaita_V__DOT__i_imem__DOT__mem__v0;
        vlSelf->Advaita_V__DOT__i_imem__DOT__mem[__Vdlyvdim0__Advaita_V__DOT__i_imem__DOT__mem__v1] 
            = __Vdlyvval__Advaita_V__DOT__i_imem__DOT__mem__v1;
        vlSelf->Advaita_V__DOT__i_imem__DOT__mem[__Vdlyvdim0__Advaita_V__DOT__i_imem__DOT__mem__v2] 
            = __Vdlyvval__Advaita_V__DOT__i_imem__DOT__mem__v2;
        vlSelf->Advaita_V__DOT__i_imem__DOT__mem[__Vdlyvdim0__Advaita_V__DOT__i_imem__DOT__mem__v3] 
            = __Vdlyvval__Advaita_V__DOT__i_imem__DOT__mem__v3;
    }
}

VL_INLINE_OPT void VAdvaita_V___024root___nba_sequent__TOP__1(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register__v0;
    __Vdlyvset__Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register__v32;
    __Vdlyvdim0__Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register__v32 = 0;
    IData/*31:0*/ __Vdlyvval__Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register__v32;
    __Vdlyvval__Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register__v32 = 0;
    CData/*0:0*/ __Vdlyvset__Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register__v32;
    __Vdlyvset__Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register__v32 = 0;
    QData/*63:0*/ __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mcycle;
    __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mcycle = 0;
    QData/*63:0*/ __Vdly__Advaita_V__DOT__i_csr_bank__DOT__minstret;
    __Vdly__Advaita_V__DOT__i_csr_bank__DOT__minstret = 0;
    IData/*31:0*/ __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mstatus;
    __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mstatus = 0;
    // Body
    __Vdly__Advaita_V__DOT__i_csr_bank__DOT__minstret 
        = vlSelf->Advaita_V__DOT__i_csr_bank__DOT__minstret;
    __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mcycle 
        = vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mcycle;
    __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mstatus 
        = vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mstatus;
    __Vdlyvset__Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register__v0 = 0U;
    __Vdlyvset__Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register__v32 = 0U;
    if (vlSelf->Advaita_V__DOT__i_reset_sync__DOT__reset_ff2) {
        __Vdly__Advaita_V__DOT__i_csr_bank__DOT__minstret = 0ULL;
        __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mcycle = 0ULL;
        __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mstatus = 0x1800U;
        __Vdlyvset__Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register__v0 = 1U;
        vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mip = 0U;
        vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mscratch = 0U;
        vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mtval = 0U;
        vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mtvec = 0U;
        vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mcause = 0U;
        vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mie = 0U;
        vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mepc = 0U;
        vlSelf->Advaita_V__DOT__pc_address = 0x80000000U;
    } else {
        __Vdly__Advaita_V__DOT__i_csr_bank__DOT__minstret 
            = (1ULL + vlSelf->Advaita_V__DOT__i_csr_bank__DOT__minstret);
        __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mcycle 
            = (1ULL + vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mcycle);
        if ((1U & (~ (IData)(vlSelf->Advaita_V__DOT__trap_detected)))) {
            if ((1U & (~ (IData)(vlSelf->Advaita_V__DOT__is_mret_instr)))) {
                if (vlSelf->Advaita_V__DOT__csr_write_en) {
                    if ((1U & (~ ((((((((0x300U == (IData)(vlSelf->Advaita_V__DOT__csr_address)) 
                                        | (0x304U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) 
                                       | (0x305U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) 
                                      | (0x340U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) 
                                     | (0x341U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) 
                                    | (0x342U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) 
                                   | (0x343U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) 
                                  | (0xb00U == (IData)(vlSelf->Advaita_V__DOT__csr_address)))))) {
                        if ((0xb80U != (IData)(vlSelf->Advaita_V__DOT__csr_address))) {
                            if ((0xb02U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) {
                                __Vdly__Advaita_V__DOT__i_csr_bank__DOT__minstret 
                                    = ((0xffffffff00000000ULL 
                                        & __Vdly__Advaita_V__DOT__i_csr_bank__DOT__minstret) 
                                       | (IData)((IData)(vlSelf->Advaita_V__DOT__alu_result)));
                            } else if ((0xb82U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) {
                                __Vdly__Advaita_V__DOT__i_csr_bank__DOT__minstret 
                                    = ((0xffffffffULL 
                                        & __Vdly__Advaita_V__DOT__i_csr_bank__DOT__minstret) 
                                       | ((QData)((IData)(vlSelf->Advaita_V__DOT__alu_result)) 
                                          << 0x20U));
                            }
                        }
                    }
                    if (((((((((0x300U == (IData)(vlSelf->Advaita_V__DOT__csr_address)) 
                               | (0x304U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) 
                              | (0x305U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) 
                             | (0x340U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) 
                            | (0x341U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) 
                           | (0x342U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) 
                          | (0x343U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) 
                         | (0xb00U == (IData)(vlSelf->Advaita_V__DOT__csr_address)))) {
                        if ((0x300U != (IData)(vlSelf->Advaita_V__DOT__csr_address))) {
                            if ((0x304U != (IData)(vlSelf->Advaita_V__DOT__csr_address))) {
                                if ((0x305U != (IData)(vlSelf->Advaita_V__DOT__csr_address))) {
                                    if ((0x340U != (IData)(vlSelf->Advaita_V__DOT__csr_address))) {
                                        if ((0x341U 
                                             != (IData)(vlSelf->Advaita_V__DOT__csr_address))) {
                                            if ((0x342U 
                                                 != (IData)(vlSelf->Advaita_V__DOT__csr_address))) {
                                                if (
                                                    (0x343U 
                                                     != (IData)(vlSelf->Advaita_V__DOT__csr_address))) {
                                                    __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mcycle 
                                                        = 
                                                        ((0xffffffff00000000ULL 
                                                          & __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mcycle) 
                                                         | (IData)((IData)(vlSelf->Advaita_V__DOT__alu_result)));
                                                }
                                            }
                                        }
                                    }
                                    if ((0x340U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) {
                                        vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mscratch 
                                            = vlSelf->Advaita_V__DOT__alu_result;
                                    }
                                }
                                if ((0x305U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) {
                                    vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mtvec 
                                        = ((0xfffffffcU 
                                            & vlSelf->Advaita_V__DOT__alu_result) 
                                           | ((1U == 
                                               (3U 
                                                & vlSelf->Advaita_V__DOT__alu_result))
                                               ? 1U
                                               : 0U));
                                }
                            }
                            if ((0x304U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) {
                                vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mie 
                                    = (0x888U & vlSelf->Advaita_V__DOT__alu_result);
                            }
                        }
                    } else if ((0xb80U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) {
                        __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mcycle 
                            = ((0xffffffffULL & __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mcycle) 
                               | ((QData)((IData)(vlSelf->Advaita_V__DOT__alu_result)) 
                                  << 0x20U));
                    }
                }
            }
        }
        if (vlSelf->Advaita_V__DOT__trap_detected) {
            __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mstatus 
                = ((0xffffff7fU & __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mstatus) 
                   | (0x80U & (vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mstatus 
                               << 4U)));
            __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mstatus 
                = (0xfffffff7U & __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mstatus);
            __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mstatus 
                = (0x1800U | __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mstatus);
            vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mtval 
                = vlSelf->Advaita_V__DOT__exc_tval;
            vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mcause 
                = vlSelf->Advaita_V__DOT__exc_cause;
            vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mepc 
                = (0xfffffffcU & vlSelf->Advaita_V__DOT__pc_address);
        } else {
            if (vlSelf->Advaita_V__DOT__is_mret_instr) {
                __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mstatus 
                    = ((0xfffffff7U & __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mstatus) 
                       | (8U & (vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mstatus 
                                >> 4U)));
                __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mstatus 
                    = (0x80U | __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mstatus);
                __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mstatus 
                    = (0x1800U | __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mstatus);
            } else if (vlSelf->Advaita_V__DOT__csr_write_en) {
                if (((((((((0x300U == (IData)(vlSelf->Advaita_V__DOT__csr_address)) 
                           | (0x304U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) 
                          | (0x305U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) 
                         | (0x340U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) 
                        | (0x341U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) 
                       | (0x342U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) 
                      | (0x343U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) 
                     | (0xb00U == (IData)(vlSelf->Advaita_V__DOT__csr_address)))) {
                    if ((0x300U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) {
                        __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mstatus 
                            = ((0x88U & vlSelf->Advaita_V__DOT__alu_result) 
                               | (0xffffff77U & vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mstatus));
                    }
                }
            }
            if ((1U & (~ (IData)(vlSelf->Advaita_V__DOT__is_mret_instr)))) {
                if (vlSelf->Advaita_V__DOT__csr_write_en) {
                    if (((((((((0x300U == (IData)(vlSelf->Advaita_V__DOT__csr_address)) 
                               | (0x304U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) 
                              | (0x305U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) 
                             | (0x340U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) 
                            | (0x341U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) 
                           | (0x342U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) 
                          | (0x343U == (IData)(vlSelf->Advaita_V__DOT__csr_address))) 
                         | (0xb00U == (IData)(vlSelf->Advaita_V__DOT__csr_address)))) {
                        if ((0x300U != (IData)(vlSelf->Advaita_V__DOT__csr_address))) {
                            if ((0x304U != (IData)(vlSelf->Advaita_V__DOT__csr_address))) {
                                if ((0x305U != (IData)(vlSelf->Advaita_V__DOT__csr_address))) {
                                    if ((0x340U != (IData)(vlSelf->Advaita_V__DOT__csr_address))) {
                                        if ((0x341U 
                                             != (IData)(vlSelf->Advaita_V__DOT__csr_address))) {
                                            if ((0x342U 
                                                 != (IData)(vlSelf->Advaita_V__DOT__csr_address))) {
                                                if (
                                                    (0x343U 
                                                     == (IData)(vlSelf->Advaita_V__DOT__csr_address))) {
                                                    vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mtval 
                                                        = vlSelf->Advaita_V__DOT__alu_result;
                                                }
                                            }
                                            if ((0x342U 
                                                 == (IData)(vlSelf->Advaita_V__DOT__csr_address))) {
                                                vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mcause 
                                                    = vlSelf->Advaita_V__DOT__alu_result;
                                            }
                                        }
                                        if ((0x341U 
                                             == (IData)(vlSelf->Advaita_V__DOT__csr_address))) {
                                            vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mepc 
                                                = (0xfffffffcU 
                                                   & vlSelf->Advaita_V__DOT__alu_result);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (((0U != (IData)(vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd)) 
             & (IData)(vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__gated_reg_write))) {
            __Vdlyvval__Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register__v32 
                = vlSelf->Advaita_V__DOT__i_cpu_core__DOT__wb_data;
            __Vdlyvset__Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register__v32 = 1U;
            __Vdlyvdim0__Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register__v32 
                = vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd;
        }
        vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mip 
            = (0x888U & vlSelf->ext_interrupts);
        vlSelf->Advaita_V__DOT__pc_address = vlSelf->Advaita_V__DOT__i_cpu_core__DOT__if_st__DOT__pc_next;
    }
    vlSelf->Advaita_V__DOT__i_csr_bank__DOT__minstret 
        = __Vdly__Advaita_V__DOT__i_csr_bank__DOT__minstret;
    vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mcycle 
        = __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mcycle;
    vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mstatus 
        = __Vdly__Advaita_V__DOT__i_csr_bank__DOT__mstatus;
    if (__Vdlyvset__Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register__v0) {
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[0x1fU] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[0x1eU] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[0x1dU] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[0x1cU] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[0x1bU] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[0x1aU] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[0x19U] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[0x18U] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[0x17U] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[0x16U] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[0x15U] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[0x14U] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[0x13U] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[0x12U] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[0x11U] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[0x10U] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[0xfU] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[0xeU] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[0xdU] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[0xcU] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[0xbU] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[0xaU] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[9U] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[8U] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[7U] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[6U] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[5U] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[4U] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[3U] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[2U] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[1U] = 0U;
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[0U] = 0U;
    }
    if (__Vdlyvset__Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register__v32) {
        vlSelf->Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register[__Vdlyvdim0__Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register__v32] 
            = __Vdlyvval__Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__reg_file__DOT__register__v32;
    }
    vlSelf->mstatus_o = vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mstatus;
    vlSelf->Advaita_V__DOT__interrupt_pending_wire 
        = ((vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mstatus 
            >> 3U) & (0U != (0x888U & (vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mie 
                                       & vlSelf->Advaita_V__DOT__i_csr_bank__DOT__mip))));
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
    vlSelf->pc_debug_o = vlSelf->Advaita_V__DOT__pc_address;
    vlSelf->Advaita_V__DOT__i_imem__DOT__in_range = 
        ((0x80000000U <= vlSelf->Advaita_V__DOT__pc_address) 
         & ((0x40000U > (vlSelf->Advaita_V__DOT__pc_address 
                         - (IData)(0x80000000U))) & 
            (0U == (3U & vlSelf->Advaita_V__DOT__pc_address))));
    vlSelf->__VdfgTmp_hfc48439b__0 = ((~ (IData)(vlSelf->ext_inst_we)) 
                                      & (IData)(vlSelf->Advaita_V__DOT__i_imem__DOT__in_range));
}

VL_INLINE_OPT void VAdvaita_V___024root___nba_sequent__TOP__2(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->Advaita_V__DOT__i_reset_sync__DOT__reset_ff2 
        = ((IData)(vlSelf->reset) || (IData)(vlSelf->Advaita_V__DOT__i_reset_sync__DOT__reset_ff1));
    vlSelf->Advaita_V__DOT__i_reset_sync__DOT__reset_ff1 
        = vlSelf->reset;
}

VL_INLINE_OPT void VAdvaita_V___024root___nba_comb__TOP__0(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->__VdfgTmp_h58517da4__0 = vlSelf->Advaita_V__DOT__i_imem__DOT__mem
        [(0x3ffffU & ((IData)(2U) + vlSelf->Advaita_V__DOT__pc_address))];
    vlSelf->__VdfgTmp_ha727496b__0 = vlSelf->Advaita_V__DOT__i_imem__DOT__mem
        [(0x3ffffU & ((IData)(3U) + vlSelf->Advaita_V__DOT__pc_address))];
}

VL_INLINE_OPT void VAdvaita_V___024root___nba_comb__TOP__1(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___nba_comb__TOP__1\n"); );
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

void VAdvaita_V___024root___eval_nba(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VAdvaita_V___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VAdvaita_V___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VAdvaita_V___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VAdvaita_V___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VAdvaita_V___024root___nba_comb__TOP__1(vlSelf);
    }
}

void VAdvaita_V___024root___eval_triggers__act(VAdvaita_V___024root* vlSelf);

bool VAdvaita_V___024root___eval_phase__act(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VAdvaita_V___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VAdvaita_V___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VAdvaita_V___024root___eval_phase__nba(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VAdvaita_V___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAdvaita_V___024root___dump_triggers__ico(VAdvaita_V___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VAdvaita_V___024root___dump_triggers__nba(VAdvaita_V___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VAdvaita_V___024root___dump_triggers__act(VAdvaita_V___024root* vlSelf);
#endif  // VL_DEBUG

void VAdvaita_V___024root___eval(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VAdvaita_V___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/chips/Desktop/compliance_test/design/Advaita_V.sv", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VAdvaita_V___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VAdvaita_V___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/chips/Desktop/compliance_test/design/Advaita_V.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VAdvaita_V___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/chips/Desktop/compliance_test/design/Advaita_V.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VAdvaita_V___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VAdvaita_V___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VAdvaita_V___024root___eval_debug_assertions(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->ext_inst_we & 0xfeU))) {
        Verilated::overWidthError("ext_inst_we");}
}
#endif  // VL_DEBUG
