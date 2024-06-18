import math
def isprime(n):
    if(n <= 1):
        return "NO"
    for i in range(2,int(math.sqrt(n)) + 1):
        if(n % i == 0):
            return "NO"
    return "YES"
def xuli():
    s = input()
    n = int(s[len(s)- 4:len(s)])
    return isprime(n)
for i in range(int(input())):
    print(xuli())