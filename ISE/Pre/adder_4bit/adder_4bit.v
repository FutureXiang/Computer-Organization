`timescale 1ns / 1ps

module adder(
    input [3:0] A,
    input [3:0] B,
    input Clk,
    input En,
    output [3:0] Sum,
    output Overflow
    );
	
	reg [3:0] a,b;
	initial
	begin
		a = 4'b0;
		b = 4'b0;
	end
	// 延迟更新（输入）用寄存器
	always@(posedge Clk)
	begin
		if (En)
		begin
			a = A;
			b = B;
		end
	end
	
	wire [3:0] result;
	wire [3:0] tmp;
	// 用wire不用reg，相当于一个大的组合电路
	Adder_1bit bit0(.A(a[0]), .B(b[0]), .FlowIn(0),       .Sum(result[0]), .Overflow(tmp[0]));
	Adder_1bit bit1(.A(a[1]), .B(b[1]), .FlowIn(tmp[0]),  .Sum(result[1]), .Overflow(tmp[1]));
	Adder_1bit bit2(.A(a[2]), .B(b[2]), .FlowIn(tmp[1]),  .Sum(result[2]), .Overflow(tmp[2]));
	Adder_1bit bit3(.A(a[3]), .B(b[3]), .FlowIn(tmp[2]),  .Sum(result[3]), .Overflow(tmp[3]));
	assign Overflow = tmp[3];
	assign Sum = result;
endmodule

module Adder_1bit(
    input A,
    input B,
	input FlowIn,
    output Sum,
    output Overflow
    );
	// 组合逻辑
	assign {Overflow, Sum} = A + B + FlowIn;
endmodule
