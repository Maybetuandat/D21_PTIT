import math
def isprime(n):
    if(n <= 1):
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if(n % i == 0):
            return False
    return True
def xuli():
    s = input()
    n = len(s)
    prime = "2357"
    for i in range(n):
        if(s[i] in prime):
            if(isprime(i) == False):
                return "NO"
        else:
            if(isprime(i) == True):
                return "NO"
    return "YES"
for i in range(int(input())):
    print(xuli())