module adder(input [7:0] a, b, output [7:0] sum);
    assign sum = a + b;
endmodule

module multiplier(input [7:0] a, b, output [15:0] product);
    assign product = a * b;
endmodule
