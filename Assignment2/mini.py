TB_F3="0111111111111111"
TB_F2="0001001100001111"
TB_F1="0000010100110011"
TB_F0="0000000001010101"
TB_P1="0000111111111111"
TB_P0="0011000011111111"
from pyeda.inter import *
Din=ttvars('_D',4)
f3 = truthtable(Din,TB_F3)
f2 = truthtable(Din,TB_F2)
f1 = truthtable(Din,TB_F1)
f0 = truthtable(Din,TB_F0)
p1 = truthtable(Din,TB_P1)
p0 = truthtable(Din,TB_P0)

#(f3m,)=espresso_tts(f3)
#(f2m,)=espresso_tts(f2)
#(f1m,)=espresso_tts(f1)
#(f0m,)=espresso_tts(f0)
#(p1m,)=espresso_tts(p1)
#(p0m,)=espresso_tts(p0)


(f3m,f2m,f1m,f0m,p1m,p0m)=(espresso_tts(f3,f2,f1,f0,p1,p0))

print("f3m:",f3m)
print("f2m:",f2m)
print("f1m:",f1m)
print("f0m:",f0m)
print("p1m:",p1m)
print("p0m:",p0m)

print(expr2truthtable(f2m))




