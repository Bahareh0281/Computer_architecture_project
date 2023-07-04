//Module selector is a selector that takes two 64-bit inputs a and b, a branch signal, a ZERO signal, and a funct3 signal as inputs.
//This module provides a select signal as output based on the values of the input signals.
//The select signal determines whether to take a branch or not depending on the opcode of the instruction and the condition specified by the input signals.

module selector(
    input branch, ZERO,
    input[63:0] a, b,
    input[2:0] funct3,
    output reg sel
);
always@(*)
begin
    if (branch == 1) 
        begin
            case(funct3)
            3'b001: //bne
            begin
                if(branch == 1 & ZERO == 0)
                    sel = 1;
                else
                    sel = 0;
            end
            3'b000: //beq
            begin
                if(branch == 1 & ZERO == 1)
                    sel = 1;
                else
                    sel = 0;
            end
            3'b101: //bge
            begin
                if (a >= b)
                    sel = 1;
                else
                    sel = 0;
            end
        endcase
     end
   else
	    sel = 0;
end
endmodule
