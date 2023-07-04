// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
    vlSelf->__Vtrigprevexpr___TOP__Top__DOT__PC_Out__0 = 0ULL;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->Top__DOT__PC_Out = 0ULL;
    vlSelf->Top__DOT__im__DOT__inst_memory[0U] = 0x83U;
    vlSelf->Top__DOT__im__DOT__inst_memory[1U] = 0x34U;
    vlSelf->Top__DOT__im__DOT__inst_memory[2U] = 0x85U;
    vlSelf->Top__DOT__im__DOT__inst_memory[3U] = 2U;
    vlSelf->Top__DOT__im__DOT__inst_memory[7U] = 0U;
    vlSelf->Top__DOT__im__DOT__inst_memory[6U] = 0x54U;
    vlSelf->Top__DOT__im__DOT__inst_memory[5U] = 0x85U;
    vlSelf->Top__DOT__im__DOT__inst_memory[4U] = 0x13U;
    vlSelf->Top__DOT__rf__DOT__Registers[0U] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[1U] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[2U] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[3U] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[4U] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[5U] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[6U] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[7U] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[8U] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[9U] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[0xaU] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[0xbU] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[0xcU] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[0xdU] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[0xeU] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[0xfU] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[0x10U] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[0x11U] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[0x12U] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[0x13U] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[0x14U] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[0x15U] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[0x16U] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[0x17U] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[0x18U] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[0x19U] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[0x1aU] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[0x1bU] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[0x1cU] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[0x1dU] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[0x1eU] = 0ULL;
    vlSelf->Top__DOT__rf__DOT__Registers[0x1fU] = 0ULL;
    vlSelf->Top__DOT__dm__DOT__data_mem[0U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[1U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[2U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[3U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[4U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[5U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[6U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[7U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[8U] = 8U;
    vlSelf->Top__DOT__dm__DOT__data_mem[9U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0xaU] = 0x10U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0xbU] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0xcU] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0xdU] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0xeU] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0xfU] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x10U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x11U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x12U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x13U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x14U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x15U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x16U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x17U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x18U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x19U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x1aU] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x1bU] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x1cU] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x1dU] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x1eU] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x1fU] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x20U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x21U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x22U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x23U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x24U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x25U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x26U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x27U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x28U] = 8U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x29U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x2aU] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x2bU] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x2cU] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x2dU] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x2eU] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x2fU] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x30U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x31U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x32U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x33U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x34U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x35U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x36U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x37U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x38U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x39U] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x3aU] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x3bU] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x3cU] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x3dU] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x3eU] = 0U;
    vlSelf->Top__DOT__dm__DOT__data_mem[0x3fU] = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
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
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge clk or [changed] reset)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([changed] Top.PC_Out)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
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
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge clk or [changed] reset)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([changed] Top.PC_Out)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__PC_In_from_mux = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__PC_Out = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__Instruction = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__ALUOp = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__Branch = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__MemRead = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__MemtoReg = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__ALUSrc = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__Operation = VL_RAND_RESET_I(4);
    vlSelf->Top__DOT__imm_data = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__out_from_DM = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__out_from_mux3 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__IFID_instruction = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__IFID_PC_Out = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__IDEX_ReadData1 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__IDEX_ReadData2 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__IDEX_imm_data = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__IDEX_inst1 = VL_RAND_RESET_I(4);
    vlSelf->Top__DOT__IDEX_inst2 = VL_RAND_RESET_I(5);
    vlSelf->Top__DOT__IDEX_ALUOp = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__IDEX_Branch = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__IDEX_MemRead = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__IDEX_MemtoReg = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__IDEX_MemWrite = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__IDEX_ALUSrc = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__IDEX_Regwrite = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__EXMEM_out = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__EXMEM_ZERO = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__EXMEM_Result = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__EXMEM_ReadData2 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__EXMEM_Branch = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__EXMEM_MemRead = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__EXMEM_MemWrite = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__MEMWB_read_data = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__MEMWB_Result = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__MEMWB_MemtoReg = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__MEMWB_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__MEMWB_inst2 = VL_RAND_RESET_I(5);
    vlSelf->Top__DOT__PC_src = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__FU_fwdA = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__FU_fwdB = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__Resa = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__Resb = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__FU_EXMEM_ReadData2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__FU_MEMWB_read_data = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__FU_IDEX_inst1 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__FU_IDEX_inst2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__FU_EXMEM_Regwrite = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__FU_MEMWB_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__pc__DOT__reset_force = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 132; ++__Vi0) {
        vlSelf->Top__DOT__im__DOT__inst_memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Top__DOT__rf__DOT__Registers[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->Top__DOT__dm__DOT__data_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vdly__Top__DOT__pc__DOT__reset_force = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Top__DOT__PC_Out__0 = VL_RAND_RESET_Q(64);
    vlSelf->__VactDidInit = 0;
}
