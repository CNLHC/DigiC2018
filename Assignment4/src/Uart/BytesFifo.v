`timescale 1us/10ns
module BytesFifo #(
    parameter BIT_PER_BYTES=8, 
    parameter BYTES_SIZE = 512
)(  
    input sysClk,
    input sysRst,
    input [BIT_PER_BYTES-1:0] in_data,
    input in_data_valid,
    output wire in_data_ready,

    input out_data_ready,
    output reg [BIT_PER_BYTES-1:0] out_data,
    output wire out_data_valid,

    output wire [10:0]fillLevel,
    output wire full,
    output wire empty
);
    reg  [8:0]pHead;//full Head reg  [8:0]pTail;//empty Tail
    reg  [8:0]pTail;//full Head reg  [8:0]pTail;//empty Tail
    integer ntIter;
    reg writeLock;

    reg [BIT_PER_BYTES-1:0]rf[BYTES_SIZE-1:0]; //add prohibit bit

    reg [10:0] tBytesCounter;
    assign full=(tBytesCounter==511);
    assign empty = (tBytesCounter==0);
    assign fillLevel = tBytesCounter;
    assign out_data_valid = (~empty)&(~writeLock);
    assign in_data_ready = (~full);

    always @(posedge sysClk or posedge sysRst) begin
        if(sysRst) begin
            pHead<=0;
            pTail<=0;
            tBytesCounter<=0;
        end

        else begin
            if(in_data_valid&&in_data_ready)begin
                pTail<=pTail+1;
                rf[pTail]<=in_data;
                tBytesCounter<=tBytesCounter+1;
                writeLock=1;
            end
            else
                writeLock=0;

            if(out_data_ready &&out_data_valid)begin
                pHead<=pHead+1;
                out_data<=rf[pHead];
                tBytesCounter<=tBytesCounter-1;
            end
        end
    end

endmodule

module TestBytesFifo();

    reg sysClk;
    reg sysRst;
    reg [7:0] in_data;
    reg in_data_valid;
    wire in_data_ready;
    wire full;
    wire [10:0]fillLevel;
    wire empty;

    reg out_data_ready;
    wire [7:0] out_data;
    wire out_data_valid;
    BytesFifo BF1( sysClk,
        sysRst,
        in_data,
        in_data_valid,
        in_data_ready,
        out_data_ready,
        out_data,
        out_data_valid,
        fillLevel,
        full,
        empty);
    integer nsIter;
    initial begin
        sysRst=1;
        sysClk=1;
        nsIter=0;
        out_data_ready=0;
        #30 sysRst=0;
        //Write 50 Bytes Data
        for (nsIter=0;nsIter<15;nsIter=nsIter+1) begin
            #30 in_data=nsIter;
            in_data_valid<=1;
            #10 in_data_valid<=0;
        end
        //read
        #50
        out_data_ready<=1;
        #30
        out_data_ready<=0;
        #20
        out_data_ready<=1;
        #5
        out_data_ready<=0;
        #30
        out_data_ready<=1;
        #15
        out_data_ready<=0;
        #20
        out_data_ready<=1;
        #300

        for (nsIter=0;nsIter<513;nsIter=nsIter+1) begin
            #30 in_data=nsIter;
            in_data_valid<=1;
            #10 in_data_valid<=0;
        end

        $stop;
        
    end
    always begin
        #5 sysClk=~sysClk;
    end
endmodule
