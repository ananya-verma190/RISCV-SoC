// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VAdvaita_V__pch.h"
#include "VAdvaita_V.h"
#include "VAdvaita_V___024root.h"

// FUNCTIONS
VAdvaita_V__Syms::~VAdvaita_V__Syms()
{
}

VAdvaita_V__Syms::VAdvaita_V__Syms(VerilatedContext* contextp, const char* namep, VAdvaita_V* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_Advaita_V.configure(this, name(), "Advaita_V", "Advaita_V", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Advaita_V__i_cpu_core.configure(this, name(), "Advaita_V.i_cpu_core", "i_cpu_core", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Advaita_V__i_cpu_core__id_st.configure(this, name(), "Advaita_V.i_cpu_core.id_st", "id_st", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_Advaita_V.varInsert(__Vfinal,"cpu_mem_out", &(TOP.Advaita_V__DOT__cpu_mem_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RD,1 ,31,0);
        __Vscope_Advaita_V.varInsert(__Vfinal,"csr_address", &(TOP.Advaita_V__DOT__csr_address), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RD,1 ,11,0);
        __Vscope_Advaita_V.varInsert(__Vfinal,"csr_write_en", &(TOP.Advaita_V__DOT__csr_write_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RD,0);
        __Vscope_Advaita_V.varInsert(__Vfinal,"instruction", &(TOP.Advaita_V__DOT__instruction), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RD,1 ,31,0);
        __Vscope_Advaita_V.varInsert(__Vfinal,"mem_read_en", &(TOP.Advaita_V__DOT__mem_read_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RD,0);
        __Vscope_Advaita_V.varInsert(__Vfinal,"rs2_data", &(TOP.Advaita_V__DOT__rs2_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RD,1 ,31,0);
        __Vscope_Advaita_V__i_cpu_core.varInsert(__Vfinal,"wb_data", &(TOP.Advaita_V__DOT__i_cpu_core__DOT__wb_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RD,1 ,31,0);
        __Vscope_Advaita_V__i_cpu_core__id_st.varInsert(__Vfinal,"gated_reg_write", &(TOP.Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__gated_reg_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RD,0);
        __Vscope_Advaita_V__i_cpu_core__id_st.varInsert(__Vfinal,"rd", &(TOP.Advaita_V__DOT__i_cpu_core__DOT__id_st__DOT__rd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RD,1 ,4,0);
    }
}
