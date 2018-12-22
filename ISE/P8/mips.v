`timescale 1ns / 1ps

module mips(
	input clk,
    input reset
    );

	wire [31:0] CPU_Addr, CPU_WD, CPU_RD;
	wire [5:0] HWInt;
	wire DEV_WE;

	wire clk1, clk2;

	Clock The_Main_Clock (.CLK_IN1(clk), .CLK_OUT1(clk1), .CLK_OUT2(clk2));

	CPU CPU (CPU_Addr, CPU_WD, CPU_RD, DEV_WE,
			HWInt,
			clk1, clk2, reset);
	
	Bridge Bridge (clk1, reset,
					CPU_Addr, CPU_WD, CPU_RD, DEV_WE,
					HWInt);

endmodule
