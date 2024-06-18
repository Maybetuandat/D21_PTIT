import math
def isprime(n):
    if(n <= 1):
        return "NO"
    for i in range(2, int(math.sqrt(n) ) + 1):
        if( n % i == 0):
            return "NO"
    return "YES"
def xuli():
    s = input()
    sum = 0
    for i in s:
        sum += int(i)
    print(isprime(sum))
for i in range(int(input())):
    xuli()