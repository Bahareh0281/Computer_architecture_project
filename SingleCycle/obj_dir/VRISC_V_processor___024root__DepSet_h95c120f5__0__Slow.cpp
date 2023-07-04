// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISC_V_processor.h for the primary calling header

#include "verilated.h"

#include "VRISC_V_processor__Syms.h"
#include "VRISC_V_processor___024root.h"

VL_ATTR_COLD void VRISC_V_processor___024root___eval_static(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___eval_static\n"); );
}

VL_ATTR_COLD void VRISC_V_processor___024root___eval_initial__TOP(VRISC_V_processor___024root* vlSelf);

VL_ATTR_COLD void VRISC_V_processor___024root___eval_initial(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___eval_initial\n"); );
    // Body
    VRISC_V_processor___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
    vlSelf->__Vtrigprevexpr___TOP__RISC_V_Processor__DOT__PC_Out__0 = 0ULL;
}

VL_ATTR_COLD void VRISC_V_processor___024root___eval_initial__TOP(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___eval_initial__TOP\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->RISC_V_Processor__DOT__PC_Out = 0ULL;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0U] = 0x93U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[1U] = 2U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[2U] = 0x30U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[3U] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[4U] = 0x23U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[5U] = 0x32U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[6U] = 0x50U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[7U] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[8U] = 0x93U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[9U] = 2U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0xaU] = 0x20U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0xbU] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0xcU] = 0x23U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0xdU] = 0x36U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0xeU] = 0x50U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0xfU] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x10U] = 0x93U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x11U] = 2U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x12U] = 0xa0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x13U] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x14U] = 0x23U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x15U] = 0x3aU;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x16U] = 0x50U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x17U] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x18U] = 0x13U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x19U] = 5U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x1aU] = 0x40U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x1bU] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x1cU] = 0x93U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x1dU] = 5U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x1eU] = 0x30U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x1fU] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x20U] = 0x63U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x21U] = 0x16U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x22U] = 5U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x23U] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x24U] = 0x63U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x25U] = 0x94U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x26U] = 5U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x27U] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x28U] = 0x63U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x29U] = 0xcU;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x2aU] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x2bU] = 4U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x2cU] = 0x13U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x2dU] = 9U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x2eU] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x2fU] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x30U] = 0x63U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x31U] = 6U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x32U] = 0xb9U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x33U] = 4U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x34U] = 0xb3U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x35U] = 9U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x36U] = 0x20U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x37U] = 1U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x38U] = 0x63U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x39U] = 0x8eU;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x3aU] = 0xb9U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x3bU] = 2U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x3cU] = 0x93U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x3dU] = 0x12U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x3eU] = 0x39U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x3fU] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x40U] = 0x13U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x41U] = 0x93U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x42U] = 0x39U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x43U] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x44U] = 0xb3U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x45U] = 0x82U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x46U] = 0xa2U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x47U] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x48U] = 0x33U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x49U] = 3U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x4aU] = 0xa3U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x4bU] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x4cU] = 3U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x4dU] = 0xbeU;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x4eU] = 2U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x4fU] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x50U] = 0x83U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x51U] = 0x3eU;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x52U] = 3U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x53U] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x54U] = 0x63U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x55U] = 0x5cU;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x56U] = 0xdeU;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x57U] = 1U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x58U] = 0x33U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x59U] = 0xfU;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x5aU] = 0xc0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x5bU] = 1U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x5cU] = 0x33U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x5dU] = 0xeU;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x5eU] = 0xd0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x5fU] = 1U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x60U] = 0xb3U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x61U] = 0xeU;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x62U] = 0xe0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x63U] = 1U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x64U] = 0x23U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x65U] = 0xb0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x66U] = 0xc2U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x67U] = 1U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x68U] = 0x23U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x69U] = 0x30U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x6aU] = 0xd3U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x6bU] = 1U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x6cU] = 0x93U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x6dU] = 0x89U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x6eU] = 0x19U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x6fU] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x70U] = 0xe3U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x71U] = 4U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x72U] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x73U] = 0xfcU;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x74U] = 0x13U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x75U] = 9U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x76U] = 0x19U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x77U] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x78U] = 0xe3U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x79U] = 0xcU;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x7aU] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x7bU] = 0xfaU;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x7cU] = 0x63U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x7dU] = 2U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x7eU] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x7fU] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x80U] = 0x13U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x81U] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x82U] = 0U;
    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[0x83U] = 0U;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[0U] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[1U] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[2U] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[3U] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[4U] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[5U] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[6U] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[7U] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[8U] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[9U] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[0xaU] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[0xbU] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[0xcU] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[0xdU] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[0xeU] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[0xfU] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[0x10U] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[0x11U] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[0x12U] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[0x13U] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[0x14U] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[0x15U] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[0x16U] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[0x17U] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[0x18U] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[0x19U] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[0x1aU] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[0x1bU] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[0x1cU] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[0x1dU] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[0x1eU] = 0ULL;
    vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[0x1fU] = 0ULL;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_ATTR_COLD void VRISC_V_processor___024root___eval_final(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___eval_final\n"); );
}

VL_ATTR_COLD void VRISC_V_processor___024root___eval_triggers__stl(VRISC_V_processor___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VRISC_V_processor___024root___dump_triggers__stl(VRISC_V_processor___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VRISC_V_processor___024root___eval_stl(VRISC_V_processor___024root* vlSelf);

VL_ATTR_COLD void VRISC_V_processor___024root___eval_settle(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VRISC_V_processor___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VRISC_V_processor___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("RISC_V_processor.v", 4, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VRISC_V_processor___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISC_V_processor___024root___dump_triggers__stl(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VRISC_V_processor___024root___stl_sequent__TOP__0(VRISC_V_processor___024root* vlSelf);

VL_ATTR_COLD void VRISC_V_processor___024root___eval_stl(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VRISC_V_processor___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISC_V_processor___024root___dump_triggers__ico(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISC_V_processor___024root___dump_triggers__act(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or edge reset)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or posedge reset)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge reset)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge clk)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] RISC_V_Processor.PC_Out)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISC_V_processor___024root___dump_triggers__nba(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or edge reset)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or posedge reset)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge reset)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge clk)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] RISC_V_Processor.PC_Out)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VRISC_V_processor___024root___ctor_var_reset(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->RISC_V_Processor__DOT__PC_In_from_mux = VL_RAND_RESET_Q(64);
    vlSelf->RISC_V_Processor__DOT__PC_Out = VL_RAND_RESET_Q(64);
    vlSelf->RISC_V_Processor__DOT__Instruction = VL_RAND_RESET_I(32);
    vlSelf->RISC_V_Processor__DOT__ReadData2 = VL_RAND_RESET_Q(64);
    vlSelf->RISC_V_Processor__DOT__ALUOp = VL_RAND_RESET_I(2);
    vlSelf->RISC_V_Processor__DOT__Branch = VL_RAND_RESET_I(1);
    vlSelf->RISC_V_Processor__DOT__MemRead = VL_RAND_RESET_I(1);
    vlSelf->RISC_V_Processor__DOT__MemtoReg = VL_RAND_RESET_I(1);
    vlSelf->RISC_V_Processor__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->RISC_V_Processor__DOT__ALUSrc = VL_RAND_RESET_I(1);
    vlSelf->RISC_V_Processor__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->RISC_V_Processor__DOT__Operation = VL_RAND_RESET_I(4);
    vlSelf->RISC_V_Processor__DOT__Result_from_alu = VL_RAND_RESET_Q(64);
    vlSelf->RISC_V_Processor__DOT__zero_output = VL_RAND_RESET_I(1);
    vlSelf->RISC_V_Processor__DOT__imm_data = VL_RAND_RESET_Q(64);
    vlSelf->RISC_V_Processor__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->RISC_V_Processor__DOT__out_from_DM = VL_RAND_RESET_Q(64);
    vlSelf->RISC_V_Processor__DOT__pc__DOT__reset_force = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 132; ++__Vi0) {
        vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vdly__RISC_V_Processor__DOT__pc__DOT__reset_force = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__RISC_V_Processor__DOT__PC_Out__0 = VL_RAND_RESET_Q(64);
    vlSelf->__VactDidInit = 0;
}
