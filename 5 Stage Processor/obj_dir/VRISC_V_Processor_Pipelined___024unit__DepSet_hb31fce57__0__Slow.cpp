// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISC_V_Processor_Pipelined.h for the primary calling header

#include "verilated.h"

#include "VRISC_V_Processor_Pipelined__Syms.h"
#include "VRISC_V_Processor_Pipelined___024unit.h"

VL_ATTR_COLD void VRISC_V_Processor_Pipelined___024unit___ctor_var_reset(VRISC_V_Processor_Pipelined___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_Processor_Pipelined__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  VRISC_V_Processor_Pipelined___024unit___ctor_var_reset\n"); );
    // Body
    vlSelf->__VmonitorNum = VL_RAND_RESET_Q(64);
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
