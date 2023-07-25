// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISC_V_Processor_Pipelined.h for the primary calling header

#include "verilated.h"

#include "VRISC_V_Processor_Pipelined__Syms.h"
#include "VRISC_V_Processor_Pipelined__Syms.h"
#include "VRISC_V_Processor_Pipelined___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISC_V_Processor_Pipelined___024root___dump_triggers__stl(VRISC_V_Processor_Pipelined___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VRISC_V_Processor_Pipelined___024root___eval_triggers__stl(VRISC_V_Processor_Pipelined___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_Processor_Pipelined__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_Processor_Pipelined___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRISC_V_Processor_Pipelined___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*0:0*/, 64> VRISC_V_Processor_Pipelined__ConstPool__TABLE_h4ffb09d3_0;
extern const VlUnpacked<CData/*3:0*/, 64> VRISC_V_Processor_Pipelined__ConstPool__TABLE_h9ccefef0_0;
extern const VlUnpacked<CData/*0:0*/, 128> VRISC_V_Processor_Pipelined__ConstPool__TABLE_hc6f08ae8_0;
extern const VlUnpacked<CData/*0:0*/, 128> VRISC_V_Processor_Pipelined__ConstPool__TABLE_hf161bc6c_0;
extern const VlUnpacked<CData/*0:0*/, 128> VRISC_V_Processor_Pipelined__ConstPool__TABLE_h3dfcac50_0;
extern const VlUnpacked<CData/*0:0*/, 128> VRISC_V_Processor_Pipelined__ConstPool__TABLE_hda0cf9d9_0;
extern const VlUnpacked<CData/*0:0*/, 128> VRISC_V_Processor_Pipelined__ConstPool__TABLE_hfb2c73db_0;
extern const VlUnpacked<CData/*0:0*/, 128> VRISC_V_Processor_Pipelined__ConstPool__TABLE_hdb7b249a_0;
extern const VlUnpacked<CData/*1:0*/, 128> VRISC_V_Processor_Pipelined__ConstPool__TABLE_hd060e9d2_0;
extern const VlUnpacked<CData/*1:0*/, 64> VRISC_V_Processor_Pipelined__ConstPool__TABLE_h9730ea02_0;
extern const VlUnpacked<CData/*1:0*/, 64> VRISC_V_Processor_Pipelined__ConstPool__TABLE_h69be0aad_0;

VL_ATTR_COLD void VRISC_V_Processor_Pipelined___024root___stl_sequent__TOP__0(VRISC_V_Processor_Pipelined___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_Processor_Pipelined__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_Processor_Pipelined___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    if (vlSelf->RISC_V_Processor_Pipelined__DOT__EXMEM_MemRead) {
        vlSelf->RISC_V_Processor_Pipelined__DOT__out_from_DM 
            = (((QData)((IData)(((vlSelf->RISC_V_Processor_Pipelined__DOT__dm__DOT__data_mem
                                  [(0x3fU & ((IData)(7U) 
                                             + (IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__EXMEM_Result)))] 
                                  << 0x18U) | ((vlSelf->RISC_V_Processor_Pipelined__DOT__dm__DOT__data_mem
                                                [(0x3fU 
                                                  & ((IData)(6U) 
                                                     + (IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__EXMEM_Result)))] 
                                                << 0x10U) 
                                               | ((vlSelf->RISC_V_Processor_Pipelined__DOT__dm__DOT__data_mem
                                                   [
                                                   (0x3fU 
                                                    & ((IData)(5U) 
                                                       + (IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__EXMEM_Result)))] 
                                                   << 8U) 
                                                  | vlSelf->RISC_V_Processor_Pipelined__DOT__dm__DOT__data_mem
                                                  [
                                                  (0x3fU 
                                                   & ((IData)(4U) 
                                                      + (IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__EXMEM_Result)))]))))) 
                << 0x20U) | (QData)((IData)(((vlSelf->RISC_V_Processor_Pipelined__DOT__dm__DOT__data_mem
                                              [(0x3fU 
                                                & ((IData)(3U) 
                                                   + (IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__EXMEM_Result)))] 
                                              << 0x18U) 
                                             | ((vlSelf->RISC_V_Processor_Pipelined__DOT__dm__DOT__data_mem
                                                 [(0x3fU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__EXMEM_Result)))] 
                                                 << 0x10U) 
                                                | ((vlSelf->RISC_V_Processor_Pipelined__DOT__dm__DOT__data_mem
                                                    [
                                                    (0x3fU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__EXMEM_Result)))] 
                                                    << 8U) 
                                                   | vlSelf->RISC_V_Processor_Pipelined__DOT__dm__DOT__data_mem
                                                   [
                                                   (0x3fU 
                                                    & (IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__EXMEM_Result))]))))));
    }
    vlSelf->RISC_V_Processor_Pipelined__DOT__imm_data 
        = ((0x40U & vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction)
            ? ((0x20U & vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction)
                ? ((0x10U & vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction)
                    ? 0ULL : ((8U & vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction)
                               ? 0ULL : ((4U & vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction)
                                          ? 0ULL : 
                                         ((2U & vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction)
                                           ? ((1U & vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction)
                                               ? ((
                                                   (- (QData)((IData)(
                                                                      (vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction 
                                                                       >> 0x1fU)))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0x800U 
                                                                      & (vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction 
                                                                         >> 0x14U)) 
                                                                     | ((0x400U 
                                                                         & (vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction 
                                                                            << 3U)) 
                                                                        | ((0x3f0U 
                                                                            & (vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction 
                                                                               >> 0x15U)) 
                                                                           | (0xfU 
                                                                              & (vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction 
                                                                                >> 8U))))))))
                                               : 0ULL)
                                           : 0ULL))))
                : 0ULL) : ((0x20U & vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction)
                            ? ((0x10U & vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction)
                                ? 0ULL : ((8U & vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction)
                                           ? 0ULL : 
                                          ((4U & vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction)
                                            ? 0ULL : 
                                           ((2U & vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction)
                                             ? ((1U 
                                                 & vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction)
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction 
                                                                      >> 0x1fU)))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   ((0xfe0U 
                                                                     & (vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction 
                                                                        >> 0x14U)) 
                                                                    | (0x1fU 
                                                                       & (vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction 
                                                                          >> 7U))))))
                                                 : 0ULL)
                                             : 0ULL))))
                            : ((0x10U & vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction)
                                ? ((8U & vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction)
                                    ? 0ULL : ((4U & vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction)
                                               ? 0ULL
                                               : ((2U 
                                                   & vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction)
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction 
                                                                       >> 0x14U))))
                                                    : 0ULL)
                                                   : 0ULL)))
                                : ((8U & vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction)
                                    ? 0ULL : ((4U & vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction)
                                               ? 0ULL
                                               : ((2U 
                                                   & vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction)
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction 
                                                                       >> 0x14U))))
                                                    : 0ULL)
                                                   : 0ULL))))));
    __Vtableidx2 = (((IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__IDEX_inst1) 
                     << 2U) | (IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__IDEX_ALUOp));
    if (VRISC_V_Processor_Pipelined__ConstPool__TABLE_h4ffb09d3_0
        [__Vtableidx2]) {
        vlSelf->RISC_V_Processor_Pipelined__DOT__Operation 
            = VRISC_V_Processor_Pipelined__ConstPool__TABLE_h9ccefef0_0
            [__Vtableidx2];
    }
    vlSelf->RISC_V_Processor_Pipelined__DOT__out_from_mux3 
        = ((IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__MEMWB_MemtoReg)
            ? vlSelf->RISC_V_Processor_Pipelined__DOT__MEMWB_read_data
            : vlSelf->RISC_V_Processor_Pipelined__DOT__MEMWB_Result);
    if (vlSelf->RISC_V_Processor_Pipelined__DOT__EXMEM_Branch) {
        if ((5U == (7U & (vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction 
                          >> 0xcU)))) {
            if (((IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__EXMEM_Branch) 
                 & (~ (IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__EXMEM_ZERO)))) {
                vlSelf->RISC_V_Processor_Pipelined__DOT__PC_src = 1U;
            }
        } else if ((3U == (7U & (vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction 
                                 >> 0xcU)))) {
            if (((IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__EXMEM_Branch) 
                 & (IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__EXMEM_ZERO))) {
                vlSelf->RISC_V_Processor_Pipelined__DOT__PC_src = 1U;
            }
        } else if ((7U == (7U & (vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction 
                                 >> 0xcU)))) {
            if ((vlSelf->RISC_V_Processor_Pipelined__DOT__IDEX_ReadData1 
                 >= ((IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__IDEX_ALUSrc)
                      ? vlSelf->RISC_V_Processor_Pipelined__DOT__IDEX_imm_data
                      : vlSelf->RISC_V_Processor_Pipelined__DOT__IDEX_ReadData2))) {
                vlSelf->RISC_V_Processor_Pipelined__DOT__PC_src = 1U;
            }
        }
    } else {
        vlSelf->RISC_V_Processor_Pipelined__DOT__PC_src = 0U;
    }
    __Vtableidx1 = (0x7fU & vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction);
    vlSelf->RISC_V_Processor_Pipelined__DOT__ALUSrc 
        = VRISC_V_Processor_Pipelined__ConstPool__TABLE_hc6f08ae8_0
        [__Vtableidx1];
    vlSelf->RISC_V_Processor_Pipelined__DOT__MemtoReg 
        = VRISC_V_Processor_Pipelined__ConstPool__TABLE_hf161bc6c_0
        [__Vtableidx1];
    vlSelf->RISC_V_Processor_Pipelined__DOT__RegWrite 
        = VRISC_V_Processor_Pipelined__ConstPool__TABLE_h3dfcac50_0
        [__Vtableidx1];
    vlSelf->RISC_V_Processor_Pipelined__DOT__MemRead 
        = VRISC_V_Processor_Pipelined__ConstPool__TABLE_hda0cf9d9_0
        [__Vtableidx1];
    vlSelf->RISC_V_Processor_Pipelined__DOT__MemWrite 
        = VRISC_V_Processor_Pipelined__ConstPool__TABLE_hfb2c73db_0
        [__Vtableidx1];
    vlSelf->RISC_V_Processor_Pipelined__DOT__Branch 
        = VRISC_V_Processor_Pipelined__ConstPool__TABLE_hdb7b249a_0
        [__Vtableidx1];
    vlSelf->RISC_V_Processor_Pipelined__DOT__ALUOp 
        = VRISC_V_Processor_Pipelined__ConstPool__TABLE_hd060e9d2_0
        [__Vtableidx1];
    __Vtableidx3 = (((IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__FU_IDEX_inst2) 
                     << 5U) | (((IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__FU_MEMWB_RegWrite) 
                                << 4U) | (((IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__FU_MEMWB_read_data) 
                                           << 3U) | 
                                          (((IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__FU_EXMEM_Regwrite) 
                                            << 2U) 
                                           | (((IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__FU_IDEX_inst1) 
                                               << 1U) 
                                              | (IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__FU_EXMEM_ReadData2))))));
    vlSelf->RISC_V_Processor_Pipelined__DOT__FU_fwdA 
        = VRISC_V_Processor_Pipelined__ConstPool__TABLE_h9730ea02_0
        [__Vtableidx3];
    vlSelf->RISC_V_Processor_Pipelined__DOT__FU_fwdB 
        = VRISC_V_Processor_Pipelined__ConstPool__TABLE_h69be0aad_0
        [__Vtableidx3];
    vlSelf->RISC_V_Processor_Pipelined__DOT__PC_In_from_mux 
        = ((IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__PC_src)
            ? vlSelf->RISC_V_Processor_Pipelined__DOT__EXMEM_out
            : (4ULL + vlSelf->RISC_V_Processor_Pipelined__DOT__PC_Out));
    vlSelf->RISC_V_Processor_Pipelined__DOT__Resa = 
        ((0U == (IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__FU_fwdA))
          ? vlSelf->RISC_V_Processor_Pipelined__DOT__IDEX_ReadData1
          : ((1U == (IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__FU_fwdA))
              ? vlSelf->RISC_V_Processor_Pipelined__DOT__out_from_mux3
              : ((2U == (IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__FU_fwdA))
                  ? vlSelf->RISC_V_Processor_Pipelined__DOT__EXMEM_Result
                  : 0ULL)));
    vlSelf->RISC_V_Processor_Pipelined__DOT__Resb = 
        ((0U == (IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__FU_fwdB))
          ? vlSelf->RISC_V_Processor_Pipelined__DOT__IDEX_ReadData2
          : ((1U == (IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__FU_fwdB))
              ? vlSelf->RISC_V_Processor_Pipelined__DOT__out_from_mux3
              : ((2U == (IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__FU_fwdB))
                  ? vlSelf->RISC_V_Processor_Pipelined__DOT__EXMEM_Result
                  : 0ULL)));
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("PC_In = %20#, PC_Out = %20#, Instruction = %b, Opcode = %b, Funct3 = %b, rs1 = %2#, rs2 = %2#, rd = %2#, funct7 = %b, ALUOp = %b, imm_data = %20#, Operation = %b\n",
                  64,vlSelf->RISC_V_Processor_Pipelined__DOT__PC_In_from_mux,
                  64,vlSelf->RISC_V_Processor_Pipelined__DOT__PC_Out,
                  32,vlSelf->RISC_V_Processor_Pipelined__DOT__Instruction,
                  7,(0x7fU & vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction),
                  3,(7U & (vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction 
                           >> 0xcU)),5,(0x1fU & (vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction 
                                                 >> 0xfU)),
                  5,(0x1fU & (vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction 
                              >> 0x14U)),5,(0x1fU & 
                                            (vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction 
                                             >> 7U)),
                  7,(vlSelf->RISC_V_Processor_Pipelined__DOT__IFID_instruction 
                     >> 0x19U),2,(IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__IDEX_ALUOp),
                  64,vlSelf->RISC_V_Processor_Pipelined__DOT__imm_data,
                  4,(IData)(vlSelf->RISC_V_Processor_Pipelined__DOT__Operation));
    }
}
