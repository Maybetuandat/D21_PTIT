from math import *
def xuli(x1, x2,x3,x4):
    res = 0
    while True:
        if x1 == x2 and x2 == x3 and x3 == x4:
            return res
        y1 = abs(x2 - x1)
        y2 = abs(x2 - x3)
        y3 = abs(x3 - x4)
        y4 = abs(x4 - x1)
        x1 = y1
        x2 = y2
        x3 = y3
        x4 = y4
        res += 1
    return res 
while True:
    x1, x2,x3,x4 = map(int, input().split())
    if x1 == 0 and x2 == 0 and x3 == 0 and x4 == 0:
        break
    print(xuli(x1,x2,x3,x4))