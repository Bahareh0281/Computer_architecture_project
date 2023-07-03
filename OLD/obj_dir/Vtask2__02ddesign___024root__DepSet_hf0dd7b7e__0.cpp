// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtask2__02ddesign.h for the primary calling header

#include "verilated.h"

#include "Vtask2__02ddesign__Syms.h"
#include "Vtask2__02ddesign___024root.h"

VL_INLINE_OPT void Vtask2__02ddesign___024root___act_sequent__TOP__0(Vtask2__02ddesign___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtask2__02ddesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtask2__02ddesign___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__RISC_V_Processor__DOT__pc__DOT__reset_force 
        = vlSelf->RISC_V_Processor__DOT__pc__DOT__reset_force;
}

VL_INLINE_OPT void Vtask2__02ddesign___024root___act_sequent__TOP__1(Vtask2__02ddesign___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtask2__02ddesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtask2__02ddesign___024root___act_sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdly__RISC_V_Processor__DOT__pc__DOT__reset_force = 1U;
}

void Vtask2__02ddesign___024root___act_sequent__TOP__2(Vtask2__02ddesign___024root* vlSelf);

void Vtask2__02ddesign___024root___eval_act(Vtask2__02ddesign___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtask2__02ddesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtask2__02ddesign___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VpreTriggered.word(0U))) {
        Vtask2__02ddesign___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtask2__02ddesign___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtask2__02ddesign___024root___act_sequent__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vtask2__02ddesign___024root___nba_sequent__TOP__0(Vtask2__02ddesign___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtask2__02ddesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtask2__02ddesign___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->RISC_V_Processor__DOT__pc__DOT__reset_force 
        = vlSelf->__Vdly__RISC_V_Processor__DOT__pc__DOT__reset_force;
}

VL_INLINE_OPT void Vtask2__02ddesign___024root___nba_sequent__TOP__2(Vtask2__02ddesign___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtask2__02ddesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtask2__02ddesign___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->RISC_V_Processor__DOT__EXMEM_MemWrite) {
        vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem[(0x3fU 
                                                          & (IData)(vlSelf->RISC_V_Processor__DOT__EXMEM_Result))] 
            = (0xffU & (IData)(vlSelf->RISC_V_Processor__DOT__EXMEM_ReadData2));
        vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem[(0x3fU 
                                                          & ((IData)(1U) 
                                                             + (IData)(vlSelf->RISC_V_Processor__DOT__EXMEM_Result)))] 
            = (0xffU & (IData)((vlSelf->RISC_V_Processor__DOT__EXMEM_ReadData2 
                                >> 8U)));
        vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem[(0x3fU 
                                                          & ((IData)(2U) 
                                                             + (IData)(vlSelf->RISC_V_Processor__DOT__EXMEM_Result)))] 
            = (0xffU & (IData)((vlSelf->RISC_V_Processor__DOT__EXMEM_ReadData2 
                                >> 0x10U)));
        vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem[(0x3fU 
                                                          & ((IData)(3U) 
                                                             + (IData)(vlSelf->RISC_V_Processor__DOT__EXMEM_Result)))] 
            = (0xffU & (IData)((vlSelf->RISC_V_Processor__DOT__EXMEM_ReadData2 
                                >> 0x18U)));
        vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem[(0x3fU 
                                                          & ((IData)(4U) 
                                                             + (IData)(vlSelf->RISC_V_Processor__DOT__EXMEM_Result)))] 
            = (0xffU & (IData)((vlSelf->RISC_V_Processor__DOT__EXMEM_ReadData2 
                                >> 0x20U)));
        vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem[(0x3fU 
                                                          & ((IData)(5U) 
                                                             + (IData)(vlSelf->RISC_V_Processor__DOT__EXMEM_Result)))] 
            = (0xffU & (IData)((vlSelf->RISC_V_Processor__DOT__EXMEM_ReadData2 
                                >> 0x28U)));
        vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem[(0x3fU 
                                                          & ((IData)(6U) 
                                                             + (IData)(vlSelf->RISC_V_Processor__DOT__EXMEM_Result)))] 
            = (0xffU & (IData)((vlSelf->RISC_V_Processor__DOT__EXMEM_ReadData2 
                                >> 0x30U)));
        vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem[(0x3fU 
                                                          & ((IData)(7U) 
                                                             + (IData)(vlSelf->RISC_V_Processor__DOT__EXMEM_Result)))] 
            = (0xffU & (IData)((vlSelf->RISC_V_Processor__DOT__EXMEM_ReadData2 
                                >> 0x38U)));
    }
    if (vlSelf->RISC_V_Processor__DOT__MEMWB_RegWrite) {
        vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[vlSelf->RISC_V_Processor__DOT__MEMWB_inst2] 
            = vlSelf->RISC_V_Processor__DOT__out_from_mux3;
    }
}

VL_INLINE_OPT void Vtask2__02ddesign___024root___nba_sequent__TOP__3(Vtask2__02ddesign___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtask2__02ddesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtask2__02ddesign___024root___nba_sequent__TOP__3\n"); );
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
}

extern const VlUnpacked<CData/*0:0*/, 64> Vtask2__02ddesign__ConstPool__TABLE_hde5b6409_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vtask2__02ddesign__ConstPool__TABLE_hefa8d78d_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtask2__02ddesign__ConstPool__TABLE_h30009044_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtask2__02ddesign__ConstPool__TABLE_h00442689_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtask2__02ddesign__ConstPool__TABLE_hb0bcf715_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtask2__02ddesign__ConstPool__TABLE_h08ee09c9_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtask2__02ddesign__ConstPool__TABLE_h392ea0dd_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtask2__02ddesign__ConstPool__TABLE_h032d85c8_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtask2__02ddesign__ConstPool__TABLE_h506c84b6_0;

VL_INLINE_OPT void Vtask2__02ddesign___024root___nba_sequent__TOP__4(Vtask2__02ddesign___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtask2__02ddesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtask2__02ddesign___024root___nba_sequent__TOP__4\n"); );
    // Init
    QData/*63:0*/ RISC_V_Processor__DOT__IDEX_PC_Out;
    RISC_V_Processor__DOT__IDEX_PC_Out = 0;
    CData/*4:0*/ RISC_V_Processor__DOT__EXMEM_inst2;
    RISC_V_Processor__DOT__EXMEM_inst2 = 0;
    CData/*0:0*/ RISC_V_Processor__DOT__EXMEM_MemtoReg;
    RISC_V_Processor__DOT__EXMEM_MemtoReg = 0;
    CData/*0:0*/ RISC_V_Processor__DOT__EXMEM_RegWrite;
    RISC_V_Processor__DOT__EXMEM_RegWrite = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->RISC_V_Processor__DOT__EXMEM_ZERO = 0U;
    if (vlSelf->clk) {
        RISC_V_Processor__DOT__IDEX_PC_Out = vlSelf->RISC_V_Processor__DOT__IFID_PC_Out;
        vlSelf->RISC_V_Processor__DOT__EXMEM_ReadData2 
            = vlSelf->RISC_V_Processor__DOT__IDEX_ReadData2;
        RISC_V_Processor__DOT__EXMEM_inst2 = vlSelf->RISC_V_Processor__DOT__IDEX_inst2;
        vlSelf->RISC_V_Processor__DOT__MEMWB_inst2 
            = RISC_V_Processor__DOT__EXMEM_inst2;
        vlSelf->RISC_V_Processor__DOT__IFID_PC_Out 
            = vlSelf->RISC_V_Processor__DOT__PC_Out;
        vlSelf->RISC_V_Processor__DOT__IDEX_inst2 = 
            (0x1fU & (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                      >> 7U));
        vlSelf->RISC_V_Processor__DOT__EXMEM_out = 
            (RISC_V_Processor__DOT__IDEX_PC_Out + (vlSelf->RISC_V_Processor__DOT__IDEX_imm_data 
                                                   << 1U));
        vlSelf->RISC_V_Processor__DOT__MEMWB_Result 
            = vlSelf->RISC_V_Processor__DOT__EXMEM_Result;
        vlSelf->RISC_V_Processor__DOT__MEMWB_read_data 
            = vlSelf->RISC_V_Processor__DOT__out_from_DM;
        vlSelf->RISC_V_Processor__DOT__IDEX_inst1 = 
            ((8U & (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                    >> 0x1bU)) | (7U & (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                                        >> 0xcU)));
        vlSelf->RISC_V_Processor__DOT__IDEX_imm_data 
            = vlSelf->RISC_V_Processor__DOT__imm_data;
        if (vlSelf->reset) {
            vlSelf->RISC_V_Processor__DOT__IDEX_ReadData2 = 0ULL;
            vlSelf->RISC_V_Processor__DOT__IDEX_ReadData1 = 0ULL;
        } else {
            vlSelf->RISC_V_Processor__DOT__IDEX_ReadData2 
                = vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers
                [(0x1fU & (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                           >> 0x14U))];
            vlSelf->RISC_V_Processor__DOT__IDEX_ReadData1 
                = vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers
                [(0x1fU & (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                           >> 0xfU))];
        }
        vlSelf->RISC_V_Processor__DOT__IDEX_ALUOp = vlSelf->RISC_V_Processor__DOT__ALUOp;
        vlSelf->RISC_V_Processor__DOT__EXMEM_Result 
            = ((8U & (IData)(vlSelf->RISC_V_Processor__DOT__Operation))
                ? ((4U & (IData)(vlSelf->RISC_V_Processor__DOT__Operation))
                    ? ((2U & (IData)(vlSelf->RISC_V_Processor__DOT__Operation))
                        ? 0ULL : ((1U & (IData)(vlSelf->RISC_V_Processor__DOT__Operation))
                                   ? 0ULL : (~ (vlSelf->RISC_V_Processor__DOT__Resa 
                                                | vlSelf->RISC_V_Processor__DOT__Resb))))
                    : ((2U & (IData)(vlSelf->RISC_V_Processor__DOT__Operation))
                        ? 0ULL : ((1U & (IData)(vlSelf->RISC_V_Processor__DOT__Operation))
                                   ? 0ULL : VL_SHIFTL_QQQ(64,64,64, vlSelf->RISC_V_Processor__DOT__Resa, vlSelf->RISC_V_Processor__DOT__Resb))))
                : ((4U & (IData)(vlSelf->RISC_V_Processor__DOT__Operation))
                    ? ((2U & (IData)(vlSelf->RISC_V_Processor__DOT__Operation))
                        ? ((1U & (IData)(vlSelf->RISC_V_Processor__DOT__Operation))
                            ? 0ULL : (vlSelf->RISC_V_Processor__DOT__Resa 
                                      - vlSelf->RISC_V_Processor__DOT__Resb))
                        : 0ULL) : ((2U & (IData)(vlSelf->RISC_V_Processor__DOT__Operation))
                                    ? ((1U & (IData)(vlSelf->RISC_V_Processor__DOT__Operation))
                                        ? 0ULL : (vlSelf->RISC_V_Processor__DOT__Resa 
                                                  + vlSelf->RISC_V_Processor__DOT__Resb))
                                    : ((1U & (IData)(vlSelf->RISC_V_Processor__DOT__Operation))
                                        ? (vlSelf->RISC_V_Processor__DOT__Resa 
                                           | vlSelf->RISC_V_Processor__DOT__Resb)
                                        : (vlSelf->RISC_V_Processor__DOT__Resa 
                                           & vlSelf->RISC_V_Processor__DOT__Resb)))));
        vlSelf->RISC_V_Processor__DOT__IFID_instruction 
            = vlSelf->RISC_V_Processor__DOT__Instruction;
        vlSelf->RISC_V_Processor__DOT__EXMEM_MemWrite 
            = vlSelf->RISC_V_Processor__DOT__IDEX_MemWrite;
        RISC_V_Processor__DOT__EXMEM_MemtoReg = vlSelf->RISC_V_Processor__DOT__IDEX_MemtoReg;
        RISC_V_Processor__DOT__EXMEM_RegWrite = vlSelf->RISC_V_Processor__DOT__IDEX_Regwrite;
        vlSelf->RISC_V_Processor__DOT__MEMWB_RegWrite 
            = RISC_V_Processor__DOT__EXMEM_RegWrite;
        vlSelf->RISC_V_Processor__DOT__EXMEM_MemRead 
            = vlSelf->RISC_V_Processor__DOT__IDEX_MemRead;
        vlSelf->RISC_V_Processor__DOT__MEMWB_MemtoReg 
            = RISC_V_Processor__DOT__EXMEM_MemtoReg;
        vlSelf->RISC_V_Processor__DOT__EXMEM_Branch 
            = vlSelf->RISC_V_Processor__DOT__IDEX_Branch;
        vlSelf->RISC_V_Processor__DOT__IDEX_Regwrite 
            = vlSelf->RISC_V_Processor__DOT__RegWrite;
        vlSelf->RISC_V_Processor__DOT__IDEX_MemRead 
            = vlSelf->RISC_V_Processor__DOT__MemRead;
        vlSelf->RISC_V_Processor__DOT__IDEX_Branch 
            = vlSelf->RISC_V_Processor__DOT__Branch;
        vlSelf->RISC_V_Processor__DOT__IDEX_MemWrite 
            = vlSelf->RISC_V_Processor__DOT__MemWrite;
        vlSelf->RISC_V_Processor__DOT__IDEX_MemtoReg 
            = vlSelf->RISC_V_Processor__DOT__MemtoReg;
        vlSelf->RISC_V_Processor__DOT__IDEX_ALUSrc 
            = vlSelf->RISC_V_Processor__DOT__ALUSrc;
    } else {
        RISC_V_Processor__DOT__IDEX_PC_Out = 0ULL;
        vlSelf->RISC_V_Processor__DOT__EXMEM_ReadData2 = 0ULL;
        RISC_V_Processor__DOT__EXMEM_inst2 = 0U;
        vlSelf->RISC_V_Processor__DOT__MEMWB_inst2 = 0U;
        vlSelf->RISC_V_Processor__DOT__IFID_PC_Out = 0ULL;
        vlSelf->RISC_V_Processor__DOT__IDEX_inst2 = 0U;
        vlSelf->RISC_V_Processor__DOT__EXMEM_out = 0ULL;
        vlSelf->RISC_V_Processor__DOT__MEMWB_Result = 0ULL;
        vlSelf->RISC_V_Processor__DOT__MEMWB_read_data = 0ULL;
        vlSelf->RISC_V_Processor__DOT__IDEX_inst1 = 0U;
        vlSelf->RISC_V_Processor__DOT__IDEX_imm_data = 0ULL;
        vlSelf->RISC_V_Processor__DOT__IDEX_ReadData2 = 0ULL;
        vlSelf->RISC_V_Processor__DOT__IDEX_ReadData1 = 0ULL;
        vlSelf->RISC_V_Processor__DOT__IDEX_ALUOp = 0U;
        vlSelf->RISC_V_Processor__DOT__EXMEM_Result = 0ULL;
        vlSelf->RISC_V_Processor__DOT__IFID_instruction = 0U;
        vlSelf->RISC_V_Processor__DOT__EXMEM_MemWrite = 0U;
        RISC_V_Processor__DOT__EXMEM_MemtoReg = 0U;
        RISC_V_Processor__DOT__EXMEM_RegWrite = 0U;
        vlSelf->RISC_V_Processor__DOT__MEMWB_RegWrite = 0U;
        vlSelf->RISC_V_Processor__DOT__EXMEM_MemRead = 0U;
        vlSelf->RISC_V_Processor__DOT__MEMWB_MemtoReg = 0U;
        vlSelf->RISC_V_Processor__DOT__EXMEM_Branch = 0U;
        vlSelf->RISC_V_Processor__DOT__IDEX_Regwrite = 0U;
        vlSelf->RISC_V_Processor__DOT__IDEX_MemRead = 0U;
        vlSelf->RISC_V_Processor__DOT__IDEX_Branch = 0U;
        vlSelf->RISC_V_Processor__DOT__IDEX_MemWrite = 0U;
        vlSelf->RISC_V_Processor__DOT__IDEX_MemtoReg = 0U;
        vlSelf->RISC_V_Processor__DOT__IDEX_ALUSrc = 0U;
    }
    vlSelf->RISC_V_Processor__DOT__out_from_mux3 = 
        ((IData)(vlSelf->RISC_V_Processor__DOT__MEMWB_MemtoReg)
          ? vlSelf->RISC_V_Processor__DOT__MEMWB_read_data
          : vlSelf->RISC_V_Processor__DOT__MEMWB_Result);
    __Vtableidx2 = (((IData)(vlSelf->RISC_V_Processor__DOT__IDEX_inst1) 
                     << 2U) | (IData)(vlSelf->RISC_V_Processor__DOT__IDEX_ALUOp));
    if (Vtask2__02ddesign__ConstPool__TABLE_hde5b6409_0
        [__Vtableidx2]) {
        vlSelf->RISC_V_Processor__DOT__Operation = 
            Vtask2__02ddesign__ConstPool__TABLE_hefa8d78d_0
            [__Vtableidx2];
    }
    vlSelf->RISC_V_Processor__DOT__imm_data = ((0x40U 
                                                & vlSelf->RISC_V_Processor__DOT__IFID_instruction)
                                                ? (
                                                   (0x20U 
                                                    & vlSelf->RISC_V_Processor__DOT__IFID_instruction)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->RISC_V_Processor__DOT__IFID_instruction)
                                                     ? 0ULL
                                                     : 
                                                    ((8U 
                                                      & vlSelf->RISC_V_Processor__DOT__IFID_instruction)
                                                      ? 0ULL
                                                      : 
                                                     ((4U 
                                                       & vlSelf->RISC_V_Processor__DOT__IFID_instruction)
                                                       ? 0ULL
                                                       : 
                                                      ((2U 
                                                        & vlSelf->RISC_V_Processor__DOT__IFID_instruction)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->RISC_V_Processor__DOT__IFID_instruction)
                                                         ? 
                                                        (((- (QData)((IData)(
                                                                             (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                                                                              >> 0x1fU)))) 
                                                          << 0xcU) 
                                                         | (QData)((IData)(
                                                                           ((0x800U 
                                                                             & (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                                                                                >> 0x14U)) 
                                                                            | ((0x400U 
                                                                                & (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                                                                                << 3U)) 
                                                                               | ((0x3f0U 
                                                                                & (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                                                                                >> 0x15U)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                                                                                >> 8U))))))))
                                                         : 0ULL)
                                                        : 0ULL))))
                                                    : 0ULL)
                                                : (
                                                   (0x20U 
                                                    & vlSelf->RISC_V_Processor__DOT__IFID_instruction)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->RISC_V_Processor__DOT__IFID_instruction)
                                                     ? 0ULL
                                                     : 
                                                    ((8U 
                                                      & vlSelf->RISC_V_Processor__DOT__IFID_instruction)
                                                      ? 0ULL
                                                      : 
                                                     ((4U 
                                                       & vlSelf->RISC_V_Processor__DOT__IFID_instruction)
                                                       ? 0ULL
                                                       : 
                                                      ((2U 
                                                        & vlSelf->RISC_V_Processor__DOT__IFID_instruction)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->RISC_V_Processor__DOT__IFID_instruction)
                                                         ? 
                                                        (((- (QData)((IData)(
                                                                             (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                                                                              >> 0x1fU)))) 
                                                          << 0xcU) 
                                                         | (QData)((IData)(
                                                                           ((0xfe0U 
                                                                             & (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                                                                                >> 0x14U)) 
                                                                            | (0x1fU 
                                                                               & (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                                                                                >> 7U))))))
                                                         : 0ULL)
                                                        : 0ULL))))
                                                    : 
                                                   ((0x10U 
                                                     & vlSelf->RISC_V_Processor__DOT__IFID_instruction)
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->RISC_V_Processor__DOT__IFID_instruction)
                                                      ? 0ULL
                                                      : 
                                                     ((4U 
                                                       & vlSelf->RISC_V_Processor__DOT__IFID_instruction)
                                                       ? 0ULL
                                                       : 
                                                      ((2U 
                                                        & vlSelf->RISC_V_Processor__DOT__IFID_instruction)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->RISC_V_Processor__DOT__IFID_instruction)
                                                         ? 
                                                        (((- (QData)((IData)(
                                                                             (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                                                                              >> 0x1fU)))) 
                                                          << 0xcU) 
                                                         | (QData)((IData)(
                                                                           (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                                                                            >> 0x14U))))
                                                         : 0ULL)
                                                        : 0ULL)))
                                                     : 
                                                    ((8U 
                                                      & vlSelf->RISC_V_Processor__DOT__IFID_instruction)
                                                      ? 0ULL
                                                      : 
                                                     ((4U 
                                                       & vlSelf->RISC_V_Processor__DOT__IFID_instruction)
                                                       ? 0ULL
                                                       : 
                                                      ((2U 
                                                        & vlSelf->RISC_V_Processor__DOT__IFID_instruction)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->RISC_V_Processor__DOT__IFID_instruction)
                                                         ? 
                                                        (((- (QData)((IData)(
                                                                             (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                                                                              >> 0x1fU)))) 
                                                          << 0xcU) 
                                                         | (QData)((IData)(
                                                                           (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                                                                            >> 0x14U))))
                                                         : 0ULL)
                                                        : 0ULL))))));
    if (vlSelf->RISC_V_Processor__DOT__EXMEM_Branch) {
        if ((5U == (7U & (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                          >> 0xcU)))) {
            if (((IData)(vlSelf->RISC_V_Processor__DOT__EXMEM_Branch) 
                 & (~ (IData)(vlSelf->RISC_V_Processor__DOT__EXMEM_ZERO)))) {
                vlSelf->RISC_V_Processor__DOT__PC_src = 1U;
            }
        } else if ((3U == (7U & (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                                 >> 0xcU)))) {
            if (((IData)(vlSelf->RISC_V_Processor__DOT__EXMEM_Branch) 
                 & (IData)(vlSelf->RISC_V_Processor__DOT__EXMEM_ZERO))) {
                vlSelf->RISC_V_Processor__DOT__PC_src = 1U;
            }
        } else if ((7U == (7U & (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                                 >> 0xcU)))) {
            if ((vlSelf->RISC_V_Processor__DOT__IDEX_ReadData1 
                 >= ((IData)(vlSelf->RISC_V_Processor__DOT__IDEX_ALUSrc)
                      ? vlSelf->RISC_V_Processor__DOT__IDEX_imm_data
                      : vlSelf->RISC_V_Processor__DOT__IDEX_ReadData2))) {
                vlSelf->RISC_V_Processor__DOT__PC_src = 1U;
            }
        }
    } else {
        vlSelf->RISC_V_Processor__DOT__PC_src = 0U;
    }
    __Vtableidx1 = (0x7fU & vlSelf->RISC_V_Processor__DOT__IFID_instruction);
    vlSelf->RISC_V_Processor__DOT__ALUSrc = Vtask2__02ddesign__ConstPool__TABLE_h30009044_0
        [__Vtableidx1];
    vlSelf->RISC_V_Processor__DOT__MemtoReg = Vtask2__02ddesign__ConstPool__TABLE_h00442689_0
        [__Vtableidx1];
    vlSelf->RISC_V_Processor__DOT__RegWrite = Vtask2__02ddesign__ConstPool__TABLE_hb0bcf715_0
        [__Vtableidx1];
    vlSelf->RISC_V_Processor__DOT__MemRead = Vtask2__02ddesign__ConstPool__TABLE_h08ee09c9_0
        [__Vtableidx1];
    vlSelf->RISC_V_Processor__DOT__MemWrite = Vtask2__02ddesign__ConstPool__TABLE_h392ea0dd_0
        [__Vtableidx1];
    vlSelf->RISC_V_Processor__DOT__Branch = Vtask2__02ddesign__ConstPool__TABLE_h032d85c8_0
        [__Vtableidx1];
    vlSelf->RISC_V_Processor__DOT__ALUOp = Vtask2__02ddesign__ConstPool__TABLE_h506c84b6_0
        [__Vtableidx1];
    vlSelf->RISC_V_Processor__DOT__PC_In_from_mux = 
        ((IData)(vlSelf->RISC_V_Processor__DOT__PC_src)
          ? vlSelf->RISC_V_Processor__DOT__EXMEM_out
          : (4ULL + vlSelf->RISC_V_Processor__DOT__PC_Out));
}

VL_INLINE_OPT void Vtask2__02ddesign___024root___nba_comb__TOP__0(Vtask2__02ddesign___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtask2__02ddesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtask2__02ddesign___024root___nba_comb__TOP__0\n"); );
    // Body
    if (vlSelf->RISC_V_Processor__DOT__EXMEM_MemRead) {
        vlSelf->RISC_V_Processor__DOT__out_from_DM 
            = (((QData)((IData)(((vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem
                                  [(0x3fU & ((IData)(7U) 
                                             + (IData)(vlSelf->RISC_V_Processor__DOT__EXMEM_Result)))] 
                                  << 0x18U) | ((vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem
                                                [(0x3fU 
                                                  & ((IData)(6U) 
                                                     + (IData)(vlSelf->RISC_V_Processor__DOT__EXMEM_Result)))] 
                                                << 0x10U) 
                                               | ((vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem
                                                   [
                                                   (0x3fU 
                                                    & ((IData)(5U) 
                                                       + (IData)(vlSelf->RISC_V_Processor__DOT__EXMEM_Result)))] 
                                                   << 8U) 
                                                  | vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem
                                                  [
                                                  (0x3fU 
                                                   & ((IData)(4U) 
                                                      + (IData)(vlSelf->RISC_V_Processor__DOT__EXMEM_Result)))]))))) 
                << 0x20U) | (QData)((IData)(((vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem
                                              [(0x3fU 
                                                & ((IData)(3U) 
                                                   + (IData)(vlSelf->RISC_V_Processor__DOT__EXMEM_Result)))] 
                                              << 0x18U) 
                                             | ((vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem
                                                 [(0x3fU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelf->RISC_V_Processor__DOT__EXMEM_Result)))] 
                                                 << 0x10U) 
                                                | ((vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem
                                                    [
                                                    (0x3fU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelf->RISC_V_Processor__DOT__EXMEM_Result)))] 
                                                    << 8U) 
                                                   | vlSelf->RISC_V_Processor__DOT__dm__DOT__data_mem
                                                   [
                                                   (0x3fU 
                                                    & (IData)(vlSelf->RISC_V_Processor__DOT__EXMEM_Result))]))))));
    }
}

VL_INLINE_OPT void Vtask2__02ddesign___024root___nba_sequent__TOP__5(Vtask2__02ddesign___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtask2__02ddesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtask2__02ddesign___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->RISC_V_Processor__DOT__Resa = ((0U == (IData)(vlSelf->RISC_V_Processor__DOT__FU_fwdA))
                                            ? vlSelf->RISC_V_Processor__DOT__IDEX_ReadData1
                                            : ((1U 
                                                == (IData)(vlSelf->RISC_V_Processor__DOT__FU_fwdA))
                                                ? vlSelf->RISC_V_Processor__DOT__out_from_mux3
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->RISC_V_Processor__DOT__FU_fwdA))
                                                    ? vlSelf->RISC_V_Processor__DOT__EXMEM_Result
                                                    : 0ULL)));
    vlSelf->RISC_V_Processor__DOT__Resb = ((0U == (IData)(vlSelf->RISC_V_Processor__DOT__FU_fwdB))
                                            ? vlSelf->RISC_V_Processor__DOT__IDEX_ReadData2
                                            : ((1U 
                                                == (IData)(vlSelf->RISC_V_Processor__DOT__FU_fwdB))
                                                ? vlSelf->RISC_V_Processor__DOT__out_from_mux3
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->RISC_V_Processor__DOT__FU_fwdB))
                                                    ? vlSelf->RISC_V_Processor__DOT__EXMEM_Result
                                                    : 0ULL)));
}

void Vtask2__02ddesign___024root___nba_sequent__TOP__1(Vtask2__02ddesign___024root* vlSelf);
void Vtask2__02ddesign___024root___nba_comb__TOP__1(Vtask2__02ddesign___024root* vlSelf);

void Vtask2__02ddesign___024root___eval_nba(Vtask2__02ddesign___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtask2__02ddesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtask2__02ddesign___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtask2__02ddesign___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtask2__02ddesign___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtask2__02ddesign___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtask2__02ddesign___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtask2__02ddesign___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x50ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtask2__02ddesign___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x38ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtask2__02ddesign___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtask2__02ddesign___024root___nba_sequent__TOP__5(vlSelf);
    }
}

void Vtask2__02ddesign___024root___eval_triggers__act(Vtask2__02ddesign___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtask2__02ddesign___024root___dump_triggers__act(Vtask2__02ddesign___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtask2__02ddesign___024root___dump_triggers__nba(Vtask2__02ddesign___024root* vlSelf);
#endif  // VL_DEBUG

void Vtask2__02ddesign___024root___eval(Vtask2__02ddesign___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtask2__02ddesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtask2__02ddesign___024root___eval\n"); );
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
            Vtask2__02ddesign___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtask2__02ddesign___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("task2-design.v", 896, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                vlSelf->__VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtask2__02ddesign___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtask2__02ddesign___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("task2-design.v", 896, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtask2__02ddesign___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtask2__02ddesign___024root___eval_debug_assertions(Vtask2__02ddesign___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtask2__02ddesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtask2__02ddesign___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
