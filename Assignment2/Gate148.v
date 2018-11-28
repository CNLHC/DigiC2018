module Gate148(
    input S,
    input [7:0]NI,
    output [2:0]Y,
    output Ys,
    output Yex);
wire [7:0]I;
not(I[0],NI[0]);
not(I[1],NI[1]);
not(I[2],NI[2]);
not(I[3],NI[3]);
not(I[4],NI[4]);
not(I[5],NI[5]);
not(I[6],NI[6]);
not(I[7],NI[7]);



// Y[2]
wire tY20;
or(tY20,I[4],I[5],I[6],I[7]);
nand(Y[2],tY20,S);
//Y[1]
wire tY10,tY11,tY12;
and(tY10,I[2],~I[4],~I[5]);
and(tY11,I[3],~I[4],~I[5]);
or(tY12,tY10,tY11,I[6],I[7]);
nand(Y[1],tY12,S);
//Y[0]
wire tY00,tY01,tY02,tY03;
and(tY00,I[1],~I[2],~I[4],~I[6]);
and(tY01,I[3],~I[4],~I[6]);
and(tY02,I[5],~I[6]);
or(tY03,tY00,tY01,tY02,I[7]);
nand(Y[0],tY03,S);
//Ys
nand(Ys,~I[0],~I[1],~I[2],~I[3],~I[4],~I[5],~I[6],~I[7],S);
//Yex
wire tYex;
or(tYex,I[0],I[1],I[2],I[3],I[4],I[5],I[6],I[7]);
nand(Yex,tYex,S);

endmodule

module testGate148();
    reg S;
    reg [7:0]I;
    wire [2:0]Y;
    wire Yex,Ys;
    Gate148 U1(S,I,Y,Ys,Yex);
    initial begin
//import random
//for i in range(0,8):
//    padding = [str(random.choice([0,1])) for j in range(0,i)]
//    suffix = [ '1' for j in range(0,7-i)]
//    se = padding +['0']+suffix
//    se.reverse()
//    print(''.join(se))
        S=0;
        #50 I=8'b11111110;
        #50 I=8'b11111100;
        #50 I=8'b11111011;
        #50 I=8'b11110011;
        #50 I=8'b11100101;
        #50 I=8'b11011101;
        #50 I=8'b10010101;
        #50 I=8'b01100000;
        #50 S=1;
        #50 I=8'b11111110;
        #50 I=8'b11111100;
        #50 I=8'b11111011;
        #50 I=8'b11110011;
        #50 I=8'b11100101;
        #50 I=8'b11011101;
        #50 I=8'b10010101;
        #50 I=8'b01100000;
        #50 I=8'b11111111;
        #50 $stop;
    end
endmodule





