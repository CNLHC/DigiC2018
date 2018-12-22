module GoldenTop(
     input Sys_CLK,
	 input Sys_RST,
	 input [1:0]Key,
	 output [7:0]SEG,
	 output [1:0]COM,
	 output [3:0]LED,
     input [1:0]Switch
	 );
     wire GlobalRst;
     wire _GlobalRst;
     assign _GlobalRst = Sys_RST;
     assign GlobalRst = ~Sys_RST;
	 
     wire [1:0]stableKey;
     wire [3:0]tDisplayData;
     wire [3:0]scanOutData;
     wire [4:0]lamb;
     wire [2:0]counter;
     wire lambTikTok;
     wire [7:0]counterLiteral;
     	 
     keyStabilizer#(.relaxTimeInMs(100))U1(
         .sysClk(Sys_CLK),
         .sysRst(GlobalRst),
         .rawKey(Key),
         .stableKey(stableKey));
     
     scanComDriver SCD1(
         .sysClk(Sys_CLK),
         .data1(counterLiteral),
         .data2({1'b0,1'b0,lamb,1'b0}),
         .COM(COM),
         .boundedData(SEG));
     
     digitDecoder dDec(
         .data({1'b0,counter}),
         .HEX(counterLiteral));


     clockGenerator cGo(
         .sysClk(Sys_CLK),
         .sysRst(GlobalRst),
         .togglePause(stableKey[0]),
         .manualClk(stableKey[1]),
         .dividerCoeff(Switch),
         .tiktok(lambTikTok)
     );

     //lamb5Control l5C(
     //    .trigger(lambTikTok),
     //    .sysRst(GlobalRst),
     //    .lamb(lamb),
     //    .counter(counter)
     //);
     lamb5FSMControl l5C(
       .trigger(lambTikTok),
       .sysRst(GlobalRst),
       .lamb(lamb),
       .counter(counter)
       );
		wire[99:0]lamb100;
		wire[6:0]counter100;
	   lamb100Control l100C(
       .trigger(lambTikTok),
       .sysRst(GlobalRst),
       .lamb(lamb100),
       .counter(counter100)
       );

     assign LED={lambTikTok,Switch[1],Switch[0],1'b1};

endmodule
