// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__Top__DOT__pc__DOT__reset_force 
        = vlSelf->Top__DOT__pc__DOT__reset_force;
}

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdly__Top__DOT__pc__DOT__reset_force = 1U;
}

void Vtop___024root___act_sequent__TOP__2(Vtop___024root* vlSelf);

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VpreTriggered.word(0U))) {
        Vtop___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtop___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtop___024root___act_sequent__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->Top__DOT__pc__DOT__reset_force = vlSelf->__Vdly__Top__DOT__pc__DOT__reset_force;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->Top__DOT__EXMEM_MemWrite) {
        vlSelf->Top__DOT__dm__DOT__data_mem[(0x3fU 
                                             & (IData)(vlSelf->Top__DOT__EXMEM_Result))] 
            = (0xffU & (IData)(vlSelf->Top__DOT__EXMEM_ReadData2));
        vlSelf->Top__DOT__dm__DOT__data_mem[(0x3fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->Top__DOT__EXMEM_Result)))] 
            = (0xffU & (IData)((vlSelf->Top__DOT__EXMEM_ReadData2 
                                >> 8U)));
        vlSelf->Top__DOT__dm__DOT__data_mem[(0x3fU 
                                             & ((IData)(2U) 
                                                + (IData)(vlSelf->Top__DOT__EXMEM_Result)))] 
            = (0xffU & (IData)((vlSelf->Top__DOT__EXMEM_ReadData2 
                                >> 0x10U)));
        vlSelf->Top__DOT__dm__DOT__data_mem[(0x3fU 
                                             & ((IData)(3U) 
                                                + (IData)(vlSelf->Top__DOT__EXMEM_Result)))] 
            = (0xffU & (IData)((vlSelf->Top__DOT__EXMEM_ReadData2 
                                >> 0x18U)));
        vlSelf->Top__DOT__dm__DOT__data_mem[(0x3fU 
                                             & ((IData)(4U) 
                                                + (IData)(vlSelf->Top__DOT__EXMEM_Result)))] 
            = (0xffU & (IData)((vlSelf->Top__DOT__EXMEM_ReadData2 
                                >> 0x20U)));
        vlSelf->Top__DOT__dm__DOT__data_mem[(0x3fU 
                                             & ((IData)(5U) 
                                                + (IData)(vlSelf->Top__DOT__EXMEM_Result)))] 
            = (0xffU & (IData)((vlSelf->Top__DOT__EXMEM_ReadData2 
                                >> 0x28U)));
        vlSelf->Top__DOT__dm__DOT__data_mem[(0x3fU 
                                             & ((IData)(6U) 
                                                + (IData)(vlSelf->Top__DOT__EXMEM_Result)))] 
            = (0xffU & (IData)((vlSelf->Top__DOT__EXMEM_ReadData2 
                                >> 0x30U)));
        vlSelf->Top__DOT__dm__DOT__data_mem[(0x3fU 
                                             & ((IData)(7U) 
                                                + (IData)(vlSelf->Top__DOT__EXMEM_Result)))] 
            = (0xffU & (IData)((vlSelf->Top__DOT__EXMEM_ReadData2 
                                >> 0x38U)));
    }
    if (vlSelf->Top__DOT__MEMWB_RegWrite) {
        vlSelf->Top__DOT__rf__DOT__Registers[vlSelf->Top__DOT__MEMWB_inst2] 
            = vlSelf->Top__DOT__out_from_mux3;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->Top__DOT__Instruction = ((((0x83U >= (0xffU 
                                                  & ((IData)(3U) 
                                                     + (IData)(vlSelf->Top__DOT__PC_Out))))
                                        ? vlSelf->Top__DOT__im__DOT__inst_memory
                                       [(0xffU & ((IData)(3U) 
                                                  + (IData)(vlSelf->Top__DOT__PC_Out)))]
                                        : 0U) << 0x18U) 
                                     | ((((0x83U >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + (IData)(vlSelf->Top__DOT__PC_Out))))
                                           ? vlSelf->Top__DOT__im__DOT__inst_memory
                                          [(0xffU & 
                                            ((IData)(2U) 
                                             + (IData)(vlSelf->Top__DOT__PC_Out)))]
                                           : 0U) << 0x10U) 
                                        | ((((0x83U 
                                              >= (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->Top__DOT__PC_Out))))
                                              ? vlSelf->Top__DOT__im__DOT__inst_memory
                                             [(0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->Top__DOT__PC_Out)))]
                                              : 0U) 
                                            << 8U) 
                                           | ((0x83U 
                                               >= (0xffU 
                                                   & (IData)(vlSelf->Top__DOT__PC_Out)))
                                               ? vlSelf->Top__DOT__im__DOT__inst_memory
                                              [(0xffU 
                                                & (IData)(vlSelf->Top__DOT__PC_Out))]
                                               : 0U))));
}

extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h4ffb09d3_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vtop__ConstPool__TABLE_h9ccefef0_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hc6f08ae8_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hf161bc6c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h3dfcac50_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hda0cf9d9_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hfb2c73db_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hdb7b249a_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_hd060e9d2_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    // Init
    QData/*63:0*/ Top__DOT__IDEX_PC_Out;
    Top__DOT__IDEX_PC_Out = 0;
    CData/*4:0*/ Top__DOT__EXMEM_inst2;
    Top__DOT__EXMEM_inst2 = 0;
    CData/*0:0*/ Top__DOT__EXMEM_MemtoReg;
    Top__DOT__EXMEM_MemtoReg = 0;
    CData/*0:0*/ Top__DOT__EXMEM_RegWrite;
    Top__DOT__EXMEM_RegWrite = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->Top__DOT__EXMEM_ZERO = 0U;
    if (vlSelf->clk) {
        Top__DOT__IDEX_PC_Out = vlSelf->Top__DOT__IFID_PC_Out;
        vlSelf->Top__DOT__EXMEM_ReadData2 = vlSelf->Top__DOT__IDEX_ReadData2;
        Top__DOT__EXMEM_inst2 = vlSelf->Top__DOT__IDEX_inst2;
        vlSelf->Top__DOT__MEMWB_inst2 = Top__DOT__EXMEM_inst2;
        vlSelf->Top__DOT__IFID_PC_Out = vlSelf->Top__DOT__PC_Out;
        vlSelf->Top__DOT__IDEX_inst2 = (0x1fU & (vlSelf->Top__DOT__IFID_instruction 
                                                 >> 7U));
        vlSelf->Top__DOT__EXMEM_out = (Top__DOT__IDEX_PC_Out 
                                       + (vlSelf->Top__DOT__IDEX_imm_data 
                                          << 1U));
        vlSelf->Top__DOT__MEMWB_Result = vlSelf->Top__DOT__EXMEM_Result;
        vlSelf->Top__DOT__MEMWB_read_data = vlSelf->Top__DOT__out_from_DM;
        vlSelf->Top__DOT__IDEX_inst1 = ((8U & (vlSelf->Top__DOT__IFID_instruction 
                                               >> 0x1bU)) 
                                        | (7U & (vlSelf->Top__DOT__IFID_instruction 
                                                 >> 0xcU)));
        vlSelf->Top__DOT__IDEX_imm_data = vlSelf->Top__DOT__imm_data;
        if (vlSelf->reset) {
            vlSelf->Top__DOT__IDEX_ReadData2 = 0ULL;
            vlSelf->Top__DOT__IDEX_ReadData1 = 0ULL;
        } else {
            vlSelf->Top__DOT__IDEX_ReadData2 = vlSelf->Top__DOT__rf__DOT__Registers
                [(0x1fU & (vlSelf->Top__DOT__IFID_instruction 
                           >> 0x14U))];
            vlSelf->Top__DOT__IDEX_ReadData1 = vlSelf->Top__DOT__rf__DOT__Registers
                [(0x1fU & (vlSelf->Top__DOT__IFID_instruction 
                           >> 0xfU))];
        }
        vlSelf->Top__DOT__IDEX_ALUOp = vlSelf->Top__DOT__ALUOp;
        vlSelf->Top__DOT__EXMEM_Result = ((8U & (IData)(vlSelf->Top__DOT__Operation))
                                           ? ((4U & (IData)(vlSelf->Top__DOT__Operation))
                                               ? ((2U 
                                                   & (IData)(vlSelf->Top__DOT__Operation))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->Top__DOT__Operation))
                                                    ? 0ULL
                                                    : 
                                                   (~ 
                                                    (vlSelf->Top__DOT__Resa 
                                                     | vlSelf->Top__DOT__Resb))))
                                               : ((2U 
                                                   & (IData)(vlSelf->Top__DOT__Operation))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->Top__DOT__Operation))
                                                    ? 0ULL
                                                    : 
                                                   VL_SHIFTL_QQQ(64,64,64, vlSelf->Top__DOT__Resa, vlSelf->Top__DOT__Resb))))
                                           : ((4U & (IData)(vlSelf->Top__DOT__Operation))
                                               ? ((2U 
                                                   & (IData)(vlSelf->Top__DOT__Operation))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->Top__DOT__Operation))
                                                    ? 0ULL
                                                    : 
                                                   (vlSelf->Top__DOT__Resa 
                                                    - vlSelf->Top__DOT__Resb))
                                                   : 0ULL)
                                               : ((2U 
                                                   & (IData)(vlSelf->Top__DOT__Operation))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->Top__DOT__Operation))
                                                    ? 0ULL
                                                    : 
                                                   (vlSelf->Top__DOT__Resa 
                                                    + vlSelf->Top__DOT__Resb))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->Top__DOT__Operation))
                                                    ? 
                                                   (vlSelf->Top__DOT__Resa 
                                                    | vlSelf->Top__DOT__Resb)
                                                    : 
                                                   (vlSelf->Top__DOT__Resa 
                                                    & vlSelf->Top__DOT__Resb)))));
        vlSelf->Top__DOT__IFID_instruction = vlSelf->Top__DOT__Instruction;
        vlSelf->Top__DOT__EXMEM_MemWrite = vlSelf->Top__DOT__IDEX_MemWrite;
        Top__DOT__EXMEM_MemtoReg = vlSelf->Top__DOT__IDEX_MemtoReg;
        Top__DOT__EXMEM_RegWrite = vlSelf->Top__DOT__IDEX_Regwrite;
        vlSelf->Top__DOT__MEMWB_RegWrite = Top__DOT__EXMEM_RegWrite;
        vlSelf->Top__DOT__EXMEM_MemRead = vlSelf->Top__DOT__IDEX_MemRead;
        vlSelf->Top__DOT__MEMWB_MemtoReg = Top__DOT__EXMEM_MemtoReg;
        vlSelf->Top__DOT__EXMEM_Branch = vlSelf->Top__DOT__IDEX_Branch;
        vlSelf->Top__DOT__IDEX_Regwrite = vlSelf->Top__DOT__RegWrite;
        vlSelf->Top__DOT__IDEX_MemRead = vlSelf->Top__DOT__MemRead;
        vlSelf->Top__DOT__IDEX_Branch = vlSelf->Top__DOT__Branch;
        vlSelf->Top__DOT__IDEX_MemWrite = vlSelf->Top__DOT__MemWrite;
        vlSelf->Top__DOT__IDEX_MemtoReg = vlSelf->Top__DOT__MemtoReg;
        vlSelf->Top__DOT__IDEX_ALUSrc = vlSelf->Top__DOT__ALUSrc;
    } else {
        Top__DOT__IDEX_PC_Out = 0ULL;
        vlSelf->Top__DOT__EXMEM_ReadData2 = 0ULL;
        Top__DOT__EXMEM_inst2 = 0U;
        vlSelf->Top__DOT__MEMWB_inst2 = 0U;
        vlSelf->Top__DOT__IFID_PC_Out = 0ULL;
        vlSelf->Top__DOT__IDEX_inst2 = 0U;
        vlSelf->Top__DOT__EXMEM_out = 0ULL;
        vlSelf->Top__DOT__MEMWB_Result = 0ULL;
        vlSelf->Top__DOT__MEMWB_read_data = 0ULL;
        vlSelf->Top__DOT__IDEX_inst1 = 0U;
        vlSelf->Top__DOT__IDEX_imm_data = 0ULL;
        vlSelf->Top__DOT__IDEX_ReadData2 = 0ULL;
        vlSelf->Top__DOT__IDEX_ReadData1 = 0ULL;
        vlSelf->Top__DOT__IDEX_ALUOp = 0U;
        vlSelf->Top__DOT__EXMEM_Result = 0ULL;
        vlSelf->Top__DOT__IFID_instruction = 0U;
        vlSelf->Top__DOT__EXMEM_MemWrite = 0U;
        Top__DOT__EXMEM_MemtoReg = 0U;
        Top__DOT__EXMEM_RegWrite = 0U;
        vlSelf->Top__DOT__MEMWB_RegWrite = 0U;
        vlSelf->Top__DOT__EXMEM_MemRead = 0U;
        vlSelf->Top__DOT__MEMWB_MemtoReg = 0U;
        vlSelf->Top__DOT__EXMEM_Branch = 0U;
        vlSelf->Top__DOT__IDEX_Regwrite = 0U;
        vlSelf->Top__DOT__IDEX_MemRead = 0U;
        vlSelf->Top__DOT__IDEX_Branch = 0U;
        vlSelf->Top__DOT__IDEX_MemWrite = 0U;
        vlSelf->Top__DOT__IDEX_MemtoReg = 0U;
        vlSelf->Top__DOT__IDEX_ALUSrc = 0U;
    }
    vlSelf->Top__DOT__out_from_mux3 = ((IData)(vlSelf->Top__DOT__MEMWB_MemtoReg)
                                        ? vlSelf->Top__DOT__MEMWB_read_data
                                        : vlSelf->Top__DOT__MEMWB_Result);
    __Vtableidx2 = (((IData)(vlSelf->Top__DOT__IDEX_inst1) 
                     << 2U) | (IData)(vlSelf->Top__DOT__IDEX_ALUOp));
    if (Vtop__ConstPool__TABLE_h4ffb09d3_0[__Vtableidx2]) {
        vlSelf->Top__DOT__Operation = Vtop__ConstPool__TABLE_h9ccefef0_0
            [__Vtableidx2];
    }
    vlSelf->Top__DOT__imm_data = ((0x40U & vlSelf->Top__DOT__IFID_instruction)
                                   ? ((0x20U & vlSelf->Top__DOT__IFID_instruction)
                                       ? ((0x10U & vlSelf->Top__DOT__IFID_instruction)
                                           ? 0ULL : 
                                          ((8U & vlSelf->Top__DOT__IFID_instruction)
                                            ? 0ULL : 
                                           ((4U & vlSelf->Top__DOT__IFID_instruction)
                                             ? 0ULL
                                             : ((2U 
                                                 & vlSelf->Top__DOT__IFID_instruction)
                                                 ? 
                                                ((1U 
                                                  & vlSelf->Top__DOT__IFID_instruction)
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (vlSelf->Top__DOT__IFID_instruction 
                                                                       >> 0x1fU)))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0x800U 
                                                                      & (vlSelf->Top__DOT__IFID_instruction 
                                                                         >> 0x14U)) 
                                                                     | ((0x400U 
                                                                         & (vlSelf->Top__DOT__IFID_instruction 
                                                                            << 3U)) 
                                                                        | ((0x3f0U 
                                                                            & (vlSelf->Top__DOT__IFID_instruction 
                                                                               >> 0x15U)) 
                                                                           | (0xfU 
                                                                              & (vlSelf->Top__DOT__IFID_instruction 
                                                                                >> 8U))))))))
                                                  : 0ULL)
                                                 : 0ULL))))
                                       : 0ULL) : ((0x20U 
                                                   & vlSelf->Top__DOT__IFID_instruction)
                                                   ? 
                                                  ((0x10U 
                                                    & vlSelf->Top__DOT__IFID_instruction)
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     & vlSelf->Top__DOT__IFID_instruction)
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & vlSelf->Top__DOT__IFID_instruction)
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & vlSelf->Top__DOT__IFID_instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->Top__DOT__IFID_instruction)
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (vlSelf->Top__DOT__IFID_instruction 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0xfe0U 
                                                                            & (vlSelf->Top__DOT__IFID_instruction 
                                                                               >> 0x14U)) 
                                                                           | (0x1fU 
                                                                              & (vlSelf->Top__DOT__IFID_instruction 
                                                                                >> 7U))))))
                                                        : 0ULL)
                                                       : 0ULL))))
                                                   : 
                                                  ((0x10U 
                                                    & vlSelf->Top__DOT__IFID_instruction)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->Top__DOT__IFID_instruction)
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & vlSelf->Top__DOT__IFID_instruction)
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & vlSelf->Top__DOT__IFID_instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->Top__DOT__IFID_instruction)
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (vlSelf->Top__DOT__IFID_instruction 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (vlSelf->Top__DOT__IFID_instruction 
                                                                           >> 0x14U))))
                                                        : 0ULL)
                                                       : 0ULL)))
                                                    : 
                                                   ((8U 
                                                     & vlSelf->Top__DOT__IFID_instruction)
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & vlSelf->Top__DOT__IFID_instruction)
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & vlSelf->Top__DOT__IFID_instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->Top__DOT__IFID_instruction)
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (vlSelf->Top__DOT__IFID_instruction 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (vlSelf->Top__DOT__IFID_instruction 
                                                                           >> 0x14U))))
                                                        : 0ULL)
                                                       : 0ULL))))));
    if (vlSelf->Top__DOT__EXMEM_Branch) {
        if ((5U == (7U & (vlSelf->Top__DOT__IFID_instruction 
                          >> 0xcU)))) {
            if (((IData)(vlSelf->Top__DOT__EXMEM_Branch) 
                 & (~ (IData)(vlSelf->Top__DOT__EXMEM_ZERO)))) {
                vlSelf->Top__DOT__PC_src = 1U;
            }
        } else if ((3U == (7U & (vlSelf->Top__DOT__IFID_instruction 
                                 >> 0xcU)))) {
            if (((IData)(vlSelf->Top__DOT__EXMEM_Branch) 
                 & (IData)(vlSelf->Top__DOT__EXMEM_ZERO))) {
                vlSelf->Top__DOT__PC_src = 1U;
            }
        } else if ((7U == (7U & (vlSelf->Top__DOT__IFID_instruction 
                                 >> 0xcU)))) {
            if ((vlSelf->Top__DOT__IDEX_ReadData1 >= 
                 ((IData)(vlSelf->Top__DOT__IDEX_ALUSrc)
                   ? vlSelf->Top__DOT__IDEX_imm_data
                   : vlSelf->Top__DOT__IDEX_ReadData2))) {
                vlSelf->Top__DOT__PC_src = 1U;
            }
        }
    } else {
        vlSelf->Top__DOT__PC_src = 0U;
    }
    __Vtableidx1 = (0x7fU & vlSelf->Top__DOT__IFID_instruction);
    vlSelf->Top__DOT__ALUSrc = Vtop__ConstPool__TABLE_hc6f08ae8_0
        [__Vtableidx1];
    vlSelf->Top__DOT__MemtoReg = Vtop__ConstPool__TABLE_hf161bc6c_0
        [__Vtableidx1];
    vlSelf->Top__DOT__RegWrite = Vtop__ConstPool__TABLE_h3dfcac50_0
        [__Vtableidx1];
    vlSelf->Top__DOT__MemRead = Vtop__ConstPool__TABLE_hda0cf9d9_0
        [__Vtableidx1];
    vlSelf->Top__DOT__MemWrite = Vtop__ConstPool__TABLE_hfb2c73db_0
        [__Vtableidx1];
    vlSelf->Top__DOT__Branch = Vtop__ConstPool__TABLE_hdb7b249a_0
        [__Vtableidx1];
    vlSelf->Top__DOT__ALUOp = Vtop__ConstPool__TABLE_hd060e9d2_0
        [__Vtableidx1];
    vlSelf->Top__DOT__PC_In_from_mux = ((IData)(vlSelf->Top__DOT__PC_src)
                                         ? vlSelf->Top__DOT__EXMEM_out
                                         : (4ULL + vlSelf->Top__DOT__PC_Out));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    if (vlSelf->Top__DOT__EXMEM_MemRead) {
        vlSelf->Top__DOT__out_from_DM = (((QData)((IData)(
                                                          ((vlSelf->Top__DOT__dm__DOT__data_mem
                                                            [
                                                            (0x3fU 
                                                             & ((IData)(7U) 
                                                                + (IData)(vlSelf->Top__DOT__EXMEM_Result)))] 
                                                            << 0x18U) 
                                                           | ((vlSelf->Top__DOT__dm__DOT__data_mem
                                                               [
                                                               (0x3fU 
                                                                & ((IData)(6U) 
                                                                   + (IData)(vlSelf->Top__DOT__EXMEM_Result)))] 
                                                               << 0x10U) 
                                                              | ((vlSelf->Top__DOT__dm__DOT__data_mem
                                                                  [
                                                                  (0x3fU 
                                                                   & ((IData)(5U) 
                                                                      + (IData)(vlSelf->Top__DOT__EXMEM_Result)))] 
                                                                  << 8U) 
                                                                 | vlSelf->Top__DOT__dm__DOT__data_mem
                                                                 [
                                                                 (0x3fU 
                                                                  & ((IData)(4U) 
                                                                     + (IData)(vlSelf->Top__DOT__EXMEM_Result)))]))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((vlSelf->Top__DOT__dm__DOT__data_mem
                                                             [
                                                             (0x3fU 
                                                              & ((IData)(3U) 
                                                                 + (IData)(vlSelf->Top__DOT__EXMEM_Result)))] 
                                                             << 0x18U) 
                                                            | ((vlSelf->Top__DOT__dm__DOT__data_mem
                                                                [
                                                                (0x3fU 
                                                                 & ((IData)(2U) 
                                                                    + (IData)(vlSelf->Top__DOT__EXMEM_Result)))] 
                                                                << 0x10U) 
                                                               | ((vlSelf->Top__DOT__dm__DOT__data_mem
                                                                   [
                                                                   (0x3fU 
                                                                    & ((IData)(1U) 
                                                                       + (IData)(vlSelf->Top__DOT__EXMEM_Result)))] 
                                                                   << 8U) 
                                                                  | vlSelf->Top__DOT__dm__DOT__data_mem
                                                                  [
                                                                  (0x3fU 
                                                                   & (IData)(vlSelf->Top__DOT__EXMEM_Result))]))))));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->Top__DOT__Resa = ((0U == (IData)(vlSelf->Top__DOT__FU_fwdA))
                               ? vlSelf->Top__DOT__IDEX_ReadData1
                               : ((1U == (IData)(vlSelf->Top__DOT__FU_fwdA))
                                   ? vlSelf->Top__DOT__out_from_mux3
                                   : ((2U == (IData)(vlSelf->Top__DOT__FU_fwdA))
                                       ? vlSelf->Top__DOT__EXMEM_Result
                                       : 0ULL)));
    vlSelf->Top__DOT__Resb = ((0U == (IData)(vlSelf->Top__DOT__FU_fwdB))
                               ? vlSelf->Top__DOT__IDEX_ReadData2
                               : ((1U == (IData)(vlSelf->Top__DOT__FU_fwdB))
                                   ? vlSelf->Top__DOT__out_from_mux3
                                   : ((2U == (IData)(vlSelf->Top__DOT__FU_fwdB))
                                       ? vlSelf->Top__DOT__EXMEM_Result
                                       : 0ULL)));
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x50ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x38ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                vlSelf->__VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
