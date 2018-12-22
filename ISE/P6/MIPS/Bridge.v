`timescale 1ns / 1ps
module Bridge(
	input CLK,
	input RST,
	
    input [31:0] CPU_Addr,
	//output [1:0] DEV_Addr,
    
	input [31:0] CPU_WD,
	
    //input [31:0] DEV1_RD,
    //input [31:0] DEV2_RD,
	output [31:0] CPU_RD,
	
	input DEV_WE,
	//output DEV1_WE,
	//output DEV2_WE,
	
	//input DEV1_Int,
	//input DEV2_Int,
	output [5:0] HWInt
    );

	wire [1:0] DEV_Addr;
	wire [31:0] DEV1_RD, DEV2_RD;
	wire DEV1_WE, DEV2_WE;
	wire DEV1_Int, DEV2_Int;


	assign hit_DEV1 = (CPU_Addr>=32'h00007F00 && CPU_Addr<=32'h00007F0B);
	assign hit_DEV2 = (CPU_Addr>=32'h00007F10 && CPU_Addr<=32'h00007F1B);
	`define NO_HIT_RD 32'hffffffff
	
	assign CPU_RD = hit_DEV1 ? DEV1_RD : (hit_DEV2 ? DEV2_RD : `NO_HIT_RD);
	assign DEV_Addr = CPU_Addr[3:0] / 4;	// 0 for CTRL, 1 for PRESET, 2 for COUNT

	assign DEV1_WE = DEV_WE & hit_DEV1;
	assign DEV2_WE = DEV_WE & hit_DEV2;
	
	assign HWInt = {4'b0, DEV2_Int, DEV1_Int};
	
	
	
	Timer  Timer1 (CLK, RST, DEV_Addr, DEV1_WE, CPU_WD,     DEV1_RD, DEV1_Int);
	Timer  Timer2 (CLK, RST, DEV_Addr, DEV2_WE, CPU_WD,     DEV2_RD, DEV2_Int);

endmodule
