module MUX_Triple
(
    input [63:0] a, b, c,
    input [1:0] sel,
    output reg [63:0] Res   
);

always@(*)
begin
    case (sel)
    2'b00: Res = a;
    2'b01: Res = b;
    2'b10: Res = c; 
        default: Res = 2'bX;
    endcase

end


endmodule // Triple MUX
