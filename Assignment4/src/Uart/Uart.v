`timescale 1us/1ns
module Uart#(
    parameter BAUD_RATE=9600,
    parameter CLK_SPEED=50000000
)(
    input sysClk,
    input sysRst,

    input Rx,
    output reg Tx,
    output wire [1:0]debugTxFsm,

    output [7:0]RxData,
    output RxData_valid,
    input RxData_ready,

    input [7:0]TxData,
    input TxData_valid,
    output TxData_ready,
    output [10:0]RxFIFOFillLevel
);

    wire UartClock;
    reg  [7:0] RxBufData;
    wire [7:0] TxBufData;

    wire RxFIFOReady;
    reg TxFIFOReady;

    reg RxFIFOValid;
    wire TxFIFOValid;

    BytesFifo RxFiFO(
        .sysClk(sysClk), 
        .sysRst(sysRst),
        //Rx-Sink
        .in_data(RxBufData),
        .in_data_valid(RxFIFOValid),
        .in_data_ready(RxFIFOReady),
        //Rx-Source
        .out_data(RxData),
        .out_data_ready(RxData_ready),
        .out_data_valid(RxData_valid),
        .full(),
        .empty(),
        .fillLevel(RxFIFOFillLevel)
    );

    BytesFifo TxFiFO(
        .sysClk(sysClk), 
        .sysRst(sysRst),
        //Tx-Sink
        .in_data(TxData),
        .in_data_valid(TxData_valid),
        .in_data_ready(TxData_ready),
        //Tx-Source
        .out_data(TxBufData),
        .out_data_ready(TxFIFOReady),
        .out_data_valid(TxFIFOValid),
        .full(),
        .empty(),
        .fillLevel()
    );

    UartClockGenerator #(
        BAUD_RATE,
        CLK_SPEED
    )clcGen(
        .sysClk(sysClk),
        .sysRst(sysRst),
        .dividedClock(UartClock));
            
    reg[2:0] RxBitCounter;
    reg[5:0] RxFsm;
    reg RxDataLatched;
    wire RXParity;

    //Rx Logic
    always @(posedge UartClock or posedge sysRst) begin
        if(sysRst)begin
            RxBitCounter<=0;
            RxFsm<=0;
        end
        else begin
            case (RxFsm)
                0:begin
                    RxBitCounter<=0;
                    if(!Rx)
                        RxFsm<=1;
                end
                1:begin
                    if(RxBitCounter<=7)begin
                        RxBufData[RxBitCounter]<=Rx;
                        if(RxBitCounter==7)begin
                            RxFsm<=2;
                            RxBitCounter<=0;
                        end
                        else
                            RxBitCounter<=RxBitCounter+1;
                    end
                end
                2:begin
                    RxFsm<=0;
                end
                3:begin
                    RxFsm<=0;
                end
            endcase
        end
    end
    always @(posedge sysClk) begin
        if(RxFsm==0)
            RxDataLatched<=0;

        if(RxFIFOValid)
            RxFIFOValid<=0;

        if(RxFsm==2 && (!RxDataLatched))begin
            RxFIFOValid<=1;
            RxDataLatched<=1;
        end
    end

    //Tx Logic
    wire TXParity;
    reg [2:0] TxBitCounter;
    reg [1:0] TxFsm;
    reg [7:0] TxLastBuffer;
    reg TxDataLatched;
    parity U1(TxLastBuffer,TXParity);
    assign debugTxFsm=TxFsm;
    always @(posedge UartClock or posedge sysRst) begin
        if(sysRst) begin
            TxFsm<=0;
            TxBitCounter<=0;
        end
        else begin
            case(TxFsm)
                0:begin// Waiting for send
                    if(TxDataLatched)begin
                        Tx<=0;
                        TxFsm<=1;
                    end
                    else
                        Tx<=1;
                end
                1:begin// Sending
                    if(TxBitCounter<=7)begin
                        Tx<=TxLastBuffer[TxBitCounter];
                        if(TxBitCounter==7)begin
                            TxBitCounter<=0;
                            TxFsm<=2;
                        end
                        else
                            TxBitCounter<=TxBitCounter+1;
                    end
                end
                2:begin// parity
                    Tx<=1;
                    TxFsm<=0;
                end
                //3:begin 
                //    Tx<=0;
                //    TxFsm<=0;
                //end

            endcase
        end
    end
    always @(posedge sysClk or posedge sysRst)begin
        if(sysRst)begin
            TxDataLatched<=0;
            TxFIFOReady<=0;
        end
        else begin
            case(TxFsm)
                0:begin
                    if(!TxDataLatched)begin
                        if(TxFIFOValid && TxFIFOReady )begin
                            TxLastBuffer<=TxBufData;
                            TxDataLatched<=1;
                            TxFIFOReady<=0;
                        end
                        else begin
                            TxFIFOReady<=1;
                            TxDataLatched<=0;
                        end
                    end
                end
                1:begin
                    TxFIFOReady<=0;
                    TxDataLatched<=0;
                end
                2:begin
                    TxFIFOReady<=0;
                end
            endcase
        end
    end
endmodule
module testUart();
    reg sysClk;
    reg sysRst;

    reg Rx;
    wire Tx;
    wire [1:0]debugTxFsm;

    wire [7:0]RxData;
    wire RxData_valid;
    reg RxData_ready;

    reg [7:0]TxData;
    reg TxData_valid;
    wire TxData_ready;
    wire [10:0]Fill;

    Uart #(
        2000000,
        50000000
    )U1(
        sysClk,
        sysRst,
        Rx,
        Tx,
        debugTxFsm,
        RxData,
        RxData_valid,
        RxData_ready,
        TxData,
        TxData_valid,
        TxData_ready,
        Fill
    );
    integer nsIter;
    initial begin
        sysRst=1;
        sysClk=1;
        #10 sysRst=0;
        for (nsIter=0;nsIter<10;nsIter=nsIter+1)begin
            #1
            TxData=8'haa+nsIter;
            TxData_valid=1;
            #0.02
            TxData_valid=0;
        end
        #300
        $stop;
    end

    always begin
        #0.01 sysClk=~sysClk;
    end
endmodule

