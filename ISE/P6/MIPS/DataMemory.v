`timescale 1ns / 1ps

module DataMemory(
    input [31:0] Addr, // bytes lowest addr
    input [31:0] WD,
    input clk,
    input reset,
    input WE,
    output [31:0] Read,
	input [31:0] PCnow,
	
	input [3:0] code,	// lw, lh, lb, lhu, lbu; sw, sh, sb, no
	output [1:0] AddrException
    );
	
	reg [31:0] DataMemory [4095:0];
    integer i;

    initial begin
        for(i=0; i<4096; i=i+1)
            DataMemory[i] <= 32'b0;
    end

	`define lw  4'b0000
	`define sw  4'b0001
	`define lh  4'b0010
	`define lb  4'b0011
	`define lhu 4'b0100
	`define lbu 4'b0101
	`define sh  4'b0110
	`define sb  4'b0111
	
	`define no  4'b1000

	assign Read = DataMemory[Addr[13:2]];
	// don't store COUNTER !
    assign AddrWrongRange = ~( ((Addr >= 32'h00000000)&(Addr <= 32'h00002fff)) | ((Addr >= 32'h00007F00)&(Addr <= 32'h00007F07)) | ((Addr >= 32'h00007F10)&(Addr <= 32'h00007F17)) );
	assign AddrWrongWORD = ( (Addr[1:0]!=2'b00) | AddrWrongRange );
	assign WORD = (code==`sw) | (code==`lw);
	assign Save = (code==`sw);
	assign AddrException = (Save & WORD & AddrWrongWORD) ? (2'b11) : ((WORD & AddrWrongWORD) ? 2'b10 : 2'b00);

    assign hitDM = ((Addr >= 32'h00000000) & (Addr <= 32'h00002fff));

    always @(posedge clk) begin
        if(reset) begin
            for(i=0; i<4096; i=i+1)
				DataMemory[i] <= 32'b0;
        end
        else begin
		
            if(WE) begin
				if((~AddrException))
					$display("%d@%h: *%h <= %h", $time, PCnow, Addr, WD);
                if(hitDM & (~AddrException)) begin
					DataMemory[Addr[13:2]] <= WD;
					//$display("%d@%h: *%h <= %h", $time, PCnow, Addr, WD);
				end
            end

        end
    end
	

endmodule
