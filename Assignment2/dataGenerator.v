`timescale 1ns / 1ps
module dataGenerator(
	 input sysRst,
    input [1:0]key,
    output reg [3:0]data
);
wire reduceKey;
assign reduceKey = key[1];
always @( posedge reduceKey or negedge sysRst) begin
    if(!sysRst)
        data<=0;
    else
		  data<=data+1;
end

endmodule

module testDataGenerator();
	reg sysRst;
	reg [1:0]key;
	wire [3:0]data;
	dataGenerator U1(
	.sysRst(sysRst),
	.key(key),
	.data(data));
	initial begin
	sysRst =1;
	key=0;
	#5 sysRst=0;
	#5 sysRst=1;
	#20 key[0]=1;
	#20 key[0]=0;
	#20 key[0]=1;
	#20 key[0]=0;
	#20 key[0]=1;
	#20 key[0]=0;
	#20 key[0]=1;
	#20 key[0]=0;
	end

endmodule
