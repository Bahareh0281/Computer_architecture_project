//Modulemux2x1 is a 2-to-1 multiplexer that takes two 64-bit inputs and a single bit select signal as inputs.
//The module provides the selected input as the output signal.

module mux2x1
(
    input [63:0] a,b,
    input s ,
    output[63:0] data_out
);
assign data_out = s ? b : a;
endmodule