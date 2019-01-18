from pyeda.inter import *
import numpy as np
import copy
import re
import functools
import argparse

def _lamb(number):
    """ generate n-lamb status in one cycle"""
    index = 0 
    time = number
    out=[]
    N = lambda x: 0 if x == 1 else 1
    state=4
    #0-all0 1-all1
    innerCounter = 0

    while index<=time:
        if state==0:
            lam=[1]*number
            innerCounter = 2
            state=3
        elif state==3:
            if innerCounter<number:
                lam = list(map(lambda i:N(i[1]) if (i[0]>0 and (i[0]+1)%(innerCounter%number)==0) else i[1],enumerate(lam)))
                innerCounter+=1
            else:
                lam = list(map(lambda i:N(i[1]) if (i[0]>0 and (i[0]+1)%number==0) else i[1],enumerate(lam)))
                state=4
        elif state==4:
            lam=[0]*number
            state=0
            innerCounter = 0
        out.append(copy.deepcopy(lam))
        index+=1
    return out

def _varGenerate(lamb):
    period = len(lamb)
    assert len(lamb[0])==period-1
    TotalBit = int(np.ceil(np.log2(period)))
    maxCount = 2** TotalBit
    return [''.join([(str(lamb[v][j]) if v<period else '-') for v in range(0,maxCount)]) for j in range(0,period-1)]

def lambTT(n):
    lan = _lamb(n)
    lan = [''.join(map(lambda x:str(x),i)) for i in lan]
    period = len(lan)
    TotalBit = int(np.ceil(np.log2(period)))
    maxCount = 2** TotalBit

    out=[[np.binary_repr(i,width=TotalBit),(lan[i] if i<len(lan) else '-'*len(lan[0]))] for i in range(0,maxCount)]
    return out

def printablelambTT(n):
    tt=lambTT(n)
    return functools.reduce(lambda x,y:"%s%s\n"%(x,"%s\t|\t%s"%(y[0],y[1])),tt,'\n')
    
    
out= lambTT(8)
parser = argparse.ArgumentParser(description='Process some integers.')
parser.add_argument('integers', metavar='N', type=int, 
                            help='an integer for the accumulator')
parser.add_argument('--sum', dest='accumulate', action='store_const',
                            const=sum, default=max,
                                                help='sum the integers (default: find the max)')

args = parser.parse_args()
print(printablelambTT(int(args.integers)))
