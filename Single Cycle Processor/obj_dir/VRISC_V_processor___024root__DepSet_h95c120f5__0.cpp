// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISC_V_processor.h for the primary calling header

#include "verilated.h"

#include "VRISC_V_processor__Syms.h"
#include "VRISC_V_processor___024root.h"

void VRISC_V_processor___024root___ico_sequent__TOP__0(VRISC_V_processor___024root* vlSelf);

void VRISC_V_processor___024root___eval_ico(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VRISC_V_processor___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VRISC_V_processor___024root___act_sequent__TOP__0(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__RISC_V_Processor__DOT__pc__DOT__reset_force 
        = vlSelf->RISC_V_Processor__DOT__pc__DOT__reset_force;
}

VL_INLINE_OPT void VRISC_V_processor___024root___act_sequent__TOP__1(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___act_sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdly__RISC_V_Processor__DOT__pc__DOT__reset_force = 1U;
}

void VRISC_V_processor___024root___act_sequent__TOP__2(VRISC_V_processor___024root* vlSelf);

void VRISC_V_processor___024root___eval_act(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VpreTriggered.word(0U))) {
        VRISC_V_processor___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VRISC_V_processor___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VRISC_V_processor___024root___act_sequent__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void VRISC_V_processor___024root___nba_sequent__TOP__0(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->RISC_V_Processor__DOT__pc__DOT__reset_force 
        = vlSelf->__Vdly__RISC_V_Processor__DOT__pc__DOT__reset_force;
}

VL_INLINE_OPT void VRISC_V_processor___024root___nba_sequent__TOP__2(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->RISC_V_Processor__DOT__MemWrite) {
        vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem[(0x3fU 
                                                          & (IData)(vlSelf->RISC_V_Processor__DOT__Result_from_alu))] 
            = (0xffU & (IData)(vlSelf->RISC_V_Processor__DOT__ReadData2));
        vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem[(0x3fU 
                                                          & ((IData)(1U) 
                                                             + (IData)(vlSelf->RISC_V_Processor__DOT__Result_from_alu)))] 
            = (0xffU & (IData)((vlSelf->RISC_V_Processor__DOT__ReadData2 
                                >> 8U)));
        vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem[(0x3fU 
                                                          & ((IData)(2U) 
                                                             + (IData)(vlSelf->RISC_V_Processor__DOT__Result_from_alu)))] 
            = (0xffU & (IData)((vlSelf->RISC_V_Processor__DOT__ReadData2 
                                >> 0x10U)));
        vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem[(0x3fU 
                                                          & ((IData)(3U) 
                                                             + (IData)(vlSelf->RISC_V_Processor__DOT__Result_from_alu)))] 
            = (0xffU & (IData)((vlSelf->RISC_V_Processor__DOT__ReadData2 
                                >> 0x18U)));
        vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem[(0x3fU 
                                                          & ((IData)(4U) 
                                                             + (IData)(vlSelf->RISC_V_Processor__DOT__Result_from_alu)))] 
            = (0xffU & (IData)((vlSelf->RISC_V_Processor__DOT__ReadData2 
                                >> 0x20U)));
        vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem[(0x3fU 
                                                          & ((IData)(5U) 
                                                             + (IData)(vlSelf->RISC_V_Processor__DOT__Result_from_alu)))] 
            = (0xffU & (IData)((vlSelf->RISC_V_Processor__DOT__ReadData2 
                                >> 0x28U)));
        vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem[(0x3fU 
                                                          & ((IData)(6U) 
                                                             + (IData)(vlSelf->RISC_V_Processor__DOT__Result_from_alu)))] 
            = (0xffU & (IData)((vlSelf->RISC_V_Processor__DOT__ReadData2 
                                >> 0x30U)));
        vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem[(0x3fU 
                                                          & ((IData)(7U) 
                                                             + (IData)(vlSelf->RISC_V_Processor__DOT__Result_from_alu)))] 
            = (0xffU & (IData)((vlSelf->RISC_V_Processor__DOT__ReadData2 
                                >> 0x38U)));
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> VRISC_V_processor__ConstPool__TABLE_hc6f08ae8_0;
extern const VlUnpacked<CData/*0:0*/, 128> VRISC_V_processor__ConstPool__TABLE_hf161bc6c_0;
extern const VlUnpacked<CData/*0:0*/, 128> VRISC_V_processor__ConstPool__TABLE_h3dfcac50_0;
extern const VlUnpacked<CData/*0:0*/, 128> VRISC_V_processor__ConstPool__TABLE_hda0cf9d9_0;
extern const VlUnpacked<CData/*0:0*/, 128> VRISC_V_processor__ConstPool__TABLE_hfb2c73db_0;
extern const VlUnpacked<CData/*0:0*/, 128> VRISC_V_processor__ConstPool__TABLE_hdb7b249a_0;
extern const VlUnpacked<CData/*1:0*/, 128> VRISC_V_processor__ConstPool__TABLE_hd060e9d2_0;
extern const VlUnpacked<CData/*0:0*/, 64> VRISC_V_processor__ConstPool__TABLE_h4ffb09d3_0;
extern const VlUnpacked<CData/*3:0*/, 64> VRISC_V_processor__ConstPool__TABLE_h9ccefef0_0;

VL_INLINE_OPT void VRISC_V_processor___024root___nba_sequent__TOP__3(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___nba_sequent__TOP__3\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->RISC_V_Processor__DOT__Instruction = ((
                                                   ((0x83U 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(3U) 
                                                         + (IData)(vlSelf->RISC_V_Processor__DOT__PC_Out))))
                                                     ? 
                                                    vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory
                                                    [
                                                    (0xffU 
                                                     & ((IData)(3U) 
                                                        + (IData)(vlSelf->RISC_V_Processor__DOT__PC_Out)))]
                                                     : 0U) 
                                                   << 0x18U) 
                                                  | ((((0x83U 
                                                        >= 
                                                        (0xffU 
                                                         & ((IData)(2U) 
                                                            + (IData)(vlSelf->RISC_V_Processor__DOT__PC_Out))))
                                                        ? 
                                                       vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory
                                                       [
                                                       (0xffU 
                                                        & ((IData)(2U) 
                                                           + (IData)(vlSelf->RISC_V_Processor__DOT__PC_Out)))]
                                                        : 0U) 
                                                      << 0x10U) 
                                                     | ((((0x83U 
                                                           >= 
                                                           (0xffU 
                                                            & ((IData)(1U) 
                                                               + (IData)(vlSelf->RISC_V_Processor__DOT__PC_Out))))
                                                           ? 
                                                          vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory
                                                          [
                                                          (0xffU 
                                                           & ((IData)(1U) 
                                                              + (IData)(vlSelf->RISC_V_Processor__DOT__PC_Out)))]
                                                           : 0U) 
                                                         << 8U) 
                                                        | ((0x83U 
                                                            >= 
                                                            (0xffU 
                                                             & (IData)(vlSelf->RISC_V_Processor__DOT__PC_Out)))
                                                            ? 
                                                           vlSelf->RISC_V_Processor__DOT__im__DOT__inst_memory
                                                           [
                                                           (0xffU 
                                                            & (IData)(vlSelf->RISC_V_Processor__DOT__PC_Out))]
                                                            : 0U))));
    vlSelf->RISC_V_Processor__DOT__imm_data = ((0x40U 
                                                & vlSelf->RISC_V_Processor__DOT__Instruction)
                                                ? (
                                                   (0x20U 
                                                    & vlSelf->RISC_V_Processor__DOT__Instruction)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->RISC_V_Processor__DOT__Instruction)
                                                     ? 0ULL
                                                     : 
                                                    ((8U 
                                                      & vlSelf->RISC_V_Processor__DOT__Instruction)
                                                      ? 0ULL
                                                      : 
                                                     ((4U 
                                                       & vlSelf->RISC_V_Processor__DOT__Instruction)
                                                       ? 0ULL
                                                       : 
                                                      ((2U 
                                                        & vlSelf->RISC_V_Processor__DOT__Instruction)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->RISC_V_Processor__DOT__Instruction)
                                                         ? 
                                                        (((- (QData)((IData)(
                                                                             (vlSelf->RISC_V_Processor__DOT__Instruction 
                                                                              >> 0x1fU)))) 
                                                          << 0xcU) 
                                                         | (QData)((IData)(
                                                                           ((0x800U 
                                                                             & (vlSelf->RISC_V_Processor__DOT__Instruction 
                                                                                >> 0x14U)) 
                                                                            | ((0x400U 
                                                                                & (vlSelf->RISC_V_Processor__DOT__Instruction 
                                                                                << 3U)) 
                                                                               | ((0x3f0U 
                                                                                & (vlSelf->RISC_V_Processor__DOT__Instruction 
                                                                                >> 0x15U)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->RISC_V_Processor__DOT__Instruction 
                                                                                >> 8U))))))))
                                                         : 0ULL)
                                                        : 0ULL))))
                                                    : 0ULL)
                                                : (
                                                   (0x20U 
                                                    & vlSelf->RISC_V_Processor__DOT__Instruction)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->RISC_V_Processor__DOT__Instruction)
                                                     ? 0ULL
                                                     : 
                                                    ((8U 
                                                      & vlSelf->RISC_V_Processor__DOT__Instruction)
                                                      ? 0ULL
                                                      : 
                                                     ((4U 
                                                       & vlSelf->RISC_V_Processor__DOT__Instruction)
                                                       ? 0ULL
                                                       : 
                                                      ((2U 
                                                        & vlSelf->RISC_V_Processor__DOT__Instruction)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->RISC_V_Processor__DOT__Instruction)
                                                         ? 
                                                        (((- (QData)((IData)(
                                                                             (vlSelf->RISC_V_Processor__DOT__Instruction 
                                                                              >> 0x1fU)))) 
                                                          << 0xcU) 
                                                         | (QData)((IData)(
                                                                           ((0xfe0U 
                                                                             & (vlSelf->RISC_V_Processor__DOT__Instruction 
                                                                                >> 0x14U)) 
                                                                            | (0x1fU 
                                                                               & (vlSelf->RISC_V_Processor__DOT__Instruction 
                                                                                >> 7U))))))
                                                         : 0ULL)
                                                        : 0ULL))))
                                                    : 
                                                   ((0x10U 
                                                     & vlSelf->RISC_V_Processor__DOT__Instruction)
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->RISC_V_Processor__DOT__Instruction)
                                                      ? 0ULL
                                                      : 
                                                     ((4U 
                                                       & vlSelf->RISC_V_Processor__DOT__Instruction)
                                                       ? 0ULL
                                                       : 
                                                      ((2U 
                                                        & vlSelf->RISC_V_Processor__DOT__Instruction)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->RISC_V_Processor__DOT__Instruction)
                                                         ? 
                                                        (((- (QData)((IData)(
                                                                             (vlSelf->RISC_V_Processor__DOT__Instruction 
                                                                              >> 0x1fU)))) 
                                                          << 0xcU) 
                                                         | (QData)((IData)(
                                                                           (vlSelf->RISC_V_Processor__DOT__Instruction 
                                                                            >> 0x14U))))
                                                         : 0ULL)
                                                        : 0ULL)))
                                                     : 
                                                    ((8U 
                                                      & vlSelf->RISC_V_Processor__DOT__Instruction)
                                                      ? 0ULL
                                                      : 
                                                     ((4U 
                                                       & vlSelf->RISC_V_Processor__DOT__Instruction)
                                                       ? 0ULL
                                                       : 
                                                      ((2U 
                                                        & vlSelf->RISC_V_Processor__DOT__Instruction)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->RISC_V_Processor__DOT__Instruction)
                                                         ? 
                                                        (((- (QData)((IData)(
                                                                             (vlSelf->RISC_V_Processor__DOT__Instruction 
                                                                              >> 0x1fU)))) 
                                                          << 0xcU) 
                                                         | (QData)((IData)(
                                                                           (vlSelf->RISC_V_Processor__DOT__Instruction 
                                                                            >> 0x14U))))
                                                         : 0ULL)
                                                        : 0ULL))))));
    __Vtableidx1 = (0x7fU & vlSelf->RISC_V_Processor__DOT__Instruction);
    vlSelf->RISC_V_Processor__DOT__ALUSrc = VRISC_V_processor__ConstPool__TABLE_hc6f08ae8_0
        [__Vtableidx1];
    vlSelf->RISC_V_Processor__DOT__MemtoReg = VRISC_V_processor__ConstPool__TABLE_hf161bc6c_0
        [__Vtableidx1];
    vlSelf->RISC_V_Processor__DOT__RegWrite = VRISC_V_processor__ConstPool__TABLE_h3dfcac50_0
        [__Vtableidx1];
    vlSelf->RISC_V_Processor__DOT__MemRead = VRISC_V_processor__ConstPool__TABLE_hda0cf9d9_0
        [__Vtableidx1];
    vlSelf->RISC_V_Processor__DOT__MemWrite = VRISC_V_processor__ConstPool__TABLE_hfb2c73db_0
        [__Vtableidx1];
    vlSelf->RISC_V_Processor__DOT__Branch = VRISC_V_processor__ConstPool__TABLE_hdb7b249a_0
        [__Vtableidx1];
    vlSelf->RISC_V_Processor__DOT__ALUOp = VRISC_V_processor__ConstPool__TABLE_hd060e9d2_0
        [__Vtableidx1];
    __Vtableidx2 = ((0x20U & (vlSelf->RISC_V_Processor__DOT__Instruction 
                              >> 0x19U)) | ((0x1cU 
                                             & (vlSelf->RISC_V_Processor__DOT__Instruction 
                                                >> 0xaU)) 
                                            | (IData)(vlSelf->RISC_V_Processor__DOT__ALUOp)));
    if (VRISC_V_processor__ConstPool__TABLE_h4ffb09d3_0
        [__Vtableidx2]) {
        vlSelf->RISC_V_Processor__DOT__Operation = 
            VRISC_V_processor__ConstPool__TABLE_h9ccefef0_0
            [__Vtableidx2];
    }
}

VL_INLINE_OPT void VRISC_V_processor___024root___nba_comb__TOP__1(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___nba_comb__TOP__1\n"); );
    // Body
    if (vlSelf->RISC_V_Processor__DOT__MemRead) {
        vlSelf->RISC_V_Processor__DOT__out_from_DM 
            = (((QData)((IData)(((vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem
                                  [(0x3fU & ((IData)(7U) 
                                             + (IData)(vlSelf->RISC_V_Processor__DOT__Result_from_alu)))] 
                                  << 0x18U) | ((vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem
                                                [(0x3fU 
                                                  & ((IData)(6U) 
                                                     + (IData)(vlSelf->RISC_V_Processor__DOT__Result_from_alu)))] 
                                                << 0x10U) 
                                               | ((vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem
                                                   [
                                                   (0x3fU 
                                                    & ((IData)(5U) 
                                                       + (IData)(vlSelf->RISC_V_Processor__DOT__Result_from_alu)))] 
                                                   << 8U) 
                                                  | vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem
                                                  [
                                                  (0x3fU 
                                                   & ((IData)(4U) 
                                                      + (IData)(vlSelf->RISC_V_Processor__DOT__Result_from_alu)))]))))) 
                << 0x20U) | (QData)((IData)(((vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem
                                              [(0x3fU 
                                                & ((IData)(3U) 
                                                   + (IData)(vlSelf->RISC_V_Processor__DOT__Result_from_alu)))] 
                                              << 0x18U) 
                                             | ((vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem
                                                 [(0x3fU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelf->RISC_V_Processor__DOT__Result_from_alu)))] 
                                                 << 0x10U) 
                                                | ((vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem
                                                    [
                                                    (0x3fU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelf->RISC_V_Processor__DOT__Result_from_alu)))] 
                                                    << 8U) 
                                                   | vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem
                                                   [
                                                   (0x3fU 
                                                    & (IData)(vlSelf->RISC_V_Processor__DOT__Result_from_alu))]))))));
    }
}

void VRISC_V_processor___024root___nba_sequent__TOP__1(VRISC_V_processor___024root* vlSelf);
void VRISC_V_processor___024root___nba_comb__TOP__0(VRISC_V_processor___024root* vlSelf);

void VRISC_V_processor___024root___eval_nba(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VRISC_V_processor___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VRISC_V_processor___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VRISC_V_processor___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VRISC_V_processor___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x18ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VRISC_V_processor___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x38ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VRISC_V_processor___024root___nba_comb__TOP__1(vlSelf);
    }
}

void VRISC_V_processor___024root___eval_triggers__ico(VRISC_V_processor___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VRISC_V_processor___024root___dump_triggers__ico(VRISC_V_processor___024root* vlSelf);
#endif  // VL_DEBUG
void VRISC_V_processor___024root___eval_triggers__act(VRISC_V_processor___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VRISC_V_processor___024root___dump_triggers__act(VRISC_V_processor___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRISC_V_processor___024root___dump_triggers__nba(VRISC_V_processor___024root* vlSelf);
#endif  // VL_DEBUG

void VRISC_V_processor___024root___eval(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VRISC_V_processor___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VRISC_V_processor___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("RISC_V_processor.v", 4, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VRISC_V_processor___024root___eval_ico(vlSelf);
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
            VRISC_V_processor___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VRISC_V_processor___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("RISC_V_processor.v", 4, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                vlSelf->__VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                VRISC_V_processor___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VRISC_V_processor___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("RISC_V_processor.v", 4, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VRISC_V_processor___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VRISC_V_processor___024root___eval_debug_assertions(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
