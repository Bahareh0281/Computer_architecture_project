// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRISC_V_Processor_Pipelined.h"
#include "VRISC_V_Processor_Pipelined__Syms.h"

//============================================================
// Constructors

VRISC_V_Processor_Pipelined::VRISC_V_Processor_Pipelined(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRISC_V_Processor_Pipelined__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VRISC_V_Processor_Pipelined::VRISC_V_Processor_Pipelined(const char* _vcname__)
    : VRISC_V_Processor_Pipelined(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRISC_V_Processor_Pipelined::~VRISC_V_Processor_Pipelined() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VRISC_V_Processor_Pipelined___024root___eval_debug_assertions(VRISC_V_Processor_Pipelined___024root* vlSelf);
#endif  // VL_DEBUG
void VRISC_V_Processor_Pipelined___024root___eval_static(VRISC_V_Processor_Pipelined___024root* vlSelf);
void VRISC_V_Processor_Pipelined___024root___eval_initial(VRISC_V_Processor_Pipelined___024root* vlSelf);
void VRISC_V_Processor_Pipelined___024root___eval_settle(VRISC_V_Processor_Pipelined___024root* vlSelf);
void VRISC_V_Processor_Pipelined___024root___eval(VRISC_V_Processor_Pipelined___024root* vlSelf);

void VRISC_V_Processor_Pipelined::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRISC_V_Processor_Pipelined::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRISC_V_Processor_Pipelined___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VRISC_V_Processor_Pipelined___024root___eval_static(&(vlSymsp->TOP));
        VRISC_V_Processor_Pipelined___024root___eval_initial(&(vlSymsp->TOP));
        VRISC_V_Processor_Pipelined___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VRISC_V_Processor_Pipelined___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VRISC_V_Processor_Pipelined::eventsPending() { return false; }

uint64_t VRISC_V_Processor_Pipelined::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VRISC_V_Processor_Pipelined::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VRISC_V_Processor_Pipelined___024root___eval_final(VRISC_V_Processor_Pipelined___024root* vlSelf);

VL_ATTR_COLD void VRISC_V_Processor_Pipelined::final() {
    VRISC_V_Processor_Pipelined___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRISC_V_Processor_Pipelined::hierName() const { return vlSymsp->name(); }
const char* VRISC_V_Processor_Pipelined::modelName() const { return "VRISC_V_Processor_Pipelined"; }
unsigned VRISC_V_Processor_Pipelined::threads() const { return 1; }
