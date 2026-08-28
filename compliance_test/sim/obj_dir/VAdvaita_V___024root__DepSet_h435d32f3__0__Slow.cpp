// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAdvaita_V.h for the primary calling header

#include "VAdvaita_V__pch.h"
#include "VAdvaita_V__Syms.h"
#include "VAdvaita_V___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VAdvaita_V___024root___dump_triggers__stl(VAdvaita_V___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VAdvaita_V___024root___eval_triggers__stl(VAdvaita_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdvaita_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdvaita_V___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VAdvaita_V___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
