`timescale 1ns / 1ps

module LoadMem(
    input [31:0] RawData,
    input [1:0] Alower,
    input [3:0] MemCode,
    output [31:0] TrueData
    );

    `define lw__  4'b0000
	`define lh__  4'b0010
	`define lb__  4'b0011
	`define lhu__ 4'b0100
	`define lbu__ 4'b0101

	assign WORD = (MemCode==`lw__);
	assign HALF = (MemCode==`lh__) | (MemCode==`lhu__);
	assign BYTE = (MemCode==`lb__) | (MemCode==`lbu__);
    // ==================== Read (Load)

	wire [31:0] ReadWORD = RawData ;

	wire [15:0] ReadHALF00 = ReadWORD[15:0];
	wire [15:0] ReadHALF10 = ReadWORD[31:16];
	wire [15:0] ReadHALF_temp = (Alower==2'b00) ? ReadHALF00 : ReadHALF10 ;
	wire [31:0] ReadHALF_signed     = { {16{ReadHALF_temp[15]}} , ReadHALF_temp };
	wire [31:0] ReadHALF_unsigned   = { 16'b0                   , ReadHALF_temp };
	wire [31:0] ReadHALF = (MemCode==`lh__) ? ReadHALF_signed : ReadHALF_unsigned ;

	wire [7:0] ReadBYTE00 = ReadWORD[7:0];
	wire [7:0] ReadBYTE01 = ReadWORD[15:8];
	wire [7:0] ReadBYTE10 = ReadWORD[23:16];
	wire [7:0] ReadBYTE11 = ReadWORD[31:24];
	wire [7:0] ReadBYTE_temp  = (Alower==2'b00) ? ReadBYTE00 : 
					  			( (Alower==2'b01) ? ReadBYTE01 :
					  			( (Alower==2'b10) ? ReadBYTE10 : ReadBYTE11 ) );
	wire [31:0] ReadBYTE_signed     = { {24{ ReadBYTE_temp[7]}} , ReadBYTE_temp}; 
	wire [31:0] ReadBYTE_unsigned   = { 24'b0                   , ReadBYTE_temp}; 
	wire [31:0] ReadBYTE = (MemCode==`lb__) ? ReadBYTE_signed : ReadBYTE_unsigned ;

	assign TrueData = (WORD) ? (ReadWORD) : ( (HALF) ? (ReadHALF) : ( (BYTE) ? ReadBYTE : RawData ) ) ;



endmodule
