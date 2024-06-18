import math
def isprime(n):
    if(n <= 1):
        return "NO"
    for i in range(2, int(math.sqrt(n)) + 1):
        if(n % i == 0):
            return "NO"
    return "YES"
def xuli():
    s = input()
    n = len(s)
    sum = 0
    for i in range(n):
        if(i % 2  == 0):
            if(int(s[i]) % 2 == 1):
                return "NO"
        else:
            if(int(s[i]) % 2 == 0):
                return "NO"
        sum += int(s[i])
    return isprime(sum)
for i in range(int(input())):
    print(xuli())