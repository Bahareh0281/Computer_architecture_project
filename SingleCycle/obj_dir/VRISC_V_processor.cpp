// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRISC_V_processor.h"
#include "VRISC_V_processor__Syms.h"

//============================================================
// Constructors

VRISC_V_processor::VRISC_V_processor(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRISC_V_processor__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VRISC_V_processor::VRISC_V_processor(const char* _vcname__)
    : VRISC_V_processor(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRISC_V_processor::~VRISC_V_processor() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VRISC_V_processor___024root___eval_debug_assertions(VRISC_V_processor___024root* vlSelf);
#endif  // VL_DEBUG
void VRISC_V_processor___024root___eval_static(VRISC_V_processor___024root* vlSelf);
void VRISC_V_processor___024root___eval_initial(VRISC_V_processor___024root* vlSelf);
void VRISC_V_processor___024root___eval_settle(VRISC_V_processor___024root* vlSelf);
void VRISC_V_processor___024root___eval(VRISC_V_processor___024root* vlSelf);

void VRISC_V_processor::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRISC_V_processor::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRISC_V_processor___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VRISC_V_processor___024root___eval_static(&(vlSymsp->TOP));
        VRISC_V_processor___024root___eval_initial(&(vlSymsp->TOP));
        VRISC_V_processor___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VRISC_V_processor___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VRISC_V_processor::eventsPending() { return false; }

uint64_t VRISC_V_processor::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VRISC_V_processor::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VRISC_V_processor___024root___eval_final(VRISC_V_processor___024root* vlSelf);

VL_ATTR_COLD void VRISC_V_processor::final() {
    VRISC_V_processor___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRISC_V_processor::hierName() const { return vlSymsp->name(); }
const char* VRISC_V_processor::modelName() const { return "VRISC_V_processor"; }
unsigned VRISC_V_processor::threads() const { return 1; }
