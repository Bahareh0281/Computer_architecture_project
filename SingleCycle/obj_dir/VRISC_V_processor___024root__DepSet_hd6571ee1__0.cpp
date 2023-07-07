// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISC_V_processor.h for the primary calling header

#include "verilated.h"

#include "VRISC_V_processor__Syms.h"
#include "VRISC_V_processor__Syms.h"
#include "VRISC_V_processor___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISC_V_processor___024root___dump_triggers__ico(VRISC_V_processor___024root* vlSelf);
#endif  // VL_DEBUG

void VRISC_V_processor___024root___eval_triggers__ico(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRISC_V_processor___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VRISC_V_processor___024root___ico_sequent__TOP__0(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___ico_sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ RISC_V_Processor__DOT__ReadData1;
    RISC_V_Processor__DOT__ReadData1 = 0;
    QData/*63:0*/ RISC_V_Processor__DOT__out_from_mux2;
    RISC_V_Processor__DOT__out_from_mux2 = 0;
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

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISC_V_processor___024root___dump_triggers__act(VRISC_V_processor___024root* vlSelf);
#endif  // VL_DEBUG

void VRISC_V_processor___024root___eval_triggers__act(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        ^ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->reset)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(4U, (vlSelf->RISC_V_Processor__DOT__PC_Out 
                                     != vlSelf->__Vtrigprevexpr___TOP__RISC_V_Processor__DOT__PC_Out__0));
    vlSelf->__VactTriggered.set(5U, ((~ (IData)(vlSelf->clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
    vlSelf->__Vtrigprevexpr___TOP__RISC_V_Processor__DOT__PC_Out__0 
        = vlSelf->RISC_V_Processor__DOT__PC_Out;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRISC_V_processor___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VRISC_V_processor___024root___act_sequent__TOP__2(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___act_sequent__TOP__2\n"); );
    // Body
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->RISC_V_Processor__DOT__pc__DOT__reset_force))) {
        vlSelf->RISC_V_Processor__DOT__PC_Out = 0ULL;
        vlSelf->__Vdly__RISC_V_Processor__DOT__pc__DOT__reset_force = 0U;
    } else {
        vlSelf->RISC_V_Processor__DOT__PC_Out = vlSelf->RISC_V_Processor__DOT__PC_In_from_mux;
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

VL_INLINE_OPT void VRISC_V_processor___024root___nba_sequent__TOP__1(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    if (vlSelf->RISC_V_Processor__DOT__RegWrite) {
        vlSelf->RISC_V_Processor__DOT__rf__DOT__Registers[(0x1fU 
                                                           & (vlSelf->RISC_V_Processor__DOT__Instruction 
                                                              >> 7U))] 
            = ((IData)(vlSelf->RISC_V_Processor__DOT__MemtoReg)
                ? vlSelf->RISC_V_Processor__DOT__out_from_DM
                : vlSelf->RISC_V_Processor__DOT__Result_from_alu);
    }
}

VL_INLINE_OPT void VRISC_V_processor___024root___nba_comb__TOP__0(VRISC_V_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_processor___024root___nba_comb__TOP__0\n"); );
    // Init
    QData/*63:0*/ RISC_V_Processor__DOT__ReadData1;
    RISC_V_Processor__DOT__ReadData1 = 0;
    QData/*63:0*/ RISC_V_Processor__DOT__out_from_mux2;
    RISC_V_Processor__DOT__out_from_mux2 = 0;
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
