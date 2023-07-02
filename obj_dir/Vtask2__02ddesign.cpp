// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtask2__02ddesign.h"
#include "Vtask2__02ddesign__Syms.h"

//============================================================
// Constructors

Vtask2__02ddesign::Vtask2__02ddesign(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtask2__02ddesign__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtask2__02ddesign::Vtask2__02ddesign(const char* _vcname__)
    : Vtask2__02ddesign(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtask2__02ddesign::~Vtask2__02ddesign() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtask2__02ddesign___024root___eval_debug_assertions(Vtask2__02ddesign___024root* vlSelf);
#endif  // VL_DEBUG
void Vtask2__02ddesign___024root___eval_static(Vtask2__02ddesign___024root* vlSelf);
void Vtask2__02ddesign___024root___eval_initial(Vtask2__02ddesign___024root* vlSelf);
void Vtask2__02ddesign___024root___eval_settle(Vtask2__02ddesign___024root* vlSelf);
void Vtask2__02ddesign___024root___eval(Vtask2__02ddesign___024root* vlSelf);

void Vtask2__02ddesign::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtask2__02ddesign::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtask2__02ddesign___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtask2__02ddesign___024root___eval_static(&(vlSymsp->TOP));
        Vtask2__02ddesign___024root___eval_initial(&(vlSymsp->TOP));
        Vtask2__02ddesign___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtask2__02ddesign___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtask2__02ddesign::eventsPending() { return false; }

uint64_t Vtask2__02ddesign::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtask2__02ddesign::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtask2__02ddesign___024root___eval_final(Vtask2__02ddesign___024root* vlSelf);

VL_ATTR_COLD void Vtask2__02ddesign::final() {
    Vtask2__02ddesign___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtask2__02ddesign::hierName() const { return vlSymsp->name(); }
const char* Vtask2__02ddesign::modelName() const { return "Vtask2__02ddesign"; }
unsigned Vtask2__02ddesign::threads() const { return 1; }
