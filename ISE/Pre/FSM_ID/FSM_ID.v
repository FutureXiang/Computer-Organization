`timescale 1ns / 1ps

module id_fsm(
    input [7:0] char,
    input clk,
    output reg out = 0
    );
	
	integer state = 0;
	
	wire digit_flag;
	is_digit DIGIT(.char(char), .flag(digit_flag));
	wire alpha_flag;
	is_alpha ALPHA(.char(char), .flag(alpha_flag));
	
	always@(posedge clk) begin
		case(state)
		0:
			begin
				state = (alpha_flag==1)?1:0;
				out <= 0;
			end
		1:
			begin
				if(alpha_flag==1) begin
					state = 1;
					out <= 0;
				end
				else if(digit_flag==1) begin
					state = 2;
					out <= 1;
				end
				else begin
					state = 0;
					out <= 0;
				end
			end
		2:
			begin
				if(digit_flag==1) begin
					state = 2;
					out <= 1;
				end
				else if(alpha_flag==1) begin
					state = 1;
					out <= 0;
				end
				else begin
					state = 0;
					out <= 0;
				end
			end
		endcase
	end



endmodule



module is_digit(
	input [7:0] char,
	output reg flag
	);
	always@(char) begin
		if(char>=8'b00110000 && char<=8'b00111001)
			flag <= 1;
		else
			flag <= 0;
	end
endmodule
module is_alpha(
	input [7:0] char,
	output reg flag
	);
	always@(char) begin
		if((char>=8'b01000001 && char<=8'b01011010) || (char>=8'b01100001 && char<=8'b01111010) )
			flag <= 1;
		else
			flag <= 0;
	end
endmodule
