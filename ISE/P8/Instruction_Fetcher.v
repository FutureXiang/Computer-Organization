`timescale 1ns / 1ps

module Instruction_Fetcher(
	input GOTO_HANDLER,
	input ERET,
	input [31:0] EPC,
	
    input [31:0] sign_imm32,
    input [25:0] addr26,
    input [31:0] ra32,
    input [1:0] PC_choice,
	
    input reset,
    input clk,
    input clk2,
	input FREEZE,
	
    output [31:0] IR,
	output [31:0] PCp4,
	
	output PCException
    );

	// reg [31:0] InstrMemory [4095:0];
    reg [31:0] PC_counter;
    
	integer i;
    /*initial begin
        PC_counter <= 32'h00003000;
		for(i=0; i<4096; i=i+1)
            InstrMemory[i] = 32'b0;
        $readmemh("code.txt", InstrMemory);
		$readmemh("code_handler.txt", InstrMemory, 1120, 2047);
    end*/

    wire [31:0] tmpIR;
    IM_BlockRAM Instuctions_IPcore (.clka(clk2), .wea(4'b0000), .addra((PC_counter - 32'h00003000)/4), .dina(32'd0), .douta(tmpIR));

	wire [31:0] next_PC;
	NextPC calcNextPC(.oldPC(PC_counter), .newPC(next_PC), .imm32(sign_imm32), .addr26(addr26), .ra32(ra32), .PC_mux(PC_choice));
    assign PCp4 = PC_counter+4;
	
	assign PCException = ( (PC_counter[1:0]!=2'b00) | (PC_counter < 32'h00003000) | (PC_counter > 32'h00004ffc) ) & (~GOTO_HANDLER);
	
	assign IR = (PCException) ? 32'd0 : tmpIR;




    always @(posedge clk) begin
        if(reset) begin
            PC_counter <= 32'h00003000;
        end
        else begin
			if(GOTO_HANDLER) begin
				PC_counter <= 32'h00004180;
			end
			else if(!FREEZE) begin
				PC_counter <= (ERET ? EPC : next_PC);
			end
        end
    end

endmodule
