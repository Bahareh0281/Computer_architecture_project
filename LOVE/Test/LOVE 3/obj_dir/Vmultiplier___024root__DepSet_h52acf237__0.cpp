// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmultiplier.h for the primary calling header

#include "verilated.h"

#include "Vmultiplier__Syms.h"
#include "Vmultiplier___024root.h"

VL_INLINE_OPT void Vmultiplier___024root___ico_sequent__TOP__0(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->product = (0xffffU & ((IData)(vlSelf->a) 
                                  * (IData)(vlSelf->b)));
}

void Vmultiplier___024root___eval_ico(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vmultiplier___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vmultiplier___024root___eval_act(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_act\n"); );
}

void Vmultiplier___024root___eval_nba(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_nba\n"); );
}

void Vmultiplier___024root___eval_triggers__ico(Vmultiplier___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier___024root___dump_triggers__ico(Vmultiplier___024root* vlSelf);
#endif  // VL_DEBUG
void Vmultiplier___024root___eval_triggers__act(Vmultiplier___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier___024root___dump_triggers__act(Vmultiplier___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier___024root___dump_triggers__nba(Vmultiplier___024root* vlSelf);
#endif  // VL_DEBUG

void Vmultiplier___024root___eval(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval\n"); );
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
        Vmultiplier___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vmultiplier___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("multiplier.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vmultiplier___024root___eval_ico(vlSelf);
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
            Vmultiplier___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vmultiplier___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("multiplier.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vmultiplier___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vmultiplier___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("multiplier.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vmultiplier___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vmultiplier___024root___eval_debug_assertions(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
