// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRISC_V_processor.h for the primary calling header

#ifndef VERILATED_VRISC_V_PROCESSOR___024UNIT_H_
#define VERILATED_VRISC_V_PROCESSOR___024UNIT_H_  // guard

#include "verilated.h"


class VRISC_V_processor__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRISC_V_processor___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    VRISC_V_processor__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRISC_V_processor___024unit(VRISC_V_processor__Syms* symsp, const char* v__name);
    ~VRISC_V_processor___024unit();
    VL_UNCOPYABLE(VRISC_V_processor___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
