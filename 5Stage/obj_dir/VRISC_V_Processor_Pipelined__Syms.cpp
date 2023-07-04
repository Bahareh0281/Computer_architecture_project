// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VRISC_V_Processor_Pipelined__Syms.h"
#include "VRISC_V_Processor_Pipelined.h"
#include "VRISC_V_Processor_Pipelined___024root.h"
#include "VRISC_V_Processor_Pipelined___024unit.h"

// FUNCTIONS
VRISC_V_Processor_Pipelined__Syms::~VRISC_V_Processor_Pipelined__Syms()
{
}

VRISC_V_Processor_Pipelined__Syms::VRISC_V_Processor_Pipelined__Syms(VerilatedContext* contextp, const char* namep, VRISC_V_Processor_Pipelined* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_RISC_V_Processor_Pipelined.configure(this, name(), "RISC_V_Processor_Pipelined", "RISC_V_Processor_Pipelined", -12, VerilatedScope::SCOPE_OTHER);
}
