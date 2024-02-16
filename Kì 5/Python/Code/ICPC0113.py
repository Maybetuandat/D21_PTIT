import math
nmax = int(1e6)
isprime1 = [0] * (nmax + 16)
vs = []
def init():
    isprime1[1] = 1
    for i in range(2, int(math.sqrt(nmax)) + 1):
        if(isprime1[i] == 0):
            for j in range(2, nmax // i + 1):
                    isprime1[i * j] = 1
def check(n):
    s = str(n)
    if(s == s[::-1]):
        return False
    adu = int(s[::-1])
    if(isprime1[n] == 0 and isprime1[adu] == 0 and vs[n] == 0 and vs[adu] == 0):
        vs[n] = 1
        vs[adu] = 1
        return True
    else: 
        return False
def xuli():
    n = int(input())
    for i in range(n):
        if(check(i) == True and int(str(i)[::-1]) < n):
            print(str(i), str(i)[::-1], end = " ")
init()
for i in range(int(input())):
    vs  = [0] * nmax
    xuli()
    print()