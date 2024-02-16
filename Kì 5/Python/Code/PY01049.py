import math
def isprime(n):
    if(n <= 1):
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if(n % i == 0):
            return False
    return True
def xuli():
    prime = "2357"
    notprime = "146809"
    s = input()
    if(isprime(len(s)) == False):
        print("NO")
        return
    countprime = 0
    countnotprime = 0
    for i in s:
        if(i in prime):
            countprime += 1
        else:
            countnotprime += 1
    if(countprime > countnotprime):
        print("YES")
    else:
        print("NO")
for i in range(int(input())):
    xuli()