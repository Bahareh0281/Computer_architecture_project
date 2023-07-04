// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRISC_V_Processor_Pipelined.h for the primary calling header

#ifndef VERILATED_VRISC_V_PROCESSOR_PIPELINED___024UNIT_H_
#define VERILATED_VRISC_V_PROCESSOR_PIPELINED___024UNIT_H_  // guard

#include "verilated.h"


class VRISC_V_Processor_Pipelined__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRISC_V_Processor_Pipelined___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    VRISC_V_Processor_Pipelined__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRISC_V_Processor_Pipelined___024unit(VRISC_V_Processor_Pipelined__Syms* symsp, const char* v__name);
    ~VRISC_V_Processor_Pipelined___024unit();
    VL_UNCOPYABLE(VRISC_V_Processor_Pipelined___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
