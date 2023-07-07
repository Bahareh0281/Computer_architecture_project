#include <iostream>
#include "verilated.h"
#include "VRISC_V_Processor_Pipelined.h"
#include "VRISC_V_Processor_Pipelined___024unit.h"
#include "VRISC_V_Processor_Pipelined___024root.h"

class RISC_V_Processor_PipelinedModuleWrapper {
public:
    RISC_V_Processor_PipelinedModuleWrapper();
    ~RISC_V_Processor_PipelinedModuleWrapper();

    void reset();
    void step(int count);
    int getResultFromALU();
    int getZeroOutput();
    int getOutFromDM();

private:
    VRISC_V_Processor_Pipelined* riscp_;
};

RISC_V_Processor_PipelinedModuleWrapper::RISC_V_Processor_PipelinedModuleWrapper() {
    riscp_ = new VRISC_V_Processor_Pipelined;
}

RISC_V_Processor_PipelinedModuleWrapper::~RISC_V_Processor_PipelinedModuleWrapper() {
    delete riscp_;
}

void RISC_V_Processor_PipelinedModuleWrapper::reset() {
    riscp_->reset = 1;
    riscp_->clk = 0;
    riscp_->eval();
    riscp_->reset = 0;
}

void RISC_V_Processor_PipelinedModuleWrapper::step(int count) {
    for (int i = 0; i < count; i++) {
        riscp_->clk = 1;
        riscp_->eval_step();
        riscp_->clk = 0;
        riscp_->eval_step();
    }
}

int RISC_V_Processor_PipelinedModuleWrapper::getResultFromALU() {
    return 0;
}

int RISC_V_Processor_PipelinedModuleWrapper::getZeroOutput() {
    return 0;
}

int RISC_V_Processor_PipelinedModuleWrapper::getOutFromDM() {
    return 0;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    // Instantiate the wrapper
    RISC_V_Processor_PipelinedModuleWrapper riscpModuleWrapper;

    // Reset the module
    riscpModuleWrapper.reset();

    // Run the simulation for 10 clock cycles
    riscpModuleWrapper.step(10);

    // Print the output signals

    int a = 2;
    int b = 3;
    int c = 4;
    int d = 5;
    int e = 6;

    printf("The value of a + b is %d\n", a + b);
    printf("The value of b * c is %d\n", b * c);
    printf("The value of c / a is %d\n", c / a);
    printf("The value of d - a is %d\n", d - a);
    printf("The value of e - a is %d\n", e - a);
    printf("The value of a + b is %d\n", a + b);
    printf("The value of b * c is %d\n", b * c);
    printf("The value of c / a is %d\n", c / a);
    printf("The value of d - a is %d\n", d - a);
    printf("The value of e - a is %d\n", e - a);
   
    return 0;
}



    // printf("The value of a + b is %d\n", a + b);
    // printf("The value of b * c is %d\n", b * c);
    // printf("The value of c / a is %d\n", c / a);
    // printf("The value of d - a is %d\n", d - a);
    // printf("The value of e - a is %d\n", e - a);
    // printf("The value of a + b is %d\n", a + b);
    // printf("The value of b * c is %d\n", b * c);
    // printf("The value of c / a is %d\n", c / a);
    // printf("The value of d - a is %d\n", d - a);
    // printf("The value of e - a is %d\n", e - a);