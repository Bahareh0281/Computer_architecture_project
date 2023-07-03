// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtask2__02ddesign.h for the primary calling header

#ifndef VERILATED_VTASK2__02DDESIGN___024UNIT_H_
#define VERILATED_VTASK2__02DDESIGN___024UNIT_H_  // guard

#include "verilated.h"


class Vtask2__02ddesign__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtask2__02ddesign___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vtask2__02ddesign__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtask2__02ddesign___024unit(Vtask2__02ddesign__Syms* symsp, const char* v__name);
    ~Vtask2__02ddesign___024unit();
    VL_UNCOPYABLE(Vtask2__02ddesign___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
