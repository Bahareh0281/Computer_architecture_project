#include "verilated.h"
#include "Vmultiplier.h"

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

int main(int argc, char** argv) {
    MultiplierWrapper multiplier;

    // Set inputs to the module
    multiplier.set_inputs(10, 20);

    // Evaluate the module
    multiplier.eval();

    // Get output from the module
    int product = multiplier.get_output();

    // Print the result
    printf("Product: %d\n", product);

    return 0;
}
