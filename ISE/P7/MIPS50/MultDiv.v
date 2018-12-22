`timescale 1ns / 1ps

module MultDiv(
    input [31:0] PCnow,
    input clk,
    input [31:0] A,
    input [31:0] B,
    input start,
    input [1:0] Op,                 // 00: mult, 01: multu;   10: div, 11: divu .
    output reg BUSY,
    output reg [31:0] HI,
    output reg [31:0] LO,
    input [31:0] WD,
    input [1:0] WE,                // 00: no;    01: HI, 10: LO .
    input restoreHILO,              // ReStore HI / LO values, when "MTHI/MTLO" is at EX/MEM while an INT occured !
    input cancelCALC                // Cancel Mult / Multu / Div / Divu, when it is at EX/MEM while an INT occured !
    );

    reg [31:0] PC;
    reg [3:0] counter;
    reg [3:0] goal;
    reg [31:0] sA, sB;

    reg [31:0] resHI, resLO;

    wire [63:0] MultU = ($unsigned(A) * $unsigned(B)), MultS = ($signed(A) * $signed(B));

    initial begin
        counter <= 0;
        goal <= 0;
        sA <= 0;
        sB <= 0;
        HI <= 0;
        LO <= 0;
        BUSY <= 0;
        PC <= 32'h00003000;
        resHI <= 0;
        resLO <= 0;
    end


    always@(posedge clk) begin
        if(restoreHILO) begin
            HI <= resHI;
            LO <= resLO;
            // $display("%d@%h: $HI <= %h (restore)", $time, PCnow, resHI);
            // $display("%d@%h: $LO <= %h (restore)", $time, PCnow, resLO);
        end


        if(WE!=2'b00) begin
            if(WE==2'b01) begin
                resHI <= HI;
                HI <= WD;
                resLO <= LO;
                // $display("%d@%h: $HI <= %h (mtHI)", $time, PCnow, WD);
            end
            else if(WE==2'b10) begin
                resHI <= HI;
                resLO <= LO;
                LO <= WD;
                // $display("%d@%h: $LO <= %h (mtLO)", $time, PCnow, WD);
            end
        end
        else if(start) begin
            if(Op[1]==0)
                goal <= 5;
            else
                goal <= 10;
            counter <= 0;
            BUSY <= 1;
            PC <= PCnow;
            case (Op)
                2'b00 : begin            // mult Signed
                    sA = MultS[63:32];
                    sB = MultS[31:0];
                end
                2'b01 : begin           // mult Unsigned
                    sA = MultU[63:32];
                    sB = MultU[31:0];
                end
                2'b10 : begin            // div Signed
                    if(B==32'd0) begin
                        sA = 0;
                        sB = 0;
                    end
                    else begin
                        sA = ($signed(A) % $signed(B));
                        sB = ($signed(A) / $signed(B));
                    end
                end
                2'b11 : begin           // div Unsigned
                    if(B==32'd0) begin
                        sA = 0;
                        sB = 0;
                    end
                    else begin
                        sA = ($unsigned(A) % $unsigned(B));
                        sB = ($unsigned(A) / $unsigned(B));
                    end
                end
            endcase
        end
        else if(BUSY) begin
            if(cancelCALC) begin
                BUSY <= 0;
            end
            else begin
                counter <= counter + 1;
                if(counter == goal-1) begin
                    BUSY <= 0;
                    // $display("%d@%h: $HI <= %h , $LO <= %h", $time, PC, sA, sB);
                    HI <= sA;
                    LO <= sB;
                    resHI <= HI;
                    resLO <= LO;
                end
            end
        end
    end
    

endmodule
