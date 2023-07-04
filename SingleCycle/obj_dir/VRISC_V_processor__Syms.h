// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRISC_V_PROCESSOR__SYMS_H_
#define VERILATED_VRISC_V_PROCESSOR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VRISC_V_processor.h"

// INCLUDE MODULE CLASSES
#include "VRISC_V_processor___024root.h"
#include "VRISC_V_processor___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VRISC_V_processor__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VRISC_V_processor* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VRISC_V_processor___024root    TOP;
    VRISC_V_processor___024unit    TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_RISC_V_Processor;

    // CONSTRUCTORS
    VRISC_V_processor__Syms(VerilatedContext* contextp, const char* namep, VRISC_V_processor* modelp);
    ~VRISC_V_processor__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
