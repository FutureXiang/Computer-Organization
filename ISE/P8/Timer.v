`timescale 1ns / 1ps

module Timer(
    input CLK,
    input RST,
    input [1:0] innerADDR,		// 0 for CTRL, 1 for PRESET, 2 for COUNT.  [ABS ADDR = base + innerADDR*4]
    input WE,
    input  [31:0] WD,
    output [31:0] RD,
    output reg IRQ
    );

	reg [31:0] CTRL, INIT, COUNT;
	integer STATE;
	`define IDLE 0
	`define LOAD 1
	`define CNT 2
	`define INT 3
	
	/*initial begin
		CTRL <= 0;
		INIT <= 0;
		COUNT <= 0;
		IRQ <= 0;
		STATE <= 0;
	end*/
	
	assign Enable = CTRL[0]; 	// 1 for enable counting
	assign Mode = CTRL[1];		// 0 for down to zero, 1 for continous
	assign IAllow = CTRL[3];	// 1 for allowing interrupt

	assign Write_ctrl = (WE==1 && innerADDR==0);
	assign Write_init = (WE==1 && innerADDR==1);
	
	assign RD = (innerADDR==0) ? CTRL : (innerADDR==1 ? INIT : COUNT);


	

	always @(posedge CLK) begin
		if(RST) begin
		    CTRL <= 0;
			INIT <= 0;
			COUNT <= 0;
			IRQ <= 0;
			STATE <= 0;
		end
		else if(Write_ctrl) begin
		    CTRL <= {28'b0, WD[3], 1'b0, WD[1:0]};
		end
		else if(Write_init) begin
		  	INIT <= WD;
		end
		else begin
			case (STATE)
			`IDLE: begin
				if(~IAllow) 
					IRQ <= 0;
				if(Enable) begin
					STATE <= `LOAD;
					IRQ <= 0;
				end
			end 
			`LOAD: begin
				if(~Enable) begin
					STATE <= `IDLE;
				end
				STATE <= `CNT;
				COUNT <= INIT;
			end
			`CNT: begin
				if(~Enable) begin
					STATE <= `IDLE;
				end
				else if(Enable==1 && COUNT<=1) begin
					if(Mode==0)
						CTRL <= ({CTRL[31:1], 1'b0}); // Enable <= 0;
					if(IAllow)
						IRQ <= 1;
					STATE <= `INT;
				end
				else
					COUNT <= COUNT - 1;
			end 
			`INT: begin
				STATE <= `IDLE;
				if((Mode==0 && (~IAllow)) || (Mode==1))
					IRQ <= 0;
			end 
			endcase
		end
	end

endmodule
