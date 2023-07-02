// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTASK2__02DDESIGN__SYMS_H_
#define VERILATED_VTASK2__02DDESIGN__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtask2__02ddesign.h"

// INCLUDE MODULE CLASSES
#include "Vtask2__02ddesign___024root.h"
#include "Vtask2__02ddesign___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtask2__02ddesign__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtask2__02ddesign* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtask2__02ddesign___024root    TOP;
    Vtask2__02ddesign___024unit    TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_RISC_V_Processor;

    // CONSTRUCTORS
    Vtask2__02ddesign__Syms(VerilatedContext* contextp, const char* namep, Vtask2__02ddesign* modelp);
    ~Vtask2__02ddesign__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
