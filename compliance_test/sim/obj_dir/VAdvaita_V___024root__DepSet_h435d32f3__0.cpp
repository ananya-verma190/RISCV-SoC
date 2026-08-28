// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAdvaita_V.h for the primary calling header

#include "VAdvaita_V__pch.h"
#include "VAdvaita_V__Syms.h"
#include "VAdvaita_V___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VAdvaita_V___024root___dump_triggers__ico(VAdvaita_V___024root* vlSelf);
#endif  // VL_DEBUG

void VAdvaita_V___024root___eval_triggers__ico(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VAdvaita_V___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAdvaita_V___024root___dump_triggers__act(VAdvaita_V___024root* vlSelf);
#endif  // VL_DEBUG

void VAdvaita_V___024root___eval_triggers__act(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->Advaita_V__DOT__i_reset_sync__DOT__reset_ff2) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__Advaita_V__DOT__i_reset_sync__DOT__reset_ff2__0))) 
                                     | ((IData)(vlSelf->clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
    vlSelf->__Vtrigprevexpr___TOP__Advaita_V__DOT__i_reset_sync__DOT__reset_ff2__0 
        = vlSelf->Advaita_V__DOT__i_reset_sync__DOT__reset_ff2;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VAdvaita_V___024root___dump_triggers__act(vlSelf);
    }
#endif
}
