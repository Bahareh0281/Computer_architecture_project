//Module data_generator takes a 32-bit instruction as input and generates the corresponding immediate data for different types of instructions.
//This module provides the immediate data as a 64-bit output signal.
//The generated immediate data depends on the opcode field of the input instruction.
module data_generator
(
input [31:0] instruction,
output reg[63:0] imm_data

);
wire[6:0] opcode;
assign opcode = instruction[6:0];
always @(*)
begin
    case (opcode)
        7'b0000011: imm_data =  {{52{instruction[31]}}, instruction [31:20]};
        7'b0100011: imm_data = {{52{instruction[31]}}, instruction [31:25], instruction [11:7]};
        7'b1100011: imm_data = {{52{instruction[31]}}, instruction [31] , instruction [7], instruction [30:25], instruction [11:8]};
        7'b0010011: imm_data = {{52{instruction[31]}}, instruction[31:20]};
        default : imm_data = 64'd0;
    endcase
end
endmodule