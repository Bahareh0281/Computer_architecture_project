// top.cpp
#include "verilated.h"
//#include "Vtop.h"
//#include "adder_wrapper.h"
//#include "multiplier_wrapper.h"

// multiplier_wrapper.h
#include "verilated.h"
//#include "Vmultiplier.h"

class MultiplierWrapper {
public:
    MultiplierWrapper();
    ~MultiplierWrapper();

    void eval();
    void set_inputs(int a, int b);
    int get_output();

private:
    Vmultiplier* m_top;
};

// multiplier_wrapper.cpp
//#include "multiplier_wrapper.h"

MultiplierWrapper::MultiplierWrapper() {
    m_top = new Vmultiplier;
}

MultiplierWrapper::~MultiplierWrapper() {
    delete m_top;
}

void MultiplierWrapper::eval() {
    m_top->eval();
}

void MultiplierWrapper::set_inputs(int a, int b) {
    m_top->a = a;
    m_top->b = b;
}

int MultiplierWrapper::get_output() {
    return m_top->product;
}

class AdderWrapper {
public:
    AdderWrapper();
    ~AdderWrapper();

    void eval();
    void set_inputs(int a, int b);
    int get_output();

private:
    Vadder* m_top;
};

// adder_wrapper.cpp
//#include "adder_wrapper.h"

AdderWrapper::AdderWrapper() {
    m_top = new Vadder;
}

AdderWrapper::~AdderWrapper() {
    delete m_top;
}

void AdderWrapper::eval() {
    m_top->eval();
}

void AdderWrapper::set_inputs(int a, int b) {
    m_top->a = a;
    m_top->b = b;
}

int AdderWrapper::get_output() {
    return m_top->sum;
}

int main(int argc, char** argv) {
    Vtop* top = new Vtop;
    AdderWrapper* adder = new AdderWrapper;
    MultiplierWrapper* multiplier = new MultiplierWrapper;

    // Reset the modules
    top->rst_n = 0;
    top->eval();
    adder->eval();
    multiplier->eval();

    // Set inputs to the modules
    adder->set_inputs(10, 20);
    multiplier->set_inputs(10, 20);

    // Evaluate the modules
    adder->eval();
    multiplier->eval();

    // Get outputs from the modules
    int sum = adder->get_output();
    int product = multiplier->get_output();

    // Print the results
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    // Clean up
    delete multiplier;
    delete adder;
    delete top;
    return 0;
}
