`timescale 1ns / 1ps

module MemExceptionDetect(
    input [31:0] Addr,
    input [3:0] code,
    output [1:0] AddrException
    );

    `define lw__  4'b0000
	`define sw__  4'b0001
	`define lh__  4'b0010
	`define lb__  4'b0011
	`define lhu__ 4'b0100
	`define lbu__ 4'b0101
	`define sh__  4'b0110
	`define sb__  4'b0111
	`define no__  4'b1000

	assign WORD = (code==`sw__) | (code==`lw__);
	assign HALF = (code==`sh__) | (code==`lh__) | (code==`lhu__);
	assign BYTE = (code==`sb__) | (code==`lb__) | (code==`lbu__);
	assign Save = (code==`sw__) | (code==`sh__) | (code==`sb__);
	assign Load = (code==`lw__) | (code==`lh__) | (code==`lhu__) | (code==`lb__) | (code==`lbu__) ;
	
	// ==================== Exception
	assign hit_DEV1 = (Addr>=32'h00007F00 & Addr<=32'h00007F0B);
	assign hit_DEV2 = (Addr>=32'h00007F10 & Addr<=32'h00007F1B);

    assign AddrWrongRange = ~( ((Addr >= 32'h00000000)&(Addr <= 32'h00002ffc)) | ((Addr >= 32'h00007F00)&(Addr <= 32'h00007F0B)) | ((Addr >= 32'h00007F10)&(Addr <= 32'h00007F1B)) );
	assign AddrWrongWORD = ( (Addr[1:0]!=2'b00) | AddrWrongRange );
	assign AddrWrongHALF = ( (Addr[0]!=1'b0)    | AddrWrongRange );
	assign AddrWrongBYTE = AddrWrongRange;	

	assign AddrException = ( Save & ( (WORD & AddrWrongWORD) | (HALF & AddrWrongHALF) | (BYTE & AddrWrongBYTE) | (Addr==32'h00007F08 | Addr==32'h00007F18) | ((HALF|BYTE)&(hit_DEV1|hit_DEV2)) ) ) ? (2'b11) :
						   ( Load & ( (WORD & AddrWrongWORD) | (HALF & AddrWrongHALF) | (BYTE & AddrWrongBYTE) | ((HALF|BYTE)&(hit_DEV1|hit_DEV2)) )   ? (2'b10) :  (2'b00) );



endmodule
