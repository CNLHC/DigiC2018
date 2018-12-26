import serial
import os
import numpy as np
            
with open('/home/curry/digicdemo','w') as fp:
    with serial.Serial('/dev/ttyS28',9600, timeout=3) as ser:
        while True:
            try:
                s = ser.read(17)        # read up to ten bytes (timeout)
                raw = s.hex()
                padding = raw[:6]
                counter = raw[6:8]
                data = raw[8:]
                data = np.binary_repr(int(data,16),width=13*8)

                if padding =='cccccc':
                    status=[(True if i =='1' else False)for i in data[4:]]
                elif padding =='bbbbbb':
                    status=[(True if i =='1' else False)for i in data[99:]]
                else :
                    status=[False,]

                line1 = "old:%s\t%s\t%s\t\n"%(padding,counter,data)
                fp.seek(0)

                fp.write(line1)
                fp.flush()
                print(line1)
            except:
                pass




