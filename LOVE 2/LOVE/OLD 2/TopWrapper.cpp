#include <iostream>
#include "verilated.h"
#include "Vtop.h"

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
        top_->eval();
        top_->clk = 0;
        top_->eval();
    }
}

int TopModuleWrapper::getResultFromALU() {
    uint64_t result = top_->Result_from_alu;
    return static_cast<int>(result & 0xffffffff);
}

int TopModuleWrapper::getZeroOutput() {
    return top_->zero_output;
}

int TopModuleWrapper::getOutFromDM() {
    return top_->out_from_DM;
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
    printf("HEllo");

    return 0;
}