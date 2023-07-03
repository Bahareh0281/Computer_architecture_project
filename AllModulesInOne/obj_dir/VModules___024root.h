// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VModules.h for the primary calling header

#ifndef VERILATED_VMODULES___024ROOT_H_
#define VERILATED_VMODULES___024ROOT_H_  // guard

#include "verilated.h"


class VModules__Syms;

class alignas(VL_CACHE_LINE_BYTES) VModules___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(adder__02Ea,7,0);
    VL_IN8(adder__02Eb,7,0);
    VL_OUT8(sum,7,0);
    VL_IN8(multiplier__02Ea,7,0);
    VL_IN8(multiplier__02Eb,7,0);
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
    VModules__Syms* const vlSymsp;

    // CONSTRUCTORS
    VModules___024root(VModules__Syms* symsp, const char* v__name);
    ~VModules___024root();
    VL_UNCOPYABLE(VModules___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
