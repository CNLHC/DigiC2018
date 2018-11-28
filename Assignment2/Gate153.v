module Gate153(
    input [1:0]A,
    input _S1,
    input _S2,
    input [3:0]D1,
    input [3:0]D2,
    output Y1,
    output Y2);
    wire S1,S2;
    not(S1,_S1);
    not(S2,_S2);

    wire tSD0,tSD1,tSD2,tSD3,tSD4;
    and(tSD0,~A[1],~A[0],D2[0]);
    and(tSD1,~A[1],A[0],D2[1]);
    and(tSD2,A[1],~A[0],D2[2]);
    and(tSD3,A[1],A[0],D2[3]);
    or(tSD4,tSD0,tSD1,tSD2,tSD3);
    and(Y2,tSD4,S2);

    wire tFD0,tFD1,tFD2,tFD3,tFD4;
    and(tFD0,~A[1],~A[0],D1[0]);
    and(tFD1,~A[1],A[0],D1[1]);
    and(tFD2,A[1],~A[0],D1[2]);
    and(tFD3,A[1],A[0],D1[3]);
    or(tFD4,tFD0,tFD1,tFD2,tFD3);
    and(Y1,tFD4,S1);
    
endmodule

module testGate153();
    reg [1:0]A;
    reg S1;
    reg S2;
    reg [3:0]D1;
    reg [3:0]D2;
    wire Y1;
    wire Y2;
    Gate153 U1(A,S1,S2,D1,D2,Y1,Y2);
    initial begin
        #50
        S1=0;
        S2=1;
        D1=4'b1010;
        D2=4'b1010;
        A=0;
        #30 A=1;
        #30 A=2;
        #30 A=3;
        #50
        S1=1;
        S2=0;
        A=0;
        #30 A=1;
        #30 A=2;
        #30 A=3;
        #50
        S1=1;
        S2=1;
        A=0;
        #30 A=1;
        #30 A=2;
        #30 A=3;
        #50
        S1=0;
        S2=0;
        #50
        A=0;
        #30 A=1;
        #30 A=2;
        #30 A=3;
#50 $stop;
    end
endmodule

       
