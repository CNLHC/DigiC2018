`timescale 1ns / 1ps
//`define relaxCycle relaxTimeInMs*50*1000 // under clock at 50Mhz
`define relaxCycle 3

module keyStabilizer #(
	parameter relaxTimeInMs=20)(
	input sysClk,
	input sysRst,
	input [1:0]rawKey,
	output [1:0]stableKey);
	reg [1:0]keyFlag;
	
	reg [32:0]counts[0:1];
	
	always @(posedge sysClk or negedge  sysRst)
	begin
		if(!sysRst)begin
			counts[0]<=0;
			keyFlag[0]<=0;
		end
		else begin
			if(counts[0]<`relaxCycle)
				counts[0]<=counts[0]+1;
			else begin
				keyFlag[0]<=rawKey[0];
				counts[0]<=0;
			end
		end
	end
	always @(posedge sysClk or negedge sysRst)
	begin
		if(!sysRst)begin
			counts[1]<=0;
			keyFlag[1]<=0;
		end
		else begin
			if(counts[1]<`relaxCycle)
				counts[1]<=counts[1]+1;
			else begin
				keyFlag[1]<=rawKey[1];
				counts[1]<=0;
			end
		end
	end
	assign stableKey[0]=rawKey[0] & keyFlag[0];
	assign stableKey[1]=rawKey[1] & keyFlag[1];
endmodule

module testKeyStabilizer();
	reg sysClk;
	reg sysRst;
	reg [1:0]rawKey;
	wire [1:0]stableKey;
    keyStabilizer U1(
        .sysClk(sysClk),
        .sysRst(sysRst),
        .rawKey(rawKey),
        .stableKey(stableKey));
    initial begin
        sysClk = 0;
        sysRst = 1;
    #5  sysRst =0;
	 #5  sysRst =1;
    #20  rawKey = 3;
    #1  rawKey=0;
    #1  rawKey=3;
	 #1  rawKey=0;
    #1  rawKey=3;
	 #1  rawKey=0;
    #1  rawKey=3;
    #50  rawKey  = 0;
    #50  rawKey  = 3;
    #50  rawKey  = 0;
    end
    always begin 
    #1 sysClk = ~sysClk;
    end
endmodule
