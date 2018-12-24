from django.shortcuts import render
from django.http import JsonResponse
import numpy as np

# Create your views here.

def boardData(request):
    hold=False
    status=[]
    try:
        with open('/home/curry/digicdemo') as fp:
            raw=fp.read()
            raw=raw.split(":")[1]
            (padding,counter,data,_) = raw.split('\t')
            if(padding=='cccccc'):
                status=[(True if i == '1' else False) for i in data[4:]]
            elif(padding=='bbbbbb'):
                status=[(True if i == '1' else False) for i in data[99:]]
            else:
                hold=True
                pass
            print(padding,counter,data)
    except:
        print('serial error')
        hold=True

    return JsonResponse({'count':len(status),'status':status,'hold':hold,'counter':int(counter,16)})

