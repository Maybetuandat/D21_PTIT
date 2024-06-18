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
    n = int(s[0:3])
    k = int(s[len(s) - 3: len(s) ])
    if(isprime(n) == True and isprime(k) == True):
        print("YES")
    else:
        print("NO")
for i in range(int(input())):
    xuli()