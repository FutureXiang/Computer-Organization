`timescale 1ns / 1ps

module Digital(
    input CLK,
    input RST,
    input WE,
    input [31:0] WD,
    input [2:0] innerADDR,
    output [31:0] RD,

    output reg [7:0] digital_tube2,
	output reg digital_tube_sel2,
	output reg [7:0] digital_tube1,
	output reg [3:0] digital_tube_sel1,
	output reg [7:0] digital_tube0,
	output reg [3:0] digital_tube_sel0
    );

    reg [7:0] tube0_12; // offset 0
    reg [7:0] tube0_34; // offset 1
    reg [7:0] tube1_12; // offset 2
    reg [7:0] tube1_34; // offset 3
    reg [7:0] tube2;    // offset 4
    
    reg [7:0] counter;  // counter: 200 down to 0
    reg [3:0] data0, data1, data2; // data to be selected
    `define INIT_TIMER 8'd200

    assign RD = (innerADDR >= 3'd4) ? ({24'd0, tube2}) : ({tube1_34, tube1_12, tube0_34, tube0_12});

    always @(posedge CLK) begin
		if(RST) begin
            {tube1_34, tube1_12, tube0_34, tube0_12} <= 32'd0;
            tube2 <= 8'd0;
            
            counter <= `INIT_TIMER;
            data0 <= 4'd0;
            data1 <= 4'd0;
            data2 <= 4'd0;

            digital_tube_sel2 <= 0;
            digital_tube_sel1 <= 0;
            digital_tube_sel0 <= 0;
        end
        else begin
            if(WE) begin
                if(innerADDR >= 3'd4) begin
                    tube2 <= WD[7:0];
                end
                else begin
                    {tube1_34, tube1_12, tube0_34, tube0_12} <= WD;
                end
                counter <= `INIT_TIMER;
                digital_tube_sel0 <= 4'b0001;
                data0 <= tube0_12[7:0];
                digital_tube_sel1 <= 4'b0001;
                data1 <= tube1_12[7:0];
                digital_tube_sel2 <= 1'b1;
                data2 <= tube2[3:0];
            end
            else begin
                if(counter!=0)
                    counter <= counter - 1;
                else begin
                    counter <= `INIT_TIMER;
                    case (digital_tube_sel0)
                        4'b0001: begin
                            digital_tube_sel0 <= 4'b0010;
                            data0 <= tube0_12[7:4];
                        end
                        4'b0010: begin
                            digital_tube_sel0 <= 4'b0100;
                            data0 <= tube0_34[3:0];
                        end
                        4'b0100: begin
                            digital_tube_sel0 <= 4'b1000;
                            data0 <= tube0_34[7:4];
                        end
                        4'b1000: begin
                            digital_tube_sel0 <= 4'b0001;
                            data0 <= tube0_12[3:0];
                        end
                        default: begin
                            digital_tube_sel0 <= 0;
                            data0 <= 0;
                        end
                    endcase
                    case (digital_tube_sel1)
                        4'b0001: begin
                            digital_tube_sel1 <= 4'b0010;
                            data1 <= tube1_12[7:4];
                        end
                        4'b0010: begin
                            digital_tube_sel1 <= 4'b0100;
                            data1 <= tube1_34[3:0];
                        end
                        4'b0100: begin
                            digital_tube_sel1 <= 4'b1000;
                            data1 <= tube1_34[7:4];
                        end
                        4'b1000: begin
                            digital_tube_sel1 <= 4'b0001;
                            data1 <= tube1_12[3:0];
                        end
                        default: begin
                            digital_tube_sel1 <= 0;
                            data1 <= 0;
                        end
                    endcase
                    case (digital_tube_sel2)
                        1'b0: begin
                            digital_tube_sel2 <= 1'b1;
                        end
                        1'b1: begin
                            digital_tube_sel2 <= 1'b0;
                        end
                        default: begin
                            digital_tube_sel2 <= 0;
                            data2 <= 0;
                        end
                    endcase
                end
            end
        end
    end

    // -------------------- translate the NUMBERS in 5 regs to TUBE FORMAT
    
    `define dt0 7'b0000001
    `define dt1 7'b1001111
    `define dt2 7'b0010010
    `define dt3 7'b0000110
    `define dt4 7'b1001100
    `define dt5 7'b0100100
    `define dt6 7'b0100000
    `define dt7 7'b0001111
    `define dt8 7'b0000000
    `define dt9 7'b0000100
    `define dtA 7'b0001000
    `define dtB 7'b1100000
    `define dtC 7'b0110001
    `define dtD 7'b1000010
    `define dtE 7'b0110000
    `define dtF 7'b0111000

    always@(*) begin
        case (data0)
            4'h0: digital_tube0 = {1'b1, `dt0};
            4'h1: digital_tube0 = {1'b1, `dt1};
            4'h2: digital_tube0 = {1'b1, `dt2};
            4'h3: digital_tube0 = {1'b1, `dt3};
            4'h4: digital_tube0 = {1'b1, `dt4};
            4'h5: digital_tube0 = {1'b1, `dt5};
            4'h6: digital_tube0 = {1'b1, `dt6};
            4'h7: digital_tube0 = {1'b1, `dt7};
            4'h8: digital_tube0 = {1'b1, `dt8};
            4'h9: digital_tube0 = {1'b1, `dt9};
            4'hA: digital_tube0 = {1'b1, `dtA};
            4'hB: digital_tube0 = {1'b1, `dtB};
            4'hC: digital_tube0 = {1'b1, `dtC};
            4'hD: digital_tube0 = {1'b1, `dtD};
            4'hE: digital_tube0 = {1'b1, `dtE};
            4'hF: digital_tube0 = {1'b1, `dtF};
        endcase
    end
    always@(*) begin
        case (data1)
            4'h0: digital_tube1 = {1'b1, `dt0};
            4'h1: digital_tube1 = {1'b1, `dt1};
            4'h2: digital_tube1 = {1'b1, `dt2};
            4'h3: digital_tube1 = {1'b1, `dt3};
            4'h4: digital_tube1 = {1'b1, `dt4};
            4'h5: digital_tube1 = {1'b1, `dt5};
            4'h6: digital_tube1 = {1'b1, `dt6};
            4'h7: digital_tube1 = {1'b1, `dt7};
            4'h8: digital_tube1 = {1'b1, `dt8};
            4'h9: digital_tube1 = {1'b1, `dt9};
            4'hA: digital_tube1 = {1'b1, `dtA};
            4'hB: digital_tube1 = {1'b1, `dtB};
            4'hC: digital_tube1 = {1'b1, `dtC};
            4'hD: digital_tube1 = {1'b1, `dtD};
            4'hE: digital_tube1 = {1'b1, `dtE};
            4'hF: digital_tube1 = {1'b1, `dtF};
        endcase
    end
    always@(*) begin
        case (data2)
            4'h0: digital_tube2 = {1'b1, `dt0};
            4'h1: digital_tube2 = {1'b1, `dt1};
            4'h2: digital_tube2 = {1'b1, `dt2};
            4'h3: digital_tube2 = {1'b1, `dt3};
            4'h4: digital_tube2 = {1'b1, `dt4};
            4'h5: digital_tube2 = {1'b1, `dt5};
            4'h6: digital_tube2 = {1'b1, `dt6};
            4'h7: digital_tube2 = {1'b1, `dt7};
            4'h8: digital_tube2 = {1'b1, `dt8};
            4'h9: digital_tube2 = {1'b1, `dt9};
            4'hA: digital_tube2 = {1'b1, `dtA};
            4'hB: digital_tube2 = {1'b1, `dtB};
            4'hC: digital_tube2 = {1'b1, `dtC};
            4'hD: digital_tube2 = {1'b1, `dtD};
            4'hE: digital_tube2 = {1'b1, `dtE};
            4'hF: digital_tube2 = {1'b1, `dtF};
        endcase
    end

endmodule
