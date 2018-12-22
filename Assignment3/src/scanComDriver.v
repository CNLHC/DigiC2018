module scanComDriver(
    input sysClk,
    input [7:0]data1,
    input [7:0]data2,
    output reg [7:0]boundedData,
    output reg [1:0]COM);
reg [10:0]flip;
always @ (posedge sysClk) begin 
    if(flip[10]) begin
        boundedData<=data1;
        COM<=2'b10;
        flip<=flip+1;
    end
    else begin
        boundedData<=data2;
        COM<=2'b01;
        flip<=flip+1;
    end
end
endmodule 

