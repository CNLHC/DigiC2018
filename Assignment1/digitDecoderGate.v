module digitDecoderGate(
    input [3:0]data,
    output [7:0]HEX);
    wire A=data[3];
    wire B=data[2];
    wire C=data[1];
    wire D=data[0];
    wire t71,t72,t73,t74,t75,t76;
    // HEX[7]
    and(t71,~B,~D);
    and(t72,~A,C);
    and(t73,B,C);
    and(t74,A,~D);
    and(t75,~A,B,D);
    and(t76,A,~B,~C);
    or(HEX[7],t71,t72,t73,t74,t75,t76);
    // HEX[6]
    wire t61,t62,t63,t64;
    and(t61,~B,~D);
    and(t62,~A,~C,~D);
    and(t63,~A,C,D);
    and(t64,A,~C,D);
    or(HEX[6],t61,t62,t63,t64);
    // HEX[5]
    wire t51,t52,t53,t54,t55;
    and(t51,~A,B);
    and(t52,A,~B);
    and(t53,~A,~C,~D);
    and(t54,~A,C,D);
    and(t55,B,~C,D);
    or(HEX[5],t51,t52,t53,t54,t55);
    //HEX[4]
    wire t41,t42,t43,t44,t45;
    and(t41,A,~C);
    and(t42,~A,~B,~D);
    and(t43,~B,C,D);
    and(t44,B,~C,D);
    and(t45,B,C,~D);
    or(HEX[4],t41,t42,t43,t44,t45);
    //HEX[3]
    wire t3a,t3b,t3c,t3d,t3e;
    and(t3a,~B,~D);
    and(t3b,C,~D);
    and(t3c,A,C);
    and(t3d,A,B);
    and(t3e,~A,~B,~C);
    or(HEX[3],t3a,t3b,t3c,t3d,t3e);
    //HEX2
    wire t2a,t2b,t2c,t2d;
    and(t2a,~A,~C);
    and(t2b,~B,~C);
    and(t2c,B,~D);
    and(t2d,A,C);
    or(HEX[2],t2a,t2b,t2c,t2d);
    //HEX1
    wire t1a,t1b,t1c,t1d,t1e;
    and(t1a,~B,C);
    and(t1b,C,~D);
    and(t1c,A,~B);
    and(t1d,A,D);
    and(t1e,~A,B,~C);
    or(HEX[1],t1a,t1b,t1c,t1d,t1e);
    and(HEX[0],0,0);
endmodule 
module testDigitDecoderGate();
    reg [3:0]data;
    wire [7:0]HEX;
    digitDecoderGate U1(
        .data(data),
        .HEX(HEX));
    initial begin
        data=0;
    #10 data=data+1;
    #10 data=data+1;
    #10 data=data+1;
    #10 data=data+1;
    #10 data=data+1;
    #10 data=data+1;
    #10 data=data+1;
    #10 data=data+1;
    #10 data=data+1;
    #10 data=data+1;
    #10 data=data+1;
    #10 data=data+1;
    #10 data=data+1;
    #10 data=data+1;
    end
endmodule








       



