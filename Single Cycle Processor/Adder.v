//Module Adder is a 64-bit adder that takes two inputs a and b and provides the sum of the inputs as an output signal out.
//The addition operation is performed using an always block that triggers when any of the input signals change.

module Adder(
    input[63:0] a, b,
    output reg [63:0] out
);
always@(*)
    out = a + b;
endmodule