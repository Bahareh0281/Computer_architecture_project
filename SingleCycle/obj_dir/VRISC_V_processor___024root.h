// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRISC_V_processor.h for the primary calling header

#ifndef VERILATED_VRISC_V_PROCESSOR___024ROOT_H_
#define VERILATED_VRISC_V_PROCESSOR___024ROOT_H_  // guard

#include "verilated.h"
class VRISC_V_processor___024unit;


class VRISC_V_processor__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRISC_V_processor___024root final : public VerilatedModule {
  public:
    // CELLS
    VRISC_V_processor___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ RISC_V_Processor__DOT__ALUOp;
    CData/*0:0*/ RISC_V_Processor__DOT__Branch;
    CData/*0:0*/ RISC_V_Processor__DOT__MemRead;
    CData/*0:0*/ RISC_V_Processor__DOT__MemtoReg;
    CData/*0:0*/ RISC_V_Processor__DOT__MemWrite;
    CData/*0:0*/ RISC_V_Processor__DOT__ALUSrc;
    CData/*0:0*/ RISC_V_Processor__DOT__RegWrite;
    CData/*3:0*/ RISC_V_Processor__DOT__Operation;
    CData/*0:0*/ RISC_V_Processor__DOT__zero_output;
    CData/*0:0*/ RISC_V_Processor__DOT__sel;
    CData/*0:0*/ RISC_V_Processor__DOT__pc__DOT__reset_force;
    CData/*0:0*/ __Vdly__RISC_V_Processor__DOT__pc__DOT__reset_force;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ RISC_V_Processor__DOT__Instruction;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ RISC_V_Processor__DOT__PC_In_from_mux;
    QData/*63:0*/ RISC_V_Processor__DOT__PC_Out;
    QData/*63:0*/ RISC_V_Processor__DOT__ReadData2;
    QData/*63:0*/ RISC_V_Processor__DOT__Result_from_alu;
    QData/*63:0*/ RISC_V_Processor__DOT__imm_data;
    QData/*63:0*/ RISC_V_Processor__DOT__out_from_DM;
    QData/*63:0*/ __Vtrigprevexpr___TOP__RISC_V_Processor__DOT__PC_Out__0;
    VlUnpacked<CData/*7:0*/, 132> RISC_V_Processor__DOT__im__DOT__inst_memory;
    VlUnpacked<QData/*63:0*/, 32> RISC_V_Processor__DOT__rf__DOT__Registers;
    VlUnpacked<CData/*7:0*/, 64> RISC_V_Processor__DOT__dm__DOT__data_mem;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VpreTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    VRISC_V_processor__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRISC_V_processor___024root(VRISC_V_processor__Syms* symsp, const char* v__name);
    ~VRISC_V_processor___024root();
    VL_UNCOPYABLE(VRISC_V_processor___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
