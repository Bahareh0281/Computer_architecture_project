#include "verilated.h"
#include "Vadder.h"

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
    AdderWrapper adder;

    // Set inputs to the module
    adder.set_inputs(10, 20);

    // Evaluate the module
    adder.eval();

    // Get output from the module
    int sum = adder.get_output();

    // Print the result
    printf("Sum: %d\n", sum);

    return 0;
}
