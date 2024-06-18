import math
def ucln(a, b):
    du = 0
    while(b != 0):
        du = a % b
        a = b
        b = du
    sum = 0
    while(a != 0):
       sum += a % 10
       a = a //  10
    return sum
def snt(n):
    if(n <= 1):
        return "NO"
    for i in range(2, int(math.sqrt(n)) + 1):
        if(n % i == 0):
            return "NO"
    return "YES"
t = int(input())
for i in range(t):
    x = list(map(int, input().split()))
    print(snt(ucln(x[0], x[1])))