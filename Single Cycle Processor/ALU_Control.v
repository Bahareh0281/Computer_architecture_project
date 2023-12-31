//Module ALU_Control implements an ALU control unit that generates a 4-bit control signal for an ALU based on the 2-bit ALUOp and 4-bit Funct inputs.
//This module selects the appropriate ALU operation for different instruction types, including ADDI, SLLI, BEQ, BNE, R-type, and SB-type instructions.

module ALU_Control
(
    input [1:0] ALUOp,
    input[3:0] Funct,
    output reg [3:0] Operation
);
always@(*)
begin
    case(ALUOp)
        2'b00: //for both addi and slli
            begin
                case(Funct[2:0])
                3'b000: //addi
                begin
                    Operation = 4'b0010;
                end
                3'b001: //slli
                begin
                    Operation = 4'b1000;
                end
              endcase
            end
        2'b01:
            begin
            Operation = 4'b0110;
            end
        2'b10:
            begin
            case(Funct)
            4'b0000:
                begin
                Operation = 4'b0010;
                end
            4'b1000:
                begin
                Operation = 4'b0110;
                end
            4'b0111:
                begin
                Operation = 4'b0000;
                end
            4'b0110:
                begin
                Operation = 4'b0001;
                end
            endcase
            end
    endcase
end
endmodule


