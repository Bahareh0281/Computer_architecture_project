// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VModules.h for the primary calling header

#include "verilated.h"

#include "VModules__Syms.h"
#include "VModules___024root.h"

VL_INLINE_OPT void VModules___024root___ico_sequent__TOP__0(VModules___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VModules__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModules___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->sum = (0xffU & ((IData)(vlSelf->adder__02Ea) 
                            + (IData)(vlSelf->adder__02Eb)));
    vlSelf->product = (0xffffU & ((IData)(vlSelf->multiplier__02Ea) 
                                  * (IData)(vlSelf->multiplier__02Eb)));
}

void VModules___024root___eval_ico(VModules___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VModules__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModules___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VModules___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VModules___024root___eval_act(VModules___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VModules__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModules___024root___eval_act\n"); );
}

void VModules___024root___eval_nba(VModules___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VModules__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModules___024root___eval_nba\n"); );
}

void VModules___024root___eval_triggers__ico(VModules___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VModules___024root___dump_triggers__ico(VModules___024root* vlSelf);
#endif  // VL_DEBUG
void VModules___024root___eval_triggers__act(VModules___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VModules___024root___dump_triggers__act(VModules___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VModules___024root___dump_triggers__nba(VModules___024root* vlSelf);
#endif  // VL_DEBUG

void VModules___024root___eval(VModules___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VModules__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModules___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VModules___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VModules___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("Modules.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VModules___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VModules___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VModules___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("Modules.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                VModules___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VModules___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("Modules.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VModules___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VModules___024root___eval_debug_assertions(VModules___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VModules__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModules___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
