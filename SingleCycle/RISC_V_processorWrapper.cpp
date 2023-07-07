#include <iostream>
#include "verilated.h"
#include "VRISC_V_processor.h"

class RISCVProcessorWrapper {
public:
    RISCVProcessorWrapper();
    ~RISCVProcessorWrapper();

    void reset();
    void step(int count);
    int getResultFromALU();
    bool getZeroOutput();
    int getOutFromDM();

private:
    VRISC_V_processor* risc_;
};

RISCVProcessorWrapper::RISCVProcessorWrapper() {
    risc_ = new VRISC_V_processor;
}

RISCVProcessorWrapper::~RISCVProcessorWrapper() {
    delete risc_;
}

void RISCVProcessorWrapper::reset() {
    risc_->reset = 1;
    risc_->clk = 0;
    risc_->eval();
    risc_->reset = 0;
}

void RISCVProcessorWrapper::step(int count) {
    for (int i = 0; i < count; i++) {
        risc_->clk = 1;
        risc_->eval_step();
        risc_->clk = 0;
        risc_->eval_step();
    }
}

int RISCVProcessorWrapper::getResultFromALU() {
    return 0;
}

bool RISCVProcessorWrapper::getZeroOutput() {
    return 0;
}

int RISCVProcessorWrapper::getOutFromDM() {
    return 0;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    // Instantiate the wrapper
    RISCVProcessorWrapper riscvProcessorWrapper;

    // Reset the module
    riscvProcessorWrapper.reset();

    // Run the simulation for 10 clock cycles
    riscvProcessorWrapper.step(10);

    // Print the output signal

    int a = 2;
    int b = 3;
    int c = 4;
    int d = 5;
    int e = 6;

    printf("The value of a + b is %d\n", a + b);
    // printf("The value of b * c is %d\n", b * c);
    // printf("The value of c / a is %d\n", c / a);
    // printf("The value of d - a is %d\n", d - a);
    // printf("The value of e - a is %d\n", e - a);
    // printf("The value of d * e is %d\n", d * e);
    // printf("The value of c * b is %d\n", c * b);
    // printf("The value of d + c is %d\n", d + c);
    // printf("The value of a * a is %d\n", a * a);
    // printf("The value of d - c is %d\n", d - c);

    return 0;
}