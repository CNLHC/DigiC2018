module lamb5FSMControl(
    input trigger,
    input sysRst,
    output reg [4:0]lamb);
    reg [3:0]index;
    always @(posedge trigger or posedge sysRst)begin
        if(sysRst)begin
            index<=0;
        end
        else begin
            case (index)
                0:index<=1;
                1:index<=2;
                2:index<=3;
                3:index<=4;
                4:index<=5;
                5:index<=0;
            endcase
        end
    end

    always @(*) begin
        case(index)
            0:lamb=5'b00000;
            1:lamb=5'b11111;
            2:lamb=5'b10101;
            3:lamb=5'b10001;
            4:lamb=5'b10011;
            5:lamb=5'b10010;
        endcase
    end

endmodule


module testlamb5FSMControl();
    reg trigger;
    reg sysRst;
    wire [4:0] lamb;
    
    lamb5FSMControl U1(
        trigger,
        sysRst,
        lamb
    );
    initial begin
        sysRst=1;
        trigger=0;
        #5 sysRst=0;
    end
    always begin
        #5
        trigger=~trigger;
    end


endmodule

