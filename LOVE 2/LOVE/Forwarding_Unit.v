module Forwarding_Unit
(
    input EXMEM_ReadData2, MEMWB_read_data,
  input rs1, rs2,
    input EXMEM_Regwrite,
    input MEMWB_RegWrite,

    output reg [1:0] fwd_A,
    output reg [1:0] fwd_B
);



always @(*) begin

    if (EXMEM_ReadData2 == rs1 && EXMEM_Regwrite && EXMEM_ReadData2 != 0) 
        begin
            fwd_A = 2'b10;
        end
    
    else if (((MEMWB_read_data == rs1) && MEMWB_RegWrite && (MEMWB_read_data != 0)) 
            &&
            !(EXMEM_Regwrite && (EXMEM_ReadData2 != 0) && (EXMEM_ReadData2 == rs1)))
        begin
            fwd_A = 2'b01;
        end
    
    else
        begin
            fwd_A = 2'b00;
        end
    
    
  if ((EXMEM_ReadData2 == rs2) && (EXMEM_Regwrite) && (EXMEM_ReadData2 != 0))
        begin
            fwd_B = 2'b10;
        end
    
    else if (((MEMWB_read_data == rs2) && (MEMWB_RegWrite == 1) && (MEMWB_read_data != 0)) 
            &&
            !(EXMEM_Regwrite && (EXMEM_ReadData2 != 0) && (EXMEM_ReadData2 == rs2)
            ))
        begin
            fwd_B = 2'b01;
        end
    
    else 
        begin
            fwd_B = 2'b00;
        end
end

endmodule // Forwarding Unit
