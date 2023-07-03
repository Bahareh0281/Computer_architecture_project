// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMODULES__SYMS_H_
#define VERILATED_VMODULES__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VModules.h"

// INCLUDE MODULE CLASSES
#include "VModules___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VModules__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VModules* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VModules___024root             TOP;

    // CONSTRUCTORS
    VModules__Syms(VerilatedContext* contextp, const char* namep, VModules* modelp);
    ~VModules__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
