// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISC_V_processor.h for the primary calling header

#include "verilated.h"

#include "VRISC_V_processor__Syms.h"
#include "VRISC_V_processor__Syms.h"
#include "VRISC_V_processor___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISC_V_processor___024root___dump_triggers__stl(VRISC_V_processor___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VRISC_V_processor___024root___eval_triggers__stl(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRISC_V_processor___024root___dump_triggers__stl(vlSelf);
    }
#endif
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

VL_ATTR_COLD void VRISC_V_processor___024root___stl_sequent__TOP__0(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___stl_sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ RISC_V_Processor__DOT__ReadData1;
    RISC_V_Processor__DOT__ReadData1 = 0;
    QData/*63:0*/ RISC_V_Processor__DOT__out_from_mux2;
    RISC_V_Processor__DOT__out_from_mux2 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    if (vlSelf->reset) {
        RISC_V_Processor__DOT__ReadData1 = 0ULL;
        vlSelf->RISC_V_Processor__DOT__ReadData2 = 0ULL;
    } else {
        RISC_V_Processor__DOT__ReadData1 = vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers
            [(0x1fU & (vlSelf->RISC_V_Processor__DOT__Instruction 
                       >> 0xfU))];
        vlSelf->RISC_V_Processor__DOT__ReadData2 = 
            vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers
            [(0x1fU & (vlSelf->RISC_V_Processor__DOT__Instruction 
                       >> 0x14U))];
    }
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
    RISC_V_Processor__DOT__out_from_mux2 = ((IData)(vlSelf->RISC_V_Processor__DOT__ALUSrc)
                                             ? vlSelf->RISC_V_Processor__DOT__imm_data
                                             : vlSelf->RISC_V_Processor__DOT__ReadData2);
    vlSelf->RISC_V_Processor__DOT__Result_from_alu 
        = ((8U & (IData)(vlSelf->RISC_V_Processor__DOT__Operation))
            ? ((4U & (IData)(vlSelf->RISC_V_Processor__DOT__Operation))
                ? ((2U & (IData)(vlSelf->RISC_V_Processor__DOT__Operation))
                    ? 0ULL : ((1U & (IData)(vlSelf->RISC_V_Processor__DOT__Operation))
                               ? 0ULL : (~ (RISC_V_Processor__DOT__ReadData1 
                                            | RISC_V_Processor__DOT__out_from_mux2))))
                : ((2U & (IData)(vlSelf->RISC_V_Processor__DOT__Operation))
                    ? 0ULL : ((1U & (IData)(vlSelf->RISC_V_Processor__DOT__Operation))
                               ? 0ULL : VL_SHIFTL_QQQ(64,64,64, RISC_V_Processor__DOT__ReadData1, RISC_V_Processor__DOT__out_from_mux2))))
            : ((4U & (IData)(vlSelf->RISC_V_Processor__DOT__Operation))
                ? ((2U & (IData)(vlSelf->RISC_V_Processor__DOT__Operation))
                    ? ((1U & (IData)(vlSelf->RISC_V_Processor__DOT__Operation))
                        ? 0ULL : (RISC_V_Processor__DOT__ReadData1 
                                  - RISC_V_Processor__DOT__out_from_mux2))
                    : 0ULL) : ((2U & (IData)(vlSelf->RISC_V_Processor__DOT__Operation))
                                ? ((1U & (IData)(vlSelf->RISC_V_Processor__DOT__Operation))
                                    ? 0ULL : (RISC_V_Processor__DOT__ReadData1 
                                              + RISC_V_Processor__DOT__out_from_mux2))
                                : ((1U & (IData)(vlSelf->RISC_V_Processor__DOT__Operation))
                                    ? (RISC_V_Processor__DOT__ReadData1 
                                       | RISC_V_Processor__DOT__out_from_mux2)
                                    : (RISC_V_Processor__DOT__ReadData1 
                                       & RISC_V_Processor__DOT__out_from_mux2)))));
    vlSelf->RISC_V_Processor__DOT__zero_output = (0ULL 
                                                  == vlSelf->RISC_V_Processor__DOT__Result_from_alu);
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
    if (vlSelf->RISC_V_Processor__DOT__Branch) {
        if ((1U == (7U & (vlSelf->RISC_V_Processor__DOT__Instruction 
                          >> 0xcU)))) {
            vlSelf->RISC_V_Processor__DOT__sel = ((IData)(vlSelf->RISC_V_Processor__DOT__Branch) 
                                                  & (~ (IData)(vlSelf->RISC_V_Processor__DOT__zero_output)));
        } else if ((0U == (7U & (vlSelf->RISC_V_Processor__DOT__Instruction 
                                 >> 0xcU)))) {
            vlSelf->RISC_V_Processor__DOT__sel = ((IData)(vlSelf->RISC_V_Processor__DOT__Branch) 
                                                  & (IData)(vlSelf->RISC_V_Processor__DOT__zero_output));
        } else if ((5U == (7U & (vlSelf->RISC_V_Processor__DOT__Instruction 
                                 >> 0xcU)))) {
            vlSelf->RISC_V_Processor__DOT__sel = (RISC_V_Processor__DOT__ReadData1 
                                                  >= RISC_V_Processor__DOT__out_from_mux2);
        }
    } else {
        vlSelf->RISC_V_Processor__DOT__sel = 0U;
    }
    vlSelf->RISC_V_Processor__DOT__PC_In_from_mux = 
        ((IData)(vlSelf->RISC_V_Processor__DOT__sel)
          ? (vlSelf->RISC_V_Processor__DOT__PC_Out 
             + (vlSelf->RISC_V_Processor__DOT__imm_data 
                << 1U)) : (4ULL + vlSelf->RISC_V_Processor__DOT__PC_Out));
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("PC_In = %20#, PC_Out = %20#, Instruction = %b, Opcode = %b, Funct3 = %b, Zero = %b, Branch = %1#, sel = %1#, rs1 = %2#, rs2 = %2#, rd = %2#, funct7 = %b, ALUOp = %b, imm_data = %20#, Operation = %b\n",
                  64,vlSelf->RISC_V_Processor__DOT__PC_In_from_mux,
                  64,vlSelf->RISC_V_Processor__DOT__PC_Out,
                  32,vlSelf->RISC_V_Processor__DOT__Instruction,
                  7,(0x7fU & vlSelf->RISC_V_Processor__DOT__Instruction),
                  3,(7U & (vlSelf->RISC_V_Processor__DOT__Instruction 
                           >> 0xcU)),1,(IData)(vlSelf->RISC_V_Processor__DOT__zero_output),
                  1,vlSelf->RISC_V_Processor__DOT__Branch,
                  1,(IData)(vlSelf->RISC_V_Processor__DOT__sel),
                  5,(0x1fU & (vlSelf->RISC_V_Processor__DOT__Instruction 
                              >> 0xfU)),5,(0x1fU & 
                                           (vlSelf->RISC_V_Processor__DOT__Instruction 
                                            >> 0x14U)),
                  5,(0x1fU & (vlSelf->RISC_V_Processor__DOT__Instruction 
                              >> 7U)),7,(vlSelf->RISC_V_Processor__DOT__Instruction 
                                         >> 0x19U),
                  2,(IData)(vlSelf->RISC_V_Processor__DOT__ALUOp),
                  64,vlSelf->RISC_V_Processor__DOT__imm_data,
                  4,(IData)(vlSelf->RISC_V_Processor__DOT__Operation));
    }
}
