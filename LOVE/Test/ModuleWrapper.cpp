#include "verilated.h"
#include "Vtop.h"

class TopWrapper {
public:
    TopWrapper();
    ~TopWrapper();

    void eval();
    void set_inputs(int8_t a, int8_t b, int8_t a1, int8_t b1);
    void get_outputs(int8_t& sum, int16_t& product);

private:
    Vtop* top;
};

TopWrapper::TopWrapper() {
    top = new Vtop;
}

TopWrapper::~TopWrapper() {
    delete top;
}

void TopWrapper::eval() {
    top->eval();
}

void TopWrapper::set_inputs(int8_t a, int8_t b, int8_t a1, int8_t b1) {
    top->a = a;
    top->b = b;
    top->a1 = a1;
    top->b1 = b1;
}

void TopWrapper::get_outputs(int8_t& sum, int16_t& product) {
    sum = top->sum;
    product = top->product;
}

int main(int argc, char** argv) {
    // Initialize Verilated context
    Verilated::commandArgs(argc, argv);

    // Instantiate the wrapper
    TopWrapper topWrapper;

    // Set inputs to the module
    int8_t a = 5;
    int8_t b = 2;
    int8_t a1 = 3;
    int8_t b1 = 4;
    topWrapper.set_inputs(a, b, a1, b1);

    // Evaluate the module
    topWrapper.eval();

    // Get outputs from the module
    int8_t sum;
    int16_t product;
    topWrapper.get_outputs(sum, product);

    // Print the results
    std::cout << "sum = " << static_cast<int>(sum) << std::endl;
    std::cout << "product = " << product << std::endl;

    return 0;
}