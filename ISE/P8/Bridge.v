`timescale 1ns / 1ps
module Bridge(
	input CLK,
	input RST,
	
	// CPU operations on device
    input [31:0] CPU_Addr,
	input [31:0] CPU_WD,
	output [31:0] CPU_RD,
	input DEV_WE,
	output [5:0] HWInt,

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

	wire [1:0] DEV1_Addr;
	wire [2:0] DEV2_Addr, DEV3_Addr, DEV5_Addr;
	wire [31:0] DEV1_RD, DEV2_RD, DEV3_RD, DEV4_RD, DEV5_RD, DEV6_RD;
	wire DEV1_WE, DEV2_WE, DEV4_WE, DEV5_WE;
	wire DEV1_Int, DEV2_Int;


	assign hit_DEV1 = (CPU_Addr>=32'h00007F00 && CPU_Addr<=32'h00007F0B);	// Timer:	3 Regs
	assign hit_DEV2 = (CPU_Addr>=32'h00007F10 && CPU_Addr<=32'h00007F2B);	// UART:	7 Regs
	assign hit_DEV3 = (CPU_Addr>=32'h00007F2C && CPU_Addr<=32'h00007F33);	// 64 Switches
	assign hit_DEV4 = (CPU_Addr>=32'h00007F34 && CPU_Addr<=32'h00007F37);	// 32b LED
	assign hit_DEV5 = (CPU_Addr>=32'h00007F38 && CPU_Addr<=32'h00007F3F);	// 4+4+1 Digital Tubes
	assign hit_DEV6 = (CPU_Addr>=32'h00007F40 && CPU_Addr<=32'h00007F43);	// 8 User Buttons
	`define NO_HIT_RD 32'hffffffff
	
	assign CPU_RD = hit_DEV1 ? DEV1_RD : (hit_DEV2 ? DEV2_RD : ( hit_DEV3 ? DEV3_RD : ( hit_DEV4 ? DEV4_RD : ( hit_DEV5 ? DEV5_RD : ( hit_DEV6 ? DEV6_RD : `NO_HIT_RD ) ) ) ) );
	assign DEV1_Addr = CPU_Addr[3:0] / 4;	// 0 for CTRL, 1 for PRESET, 2 for COUNT
	assign DEV2_Addr = (CPU_Addr[7:0] - 8'h10) / 4;	// 0~6 for 7 32bit Regs
	assign DEV3_Addr = (CPU_Addr[7:0] - 8'h2c);		// 0~7 for switch group 0~7
	assign DEV5_Addr = (CPU_Addr[7:0] - 8'h38);		// 0~7 for 8 bytes

	assign DEV1_WE = DEV_WE & hit_DEV1;
	assign DEV2_WE = DEV_WE & hit_DEV2;
	assign DEV4_WE = DEV_WE & hit_DEV4;
	assign DEV5_WE = DEV_WE & hit_DEV5;
	
	assign HWInt = {4'd0, DEV2_Int, DEV1_Int};
	
	wire ack_uart;
	Timer  Timer1 (CLK, RST, DEV1_Addr, DEV1_WE, CPU_WD,     DEV1_RD, DEV1_Int);
	MiniUART MiniUART (DEV2_Addr, CPU_WD, DEV2_RD, hit_DEV2, DEV2_WE, CLK, RST, ack_uart, uart_rxd, uart_txd, DEV2_Int);
	Switches Switches (CLK, RST, dip_switch7, dip_switch6, dip_switch5, dip_switch4,
								 dip_switch3, dip_switch2, dip_switch1, dip_switch0,
								 DEV3_Addr, DEV3_RD);
	LED LED (CLK, RST, DEV4_WE, CPU_WD, DEV4_RD);
	assign led_light = DEV4_RD;
	Digital Digital (CLK, RST, DEV5_WE, CPU_WD, DEV5_Addr, DEV5_RD,
						digital_tube2, digital_tube_sel2,
						digital_tube1, digital_tube_sel1,
						digital_tube0, digital_tube_sel0);
	Buttons Buttons (CLK, RST, user_key, DEV6_RD);

endmodule
