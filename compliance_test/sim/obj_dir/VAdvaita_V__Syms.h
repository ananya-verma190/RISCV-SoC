// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VADVAITA_V__SYMS_H_
#define VERILATED_VADVAITA_V__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VAdvaita_V.h"

// INCLUDE MODULE CLASSES
#include "VAdvaita_V___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VAdvaita_V__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VAdvaita_V* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VAdvaita_V___024root           TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_Advaita_V;
    VerilatedScope __Vscope_Advaita_V__i_cpu_core;
    VerilatedScope __Vscope_Advaita_V__i_cpu_core__id_st;

    // CONSTRUCTORS
    VAdvaita_V__Syms(VerilatedContext* contextp, const char* namep, VAdvaita_V* modelp);
    ~VAdvaita_V__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
