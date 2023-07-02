// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtask2__02ddesign.h for the primary calling header

#include "verilated.h"

#include "Vtask2__02ddesign__Syms.h"
#include "Vtask2__02ddesign__Syms.h"
#include "Vtask2__02ddesign___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtask2__02ddesign___024root___dump_triggers__act(Vtask2__02ddesign___024root* vlSelf);
#endif  // VL_DEBUG

void Vtask2__02ddesign___024root___eval_triggers__act(Vtask2__02ddesign___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtask2__02ddesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtask2__02ddesign___024root___eval_triggers__act\n"); );
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
    vlSelf->__VactTriggered.set(4U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0))));
    vlSelf->__VactTriggered.set(5U, (vlSelf->RISC_V_Processor__DOT__PC_Out 
                                     != vlSelf->__Vtrigprevexpr___TOP__RISC_V_Processor__DOT__PC_Out__0));
    vlSelf->__VactTriggered.set(6U, ((~ (IData)(vlSelf->clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
    vlSelf->__Vtrigprevexpr___TOP__RISC_V_Processor__DOT__PC_Out__0 
        = vlSelf->RISC_V_Processor__DOT__PC_Out;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(4U, 1U);
        vlSelf->__VactTriggered.set(5U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtask2__02ddesign___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtask2__02ddesign___024root___act_sequent__TOP__2(Vtask2__02ddesign___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtask2__02ddesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtask2__02ddesign___024root___act_sequent__TOP__2\n"); );
    // Body
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->RISC_V_Processor__DOT__pc__DOT__reset_force))) {
        vlSelf->RISC_V_Processor__DOT__PC_Out = 0ULL;
        vlSelf->__Vdly__RISC_V_Processor__DOT__pc__DOT__reset_force = 0U;
    } else {
        vlSelf->RISC_V_Processor__DOT__PC_Out = vlSelf->RISC_V_Processor__DOT__PC_In_from_mux;
    }
    vlSelf->RISC_V_Processor__DOT__PC_In_from_mux = 
        ((IData)(vlSelf->RISC_V_Processor__DOT__PC_src)
          ? vlSelf->RISC_V_Processor__DOT__EXMEM_out
          : (4ULL + vlSelf->RISC_V_Processor__DOT__PC_Out));
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("PC_In = %20#, PC_Out = %20#, Instruction = %b, Opcode = %b, Funct3 = %b, rs1 = %2#, rs2 = %2#, rd = %2#, funct7 = %b, ALUOp = %b, imm_data = %20#, Operation = %b\n",
                  64,vlSelf->RISC_V_Processor__DOT__PC_In_from_mux,
                  64,vlSelf->RISC_V_Processor__DOT__PC_Out,
                  32,vlSelf->RISC_V_Processor__DOT__Instruction,
                  7,(0x7fU & vlSelf->RISC_V_Processor__DOT__IFID_instruction),
                  3,(7U & (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                           >> 0xcU)),5,(0x1fU & (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                                                 >> 0xfU)),
                  5,(0x1fU & (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                              >> 0x14U)),5,(0x1fU & 
                                            (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                                             >> 7U)),
                  7,(vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                     >> 0x19U),2,(IData)(vlSelf->RISC_V_Processor__DOT__IDEX_ALUOp),
                  64,vlSelf->RISC_V_Processor__DOT__imm_data,
                  4,(IData)(vlSelf->RISC_V_Processor__DOT__Operation));
    }
}

VL_INLINE_OPT void Vtask2__02ddesign___024root___nba_sequent__TOP__1(Vtask2__02ddesign___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtask2__02ddesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtask2__02ddesign___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
}

VL_INLINE_OPT void Vtask2__02ddesign___024root___nba_comb__TOP__1(Vtask2__02ddesign___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtask2__02ddesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtask2__02ddesign___024root___nba_comb__TOP__1\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("PC_In = %20#, PC_Out = %20#, Instruction = %b, Opcode = %b, Funct3 = %b, rs1 = %2#, rs2 = %2#, rd = %2#, funct7 = %b, ALUOp = %b, imm_data = %20#, Operation = %b\n",
                  64,vlSelf->RISC_V_Processor__DOT__PC_In_from_mux,
                  64,vlSelf->RISC_V_Processor__DOT__PC_Out,
                  32,vlSelf->RISC_V_Processor__DOT__Instruction,
                  7,(0x7fU & vlSelf->RISC_V_Processor__DOT__IFID_instruction),
                  3,(7U & (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                           >> 0xcU)),5,(0x1fU & (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                                                 >> 0xfU)),
                  5,(0x1fU & (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                              >> 0x14U)),5,(0x1fU & 
                                            (vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                                             >> 7U)),
                  7,(vlSelf->RISC_V_Processor__DOT__IFID_instruction 
                     >> 0x19U),2,(IData)(vlSelf->RISC_V_Processor__DOT__IDEX_ALUOp),
                  64,vlSelf->RISC_V_Processor__DOT__imm_data,
                  4,(IData)(vlSelf->RISC_V_Processor__DOT__Operation));
    }
}
