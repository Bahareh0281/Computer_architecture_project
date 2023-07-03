// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VModules.h"
#include "VModules__Syms.h"

//============================================================
// Constructors

VModules::VModules(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VModules__Syms(contextp(), _vcname__, this)}
    , adder__02Ea{vlSymsp->TOP.adder__02Ea}
    , adder__02Eb{vlSymsp->TOP.adder__02Eb}
    , sum{vlSymsp->TOP.sum}
    , multiplier__02Ea{vlSymsp->TOP.multiplier__02Ea}
    , multiplier__02Eb{vlSymsp->TOP.multiplier__02Eb}
    , product{vlSymsp->TOP.product}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VModules::VModules(const char* _vcname__)
    : VModules(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VModules::~VModules() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VModules___024root___eval_debug_assertions(VModules___024root* vlSelf);
#endif  // VL_DEBUG
void VModules___024root___eval_static(VModules___024root* vlSelf);
void VModules___024root___eval_initial(VModules___024root* vlSelf);
void VModules___024root___eval_settle(VModules___024root* vlSelf);
void VModules___024root___eval(VModules___024root* vlSelf);

void VModules::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VModules::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VModules___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VModules___024root___eval_static(&(vlSymsp->TOP));
        VModules___024root___eval_initial(&(vlSymsp->TOP));
        VModules___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VModules___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VModules::eventsPending() { return false; }

uint64_t VModules::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VModules::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VModules___024root___eval_final(VModules___024root* vlSelf);

VL_ATTR_COLD void VModules::final() {
    VModules___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VModules::hierName() const { return vlSymsp->name(); }
const char* VModules::modelName() const { return "VModules"; }
unsigned VModules::threads() const { return 1; }
