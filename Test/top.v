module Top(input [7:0] a, b, a1, b1 ,output [7:0] sum, output [15:0] product);
    wire [7:0] adder_out;
    wire [15:0] m_out;
    adder adder(.a(a), .b(b), .sum(adder_out));
    multiplier multiplier (.a(a1), .b(b1), .product(m_out));
    assign sum = adder_out;
    assign product = m_out;
endmodule
