//Module alu_64 implements a 64-bit Arithmetic Logic Unit (ALU) that performs various operations on two input operands based on the ALUOp signal, and generates a result and a zero flag output.
//The supported operations include bitwise AND, bitwise OR, addition, subtraction, bitwise NOR, and left shift.

module alu_64(
	input [63:0] a, 
    input[63:0] b,
    input[3:0] ALUOp,
    output reg [63:0] Result,
    output reg ZERO
);
always @ (*)
begin
    case(ALUOp)
    4'b0000 :
        begin
        Result = a & b;
end
    4'b0001 :
        begin
        Result = a|b;
end
    4'b0010 :
        begin
        Result = a+b;
end
    4'b0110:
        begin
        Result = a-b;
end
    4'b1100:
        begin
        Result = ~(a|b);
end
    4'b1000:
        begin
            Result = a << b;
end
    default : Result = 0;
endcase

if (Result == 64'b0)
    ZERO = 1'b1;
else
    ZERO = 1'b0;

end
endmodule



