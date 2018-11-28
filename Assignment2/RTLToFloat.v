module RTLToFloat(
    input sysClk,
    input sysRst,
    input [3:0]  _D,
    output reg[3:0] F,
    output reg[1:0] P
);

reg inputFlag;
reg outputFlag;
reg [3:0]outBuffer;
reg [3:0]shiftCount;
reg [3:0]previousBuffer;

always @(posedge sysClk or negedge sysRst) begin 
    if(!sysRst) begin 
        inputFlag <= 0 ;
		  outputFlag <=0;
        shiftCount <=0;
		  F<=4'b0000;
		  P<=0;
		  previousBuffer<=0000;
		  outBuffer<=0000;
    end
    else begin 
        if(inputFlag)begin
            if(!outBuffer[3]) begin
                outBuffer[3]<=outBuffer[2];
                outBuffer[2]<=outBuffer[1];
                outBuffer[1]<=outBuffer[0];
                outBuffer[0]<=0;
                shiftCount<=shiftCount+1;
            end
            else
                outputFlag <= 1;
            if(outputFlag) begin
                inputFlag<=0;
                outputFlag<=0;
                P <= 3-shiftCount;
					 shiftCount<=0;
                F <= outBuffer;
            end
        end
        else begin
				previousBuffer<=_D;
				if(previousBuffer != _D) begin
					P<=0;
					outBuffer<=_D;
					inputFlag<=1;
				end
        end
    end
end
endmodule    
module testRTLGateToFloat();
	reg sysClk;
	reg sysRst;

    reg [3:0]  _D;
    wire [3:0] F;
    wire [1:0] P;
    RTLToFloat U1(sysClk,sysRst,_D,F,P);

    initial begin
        sysClk=0;
        sysRst=0;
		  _D=0000;
        #5 sysRst=1;
		  #5
        _D  = 4'b0101;
        #50 _D  = 4'b0111;
        #50 _D  = 4'b0011;
        #50 _D  = 4'b0001;
        #50 $stop;
    end
	always begin 
	#1  sysClk = ~ sysClk;
	end
endmodule    

