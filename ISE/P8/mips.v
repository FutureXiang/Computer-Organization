`timescale 1ns / 1ps

module mips(
	// system clock & reset
	input clk_in,
    input sys_rstn,

	// uart interface
	input uart_rxd,
	output uart_txd,

	// DIP switch
	input [7:0] dip_switch0,
	input [7:0] dip_switch1,
	input [7:0] dip_switch2,
	input [7:0] dip_switch3,
	input [7:0] dip_switch4,
	input [7:0] dip_switch5,
	input [7:0] dip_switch6,
	input [7:0] dip_switch7,

	// user keys
	input [7:0] user_key,

	// LED lights
	output [31:0] led_light,

	// Digital Tube
	output [7:0] digital_tube2,
	output digital_tube_sel2,
	output [7:0] digital_tube1,
	output [3:0] digital_tube_sel1,
	output [7:0] digital_tube0,
	output [3:0] digital_tube_sel0
    );

	wire [31:0] CPU_Addr, CPU_WD, CPU_RD;
	wire [5:0] HWInt;
	wire DEV_WE;

	wire clk1, clk2;

	Clock The_Main_Clock (.CLK_IN1(clk_in), .CLK_OUT1(clk1), .CLK_OUT2(clk2));

	CPU CPU (CPU_Addr, CPU_WD, CPU_RD, DEV_WE,
			HWInt,
			clk1, clk2, sys_rstn);
	
	Bridge Bridge (clk1, sys_rstn,
					CPU_Addr, CPU_WD, CPU_RD, DEV_WE,
					HWInt,
					user_key,
					dip_switch7, dip_switch6, dip_switch5, dip_switch4,
					dip_switch3, dip_switch2, dip_switch1, dip_switch0);

endmodule
