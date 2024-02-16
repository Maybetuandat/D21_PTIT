import math
def snt(n):
    if(n <= 1):
      return "NO"
    if(n == 2 or n == 3):
        return "YES"
    for i in range(2, int(math.sqrt(n)) + 1):
        if(n % i == 0):
           return "NO"
    return "YES"
def ucln(a, b):
    du = 0
    while(b != 0):
        du = a % b
        a = b
        b = du
    return a
def xuli(n):
    dem = 0
    for i in range(1, n):
        if(ucln(i, n) == 1):
            dem = dem  + 1
    print(snt(dem))
t = int(input())
for i in range(t):
    n = int(input())
    xuli(n)
