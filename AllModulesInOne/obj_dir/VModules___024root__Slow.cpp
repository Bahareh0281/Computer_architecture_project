// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VModules.h for the primary calling header

#include "verilated.h"

#include "VModules__Syms.h"
#include "VModules__Syms.h"
#include "VModules___024root.h"

void VModules___024root___ctor_var_reset(VModules___024root* vlSelf);

VModules___024root::VModules___024root(VModules__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VModules___024root___ctor_var_reset(this);
}

void VModules___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VModules___024root::~VModules___024root() {
}
