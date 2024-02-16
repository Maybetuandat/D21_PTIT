import math
nmax = int(1e6)
isprime1 = [0] * (nmax + 16)
def init():
    isprime1[1] = 1
    for i in range(2, int(math.sqrt(nmax)) + 1):
        if(isprime1[i] == 0):
            for j in range(2, nmax // i + 1):
                    isprime1[i * j] = 1
def xuli():
    n = int(input())
    dem = 0
    for i in range(n - 5):
        if(isprime1[i] == 0):
             if((isprime1[i+2] == 0 and isprime1[i+6] == 0) or (isprime1[i+4] == 0 and isprime1[i+6] == 0) ):
                  dem+=1
    print(dem)



init()
for i in range(int(input())):
    xuli()