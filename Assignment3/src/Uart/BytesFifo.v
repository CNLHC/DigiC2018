`timescale 1us/10ns
module BytesFifo #(
    parameter BIT_PER_BYTES=8, 
    parameter BYTES_SIZE = 512
)(  
    input sysClk,
    input sysRst,
    input [BIT_PER_BYTES-1:0] in_data,
    input in_data_valid,
    output reg in_data_ready,

    input out_data_ready,
    output reg [BIT_PER_BYTES-1:0] out_data,
    output reg out_data_valid);
    reg  [8:0]pHead;//full Head
    reg  [8:0]pTail;//empty Tail
    integer ntIter;
    reg writeLock;

    reg [BIT_PER_BYTES-1:0]rf[BYTES_SIZE-1:0]; //add prohibit bit
    reg [10:0] tBytesCounter;
    always @(posedge sysClk or posedge sysRst) begin
        if(sysRst) begin
            for(ntIter=0;ntIter<BYTES_SIZE;ntIter=ntIter+1)
                rf[ntIter]<=8'b0;
            pHead<=0;
            pTail<=0;
            tBytesCounter<=0;
        end
        else begin
            if(in_data_valid&&in_data_ready)begin
                pTail<=pTail+1;
                rf[pTail]<=in_data;
                tBytesCounter<=tBytesCounter+1;
                writeLock<=1;
                if(tBytesCounter!=0)
                    out_data_valid<=1;
                else
                    out_data_valid<=0;
            end
            else
                writeLock<=0;

            if(out_data_ready &&(!writeLock)&&out_data_valid&&tBytesCounter!=0)begin
                pHead<=pHead+1;
                out_data<=rf[pHead];
                if(tBytesCounter!=0)begin
					 out_data_valid<=1;
                    tBytesCounter<=tBytesCounter-1;
                end
                else begin
                    out_data_valid<=0;
                end
            end

            if(tBytesCounter==0)
                    out_data_valid<=0;
            else
                    out_data_valid<=1;
            
        end
    end
    always @(*) begin//always_comb
        if(tBytesCounter<BYTES_SIZE-1)
            in_data_ready<=1;
        else
            in_data_ready<=0;
    end
endmodule

module TestBytesFifo();

    reg sysClk;
    reg sysRst;
    reg [7:0] in_data;
    reg in_data_valid;
    wire in_data_ready;

    reg out_data_ready;
    wire [7:0] out_data;
    wire out_data_valid;
    BytesFifo BF1(
        sysClk,
        sysRst,
        in_data,
        in_data_valid,
        in_data_ready,
        out_data_ready,
        out_data,
        out_data_valid
    );
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

        $stop;
        
    end
    always begin
        #5 sysClk=~sysClk;
    end
endmodule
