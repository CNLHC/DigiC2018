`timescale 10ns/10ns
module testTubeControl();
    reg Sys_CLK;
    reg Sys_RST;
    reg [1:0]Key;
    wire [7:0]SEG;
    wire [1:0]COM;
    wire [3:0]LED;
    tubeControl U1(
    .Sys_CLK(Sys_CLK),
    .Sys_RST(Sys_RST),
    .Key(Key),
    .SEG(SEG),
    .COM(COM),
    .LED(LED));

    initial begin
        Sys_CLK=0; 
        Sys_RST=1;
        Key=0;
    #5  Sys_RST=0;
    #50 Key[0]=1;
    #54 Key[0]=0;
    #60 Key[0]=0;
    #70 Key[0]=1;
    #86 Key[0]=0;
    #87 Key[0]=1;


    end
    always begin 
    #1
        Sys_CLK=!Sys_CLK;
    end


endmodule

