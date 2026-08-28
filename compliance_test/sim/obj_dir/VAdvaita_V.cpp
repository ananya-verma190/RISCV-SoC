// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAdvaita_V__pch.h"

//============================================================
// Constructors

VAdvaita_V::VAdvaita_V(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VAdvaita_V__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , ext_inst_we{vlSymsp->TOP.ext_inst_we}
    , trap_active_o{vlSymsp->TOP.trap_active_o}
    , ext_write_inst{vlSymsp->TOP.ext_write_inst}
    , ext_interrupts{vlSymsp->TOP.ext_interrupts}
    , mstatus_o{vlSymsp->TOP.mstatus_o}
    , pc_debug_o{vlSymsp->TOP.pc_debug_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VAdvaita_V::VAdvaita_V(const char* _vcname__)
    : VAdvaita_V(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VAdvaita_V::~VAdvaita_V() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VAdvaita_V___024root___eval_debug_assertions(VAdvaita_V___024root* vlSelf);
#endif  // VL_DEBUG
void VAdvaita_V___024root___eval_static(VAdvaita_V___024root* vlSelf);
void VAdvaita_V___024root___eval_initial(VAdvaita_V___024root* vlSelf);
void VAdvaita_V___024root___eval_settle(VAdvaita_V___024root* vlSelf);
void VAdvaita_V___024root___eval(VAdvaita_V___024root* vlSelf);

void VAdvaita_V::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAdvaita_V::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAdvaita_V___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VAdvaita_V___024root___eval_static(&(vlSymsp->TOP));
        VAdvaita_V___024root___eval_initial(&(vlSymsp->TOP));
        VAdvaita_V___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VAdvaita_V___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VAdvaita_V::eventsPending() { return false; }

uint64_t VAdvaita_V::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VAdvaita_V::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VAdvaita_V___024root___eval_final(VAdvaita_V___024root* vlSelf);

VL_ATTR_COLD void VAdvaita_V::final() {
    VAdvaita_V___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VAdvaita_V::hierName() const { return vlSymsp->name(); }
const char* VAdvaita_V::modelName() const { return "VAdvaita_V"; }
unsigned VAdvaita_V::threads() const { return 1; }
void VAdvaita_V::prepareClone() const { contextp()->prepareClone(); }
void VAdvaita_V::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VAdvaita_V::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VAdvaita_V::trace()' called on model that was Verilated without --trace option");
}
