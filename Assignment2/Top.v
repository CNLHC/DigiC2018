module GoldenTop(
     input Sys_CLK,
	 input Sys_RST,
	 input [1:0]Key,
	 output [7:0]SEG,
	 output [1:0]COM,
	 output [3:0]LED
	 );
	 
wire [1:0]stableKey;
wire [3:0]tDisplayData;
wire [3:0]scanOutData;
wire [3:0]F;
wire [1:0]P;
	 
keyStabilizer#(.relaxTimeInMs(100))U1(
    .sysClk(Sys_CLK),
    .sysRst(Sys_RST),
    .rawKey(Key),
    .stableKey(stableKey));

dataGenerator dG2(
    .sysRst(Sys_RST),
    .key(stableKey),
    .data(tDisplayData));

scanComDriver SCD1(
    .sysClk(Sys_CLK),
    .data1(F),
    .data2(tDisplayData),
    .COM(COM),
    .boundedData(scanOutData));

digitDecoder dDec(
    .data(scanOutData),
    .HEX(SEG));

RTLToFloat RTF(
    .sysRst(Sys_RST),
    .sysClk(Sys_CLK),
    ._D(tDisplayData),
    .F(F),
    .P(P));
    


//GateToFloat GTF(
//    ._D(tDisplayData),
//    .F(F),
//    .P(P));

//PureGateToFloat GTF(
//    ._D(tDisplayData),
//    .F(F),
//    .P(P));


assign LED={0,0,P[1],P[0]};

endmodule
