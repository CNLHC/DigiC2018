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
     wire [7:0]counter;
     wire realClock;
     wire [7:0]counterLiteral;

     	 
     
     scanComDriver SCD1(
         .sysClk(Sys_CLK),
         .data1(8'd1),
         .data2(8'd1),
         .COM(COM),
         .boundedData(SEG));
     
     digitDecoder dDec(
         .data(),
         .HEX());

     RealClockGenerator#(500) RcG1(
         .sysClk(Sys_CLK),
         .sysRst(GlobalRst),
         .dividedClock( realClock));




     reg TxValid;
     wire TxReady;
     reg [7:0]TxData;
     reg LambSended;
     reg [2:0]LambTxCounter;
     reg [2:0]TxTik;
     wire [1:0]TxFsm;
     reg heartBeatSendFlag;
     wire [7:0] RxData;
     reg [7:0]PreRxData;
     wire RxValid;
     reg RxReady;
     wire [10:0]RxCount;



     Uart UartController1(
         .sysClk(Sys_CLK),
         .sysRst(GlobalRst),
         .Rx(Uart_Rx),
         .Tx(Uart_Tx),
         .TxData(TxData),
         .TxData_valid(TxValid),
         .TxData_ready(TxReady),
         .debugTxFsm(TxFsm),
         .RxData(RxData),
         .RxData_valid(RxValid),
         .RxData_ready(RxReady),
         .RxFIFOFillLevel(RxCount)
     );

     integer nsIter;
     reg [10:0]ResponseFSM;
     reg [10:0]errorCount;
     reg [10:0]ReturnCount;
     reg[7:0] RxBuffered;
     reg PacketFSM;


     always @(posedge Sys_CLK or posedge GlobalRst) begin
         if(GlobalRst)begin
             LambTxCounter<=0;
             LambSended<=0;
             nsIter<=0;
             TxTik<=0;
             heartBeatSendFlag=0;
             TxData<=8'hC8;
             ResponseFSM<=0;
             errorCount<=0;
             ReturnCount<=0;
             RxReady<=0;
         end
         else begin
             //case(ResponseFSM)
             //    0:begin
             //        TxValid<=0;
             //        if(RxValid) begin
             //            RxBuffered<=RxData;
             //            if(RxData==8'h30||
             //               RxData==8'h31||
             //               RxData==8'h32||
             //               RxData==8'h33||
             //               RxData==8'h34||
             //               RxData==8'h35||
             //               RxData==8'h36||
             //               RxData==8'h37||
             //               RxData==8'h38||
             //               RxData==8'h39)
             //               ResponseFSM<=2;
             //           else
             //               ResponseFSM<=1;
             //        end
             //    end


             //    1:begin
             //        if(errorCount<=5)begin
             //            errorCount<=errorCount+1;
             //            TxValid<=1;

             //            case(errorCount)
             //                0:TxData<=8'h65;
             //                1:TxData<=8'h72;
             //                2:TxData<=8'h72;
             //                3:TxData<=8'h6F;
             //                4:TxData<=8'h72;
             //                5:TxData<=8'h0a;
             //            endcase
             //        end
             //        else begin
             //            TxValid<=0;
             //            errorCount<=0;
             //            ResponseFSM<=0;
             //        end
             //    end
             //    2:begin
             //        if(ReturnCount<=8)begin
             //            ReturnCount<=ReturnCount+1;
             //            TxValid<=1;

             //            case(ReturnCount)
             //                0:TxData<=8'h72;
             //                1:TxData<=8'h65;
             //                2:TxData<=8'h74;
             //                3:TxData<=8'h75;
             //                4:TxData<=8'h72;
             //                5:TxData<=8'h6e;
             //                6:TxData<=8'h3A;
             //                7:TxData<=RxBuffered;
             //                8:TxData<=8'h0a;
             //            endcase
             //        end
             //        else begin
             //            TxValid<=0;
             //            ReturnCount<=0;
             //            ResponseFSM<=0;
             //        end
             //    end
             //endcase
             case (PacketFSM)
                 0:begin
                     if(RxCount>=10&&RxValid)begin
                         RxReady<=1;
                         TxValid<=1;
                     end
                     if(RxValid)
                         TxData<=RxData;
                     if(RxCount==1&&RxReady)begin
                         TxValid<=0;
                         RxReady<=0;
                         PacketFSM<=1;
                     end
                 end
                 1:begin
                     PacketFSM<=0;
                 end
             endcase
         end
     end
     assign LED[0]=realClock;
     assign LED[3:1]=3'b101;

endmodule

