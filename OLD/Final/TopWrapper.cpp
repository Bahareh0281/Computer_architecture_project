#include "verilated.h"
#include "Vtop.h"
#include "verilated_vcd_c.h"

class TopModuleWrapper {
public:
    TopModuleWrapper();
    ~TopModuleWrapper();

    void eval();

private:
    Vtop* topModule;
    VerilatedVcdC* vcd;
};

TopModuleWrapper::TopModuleWrapper() {
    topModule = new Vtop;
    Verilated::traceEverOn(true);   // Enable tracing
    vcd = new VerilatedVcdC;
    topModule->trace(vcd, 99);      // Trace at level 99
    vcd->open("trace.vcd");         // Open the VCD file
}

TopModuleWrapper::~TopModuleWrapper() {
    delete topModule;
    vcd->close();                   // Close the VCD file
    delete vcd;
}

void TopModuleWrapper::eval() {
    topModule->clk = 0;
    topModule->eval();
    vcd->dump(topModule->time());   // Dump current signal values to VCD file
    topModule->clk = 1;
    topModule->eval();
    vcd->dump(topModule->time());   // Dump current signal values to VCD file
}

int main(int argc, char** argv) {
    // Initialize Verilated context
    Verilated::commandArgs(argc, argv);

    // Instantiate the wrapper
    TopModuleWrapper topModuleWrapper;

    // Evaluate the module
    for (int i = 0; i < 10; i++) {
        topModuleWrapper.eval();
    }

    return 0;
}
