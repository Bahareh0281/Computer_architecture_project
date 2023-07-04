// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmultiplier.h for the primary calling header

#ifndef VERILATED_VMULTIPLIER___024ROOT_H_
#define VERILATED_VMULTIPLIER___024ROOT_H_  // guard

#include "verilated.h"


class Vmultiplier__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmultiplier___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,7,0);
    VL_IN8(b,7,0);
    CData/*0:0*/ __VactContinue;
    VL_OUT16(product,15,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmultiplier__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmultiplier___024root(Vmultiplier__Syms* symsp, const char* v__name);
    ~Vmultiplier___024root();
    VL_UNCOPYABLE(Vmultiplier___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
