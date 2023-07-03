// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtask2__02ddesign.h for the primary calling header

#include "verilated.h"

#include "Vtask2__02ddesign__Syms.h"
#include "Vtask2__02ddesign___024unit.h"

VL_ATTR_COLD void Vtask2__02ddesign___024unit___ctor_var_reset(Vtask2__02ddesign___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtask2__02ddesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtask2__02ddesign___024unit___ctor_var_reset\n"); );
    // Body
    vlSelf->__VmonitorNum = VL_RAND_RESET_Q(64);
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
