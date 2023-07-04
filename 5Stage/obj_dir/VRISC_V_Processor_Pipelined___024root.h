// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRISC_V_Processor_Pipelined.h for the primary calling header

#ifndef VERILATED_VRISC_V_PROCESSOR_PIPELINED___024ROOT_H_
#define VERILATED_VRISC_V_PROCESSOR_PIPELINED___024ROOT_H_  // guard

#include "verilated.h"
class VRISC_V_Processor_Pipelined___024unit;


class VRISC_V_Processor_Pipelined__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRISC_V_Processor_Pipelined___024root final : public VerilatedModule {
  public:
    // CELLS
    VRISC_V_Processor_Pipelined___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        CData/*1:0*/ RISC_V_Processor_Pipelined__DOT__ALUOp;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__Branch;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__MemRead;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__MemtoReg;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__MemWrite;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__ALUSrc;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__RegWrite;
        CData/*3:0*/ RISC_V_Processor_Pipelined__DOT__Operation;
        CData/*3:0*/ RISC_V_Processor_Pipelined__DOT__IDEX_inst1;
        CData/*4:0*/ RISC_V_Processor_Pipelined__DOT__IDEX_inst2;
        CData/*1:0*/ RISC_V_Processor_Pipelined__DOT__IDEX_ALUOp;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__IDEX_Branch;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__IDEX_MemRead;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__IDEX_MemtoReg;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__IDEX_MemWrite;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__IDEX_ALUSrc;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__IDEX_Regwrite;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__EXMEM_ZERO;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__EXMEM_Branch;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__EXMEM_MemRead;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__EXMEM_MemWrite;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__MEMWB_MemtoReg;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__MEMWB_RegWrite;
        CData/*4:0*/ RISC_V_Processor_Pipelined__DOT__MEMWB_inst2;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__PC_src;
        CData/*1:0*/ RISC_V_Processor_Pipelined__DOT__FU_fwdA;
        CData/*1:0*/ RISC_V_Processor_Pipelined__DOT__FU_fwdB;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__FU_EXMEM_ReadData2;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__FU_MEMWB_read_data;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__FU_IDEX_inst1;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__FU_IDEX_inst2;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__FU_EXMEM_Regwrite;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__FU_MEMWB_RegWrite;
        CData/*0:0*/ RISC_V_Processor_Pipelined__DOT__pc__DOT__reset_force;
        CData/*0:0*/ __Vdly__RISC_V_Processor_Pipelined__DOT__pc__DOT__reset_force;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ RISC_V_Processor_Pipelined__DOT__Instruction;
        IData/*31:0*/ RISC_V_Processor_Pipelined__DOT__IFID_instruction;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ RISC_V_Processor_Pipelined__DOT__PC_In_from_mux;
        QData/*63:0*/ RISC_V_Processor_Pipelined__DOT__PC_Out;
        QData/*63:0*/ RISC_V_Processor_Pipelined__DOT__imm_data;
        QData/*63:0*/ RISC_V_Processor_Pipelined__DOT__out_from_DM;
        QData/*63:0*/ RISC_V_Processor_Pipelined__DOT__out_from_mux3;
        QData/*63:0*/ RISC_V_Processor_Pipelined__DOT__IFID_PC_Out;
        QData/*63:0*/ RISC_V_Processor_Pipelined__DOT__IDEX_ReadData1;
        QData/*63:0*/ RISC_V_Processor_Pipelined__DOT__IDEX_ReadData2;
        QData/*63:0*/ RISC_V_Processor_Pipelined__DOT__IDEX_imm_data;
        QData/*63:0*/ RISC_V_Processor_Pipelined__DOT__EXMEM_out;
        QData/*63:0*/ RISC_V_Processor_Pipelined__DOT__EXMEM_Result;
        QData/*63:0*/ RISC_V_Processor_Pipelined__DOT__EXMEM_ReadData2;
        QData/*63:0*/ RISC_V_Processor_Pipelined__DOT__MEMWB_read_data;
        QData/*63:0*/ RISC_V_Processor_Pipelined__DOT__MEMWB_Result;
        QData/*63:0*/ RISC_V_Processor_Pipelined__DOT__Resa;
        QData/*63:0*/ RISC_V_Processor_Pipelined__DOT__Resb;
        QData/*63:0*/ __Vtrigprevexpr___TOP__RISC_V_Processor_Pipelined__DOT__PC_Out__0;
        VlUnpacked<CData/*7:0*/, 132> RISC_V_Processor_Pipelined__DOT__im__DOT__inst_memory;
        VlUnpacked<QData/*63:0*/, 32> RISC_V_Processor_Pipelined__DOT__rf__DOT__Registers;
    };
    struct {
        VlUnpacked<CData/*7:0*/, 64> RISC_V_Processor_Pipelined__DOT__dm__DOT__data_mem;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<7> __VactTriggered;
    VlTriggerVec<7> __VpreTriggered;
    VlTriggerVec<7> __VnbaTriggered;

    // INTERNAL VARIABLES
    VRISC_V_Processor_Pipelined__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRISC_V_Processor_Pipelined___024root(VRISC_V_Processor_Pipelined__Syms* symsp, const char* v__name);
    ~VRISC_V_Processor_Pipelined___024root();
    VL_UNCOPYABLE(VRISC_V_Processor_Pipelined___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
