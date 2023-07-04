// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VRISC_V_processor__Syms.h"
#include "VRISC_V_processor.h"
#include "VRISC_V_processor___024root.h"
#include "VRISC_V_processor___024unit.h"

// FUNCTIONS
VRISC_V_processor__Syms::~VRISC_V_processor__Syms()
{
}

VRISC_V_processor__Syms::VRISC_V_processor__Syms(VerilatedContext* contextp, const char* namep, VRISC_V_processor* modelp)
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
    __Vscope_RISC_V_Processor.configure(this, name(), "RISC_V_Processor", "RISC_V_Processor", -12, VerilatedScope::SCOPE_OTHER);
}
