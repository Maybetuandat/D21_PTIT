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
    if(isprime(len(s))== False):
        return "NO"
    snt="2357"
    dem1= 0
    dem2 = 0
    for i in s:
        if(i in snt):
            dem1 +=1
        else:
            dem2 +=1
    if(dem1 > dem2):
        return "YES"
    else:
        return "NO"
for i in range(int(input())):
    print(xuli())