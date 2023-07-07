// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISC_V_processor.h for the primary calling header

#include "verilated.h"

#include "VRISC_V_processor__Syms.h"
#include "VRISC_V_processor__Syms.h"
#include "VRISC_V_processor___024unit.h"

void VRISC_V_processor___024unit___ctor_var_reset(VRISC_V_processor___024unit* vlSelf);

VRISC_V_processor___024unit::VRISC_V_processor___024unit(VRISC_V_processor__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRISC_V_processor___024unit___ctor_var_reset(this);
}

void VRISC_V_processor___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VRISC_V_processor___024unit::~VRISC_V_processor___024unit() {
}
