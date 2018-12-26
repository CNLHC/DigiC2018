`timescale 1us/1ns
module GoldenTop(
     input Sys_CLK,
	 input Sys_RST,
	 input [1:0]Key,
	 output [7:0]SEG,
	 output [1:0]COM,
	 output [3:0]LED,
     input [1:0]Switch,
     output wire Uart_Tx,
     input wire Uart_Rx

	 );
     wire GlobalRst;
     wire _GlobalRst;
     assign _GlobalRst = Sys_RST;
     assign GlobalRst = ~Sys_RST;
	 
     wire [1:0]stableKey;
     wire [3:0]tDisplayData;
     wire [3:0]scanOutData;
     wire [103:0]lamb;
     wire [7:0]counter;
     wire lambTikTok;
     wire [7:0]counterLiteral;
     	 
     keyStabilizer#(.relaxTimeInMs(250))U1(
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

     //Basic 1: five lamp, use gate level
     //lamb5Control l5C(
     //    .trigger(lambTikTok),
     //    .sysRst(GlobalRst),
     //    .lamb(lamb),
     //    .counter(counter)
     //);
     //Basic 2: five lamp, use fsm level
     //lamb5FSMControl l5C(
     //  .trigger(lambTikTok),
     //  .sysRst(GlobalRst),
     //  .lamb(lamb[4:0]),
     //  .counter(counter)
     //  );
     //Basic 3: 100 lamp, use gate level
     //lamb100Control l100c(
     //  .trigger(lambTikTok),
     //  .sysRst(GlobalRst),
     //  .lamb(lamb),
     //  .counter(counter)
     //);
     //extry 1: 100 lamp, use 74160 and specific control logic
     extraLampControl eLc(
       .trigger(lambTikTok),
       .sysRst(GlobalRst),
       .lamb(lamb),
       .counter(counter));
        

     reg LambTxValid;
     wire LambTxReady;
     reg [7:0]LambTxData;
     reg LambSended;
     reg [2:0]LambTxCounter;
     reg [2:0]TxTik;
     wire [1:0]TxFsm;


     Uart UartController1(
         .sysClk(Sys_CLK),
         .sysRst(GlobalRst),
         .Rx(Uart_Rx),
         .Tx(Uart_Tx),
         .TxData(LambTxData),
         .TxData_valid(LambTxValid),
         .TxData_ready(LambTxReady),
         .debugTxFsm(TxFsm),
         .RxData(),
         .RxData_valid(),
         .RxData_ready()
     );
     integer nsIter;

     always @(posedge Sys_CLK or posedge GlobalRst) begin
         if(GlobalRst)begin
             LambTxCounter<=0;
             LambSended<=0;
             LambTxData<=8'hee;
             nsIter<=0;
             TxTik<=0;
         end
         else begin
             if(TxTik!=lambTikTok)begin
                TxTik<=lambTikTok;
                LambSended<=0;
            end

             if(!LambSended)begin
                 LambTxValid<=1;
                 LambSended<=1;
             end
            //for i in range(13,0,-1):
            //    print("%d:LambTxData<=lamb[%d:%d]"%(14-i,i*8-1,i*8-8))
             if(LambTxValid)begin
                 nsIter<=nsIter+1;
                 case(nsIter)
                     0:LambTxData<=counter;
                     1:LambTxData<=lamb[103:96];
                     2:LambTxData<=lamb[95:88];
                     3:LambTxData<=lamb[87:80];
                     4:LambTxData<=lamb[79:72];
                     5:LambTxData<=lamb[71:64];
                     6:LambTxData<=lamb[63:56];
                     7:LambTxData<=lamb[55:48];
                     8:LambTxData<=lamb[47:40];
                     9:LambTxData<=lamb[39:32];
                     10:LambTxData<=lamb[31:24];
                     11:LambTxData<=lamb[23:16];
                     12:LambTxData<=lamb[15:8];
                     13:LambTxData<=lamb[7:0];
                     14:LambTxData<=8'hee;
                     15:begin 
                         LambTxValid<=0;
                         nsIter<=0;
                     end
                 endcase
             end
         end
     end

     assign LED={lambTikTok,TxFsm[1],TxFsm[0],1'b1};
endmodule

module testGoldenTop();

     reg Sys_CLK;
	 reg Sys_RST;
	 reg [1:0]Key;
	 wire [7:0]SEG;
	 wire [1:0]COM;
	 wire [3:0]LED;
     reg [1:0]Switch;
     wire Uart_Tx;
     reg Uart_Rx;
     GoldenTop U1(
         Sys_CLK,
         Sys_RST,
         Key,
         SEG,
         COM,
         LED,
         Switch,
          Uart_Tx,
         Uart_Rx);
     initial begin
         Sys_RST=0;
         Sys_CLK=0;
         Switch=2'b01;
     end
     always begin
         #0.01
         Sys_CLK=~Sys_CLK;
     end





endmodule 
