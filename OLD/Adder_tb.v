module Adder_tb;

reg [63:0] a, b;
wire [63:0] out;

Adder DUT (.a(a), .b(b), .out(out));

initial begin
    a = 10;
    b = 20;
    
    #10 $display("a = %d, b = %d, out = %d", a, b, out);
    
    a = 100;
    b = 200;
    
    #10 $display("a = %d, b = %d, out = %d", a, b, out);
    
    // Add more input values and $display statements as needed
    
    $finish;
end

endmodule
