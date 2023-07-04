#include <iostream>
#include "verilated.h"
#include "Vtop.h"
#include "Vtop___024unit.h"

class TopModuleWrapper {
public:
    TopModuleWrapper();
    ~TopModuleWrapper();

    void reset();
    void step(int count);
    int getResultFromALU();
    int getZeroOutput();
    int getOutFromDM();

private:
    Vtop* top_;
};

TopModuleWrapper::TopModuleWrapper() {
    top_ = new Vtop;
}

TopModuleWrapper::~TopModuleWrapper() {
    delete top_;
}

void TopModuleWrapper::reset() {
    top_->reset = 1;
    top_->clk = 0;
    top_->eval();
    top_->reset = 0;
}

void TopModuleWrapper::step(int count) {
    for (int i = 0; i < count; i++) {
        top_->clk = 1;
        top_->eval_step();
        top_->clk = 0;
        top_->eval_step();
    }
}

int TopModuleWrapper::getResultFromALU() {
    // uint64_t result = top_->__PVT____024unit->alu__DOT__Result;
    // return static_cast<int>(result & 0xffffffff);
    return 0;
}

int TopModuleWrapper::getZeroOutput() {
    // return top_->__PVT____024unit->alu__DOT__ZERO;
    return 0;
}

int TopModuleWrapper::getOutFromDM() {
    // return top_->__PVT____024unit->DM__DOT__out;
    return 0;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    // Instantiate the wrapper
    TopModuleWrapper topModuleWrapper;

    // Reset the module
    topModuleWrapper.reset();

    // Run the simulation for 10 clock cycles
    topModuleWrapper.step(10);

    // Print the output signals
    // std::cout << "Result_from_alu: " << topModuleWrapper.getResultFromALU() << std::endl;
    // std::cout << "zero_output: " << topModuleWrapper.getZeroOutput() << std::endl;
    // std::cout << "out_from_DM: " << topModuleWrapper.getOutFromDM() << std::endl;
    printf("Hello");

    return 0;
}
