import numpy as np
import functools
with open('./TT','r') as fp:
    lineBuf= fp.readlines()
    lineBuf = [i for i in lineBuf if i!='\n']
    lineBuf = [i.replace('\n','').replace('\t','') for i in lineBuf]
    lineBuf = [i.split('|') for i in lineBuf]
    lineBuf = [i for v,i in lineBuf]
    a=lineBuf[2]

    Segdivide = lambda a:[a[i:i+16] for i in range(0,81,16)]+[a[-4:]]

    dataBuf = list(map(Segdivide,lineBuf))
    assert len(dataBuf[0])==7 #should have 7 seg

    SEG=[[j[i] for j in dataBuf] for i in range(0,7)]
    washer = lambda x:[i for i in x if '-' not in i]
    SEG = list(map(washer,SEG))

    assert functools.reduce(lambda x,y:a and y,map(lambda x:len(x)==101,SEG),True)
    SEG[-1]=[np.binary_repr((int(i,2)<<12),width=16) for i in SEG[-1]]
    content=[]
    for co in range(0,700):
        state = (16*co//112)+1
        content.append("\t\t10'h%s:data=16'b%s;//STATE:%d\tSEG:%d\tCOUNTER:%d\t\n"%(
            hex(co)[2:],
            SEG[co%7][state],
            state,
            co%7+1,
            co
            ))
    st = """ module lamp100Prom(
    input [9:0]address,
    output reg [15:0]data
);
always@(*) begin
    case(address)\n%s
        default:data=0;
    endcase
end
endmodule"""%''.join(content)
    with open('prom.v','w') as prom:
        prom.write(st)


            




















    
