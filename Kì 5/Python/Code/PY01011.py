t = int(input())
def ischar(ch):
    if(ch == '0' or ch == '2' or ch == '4' or ch =='6' or ch == '8'):
           return True
    return False
def check(s):
    n = len(s)
    if(n % 2 != 0):
        return False
    for i in range(n//2 + 1 ):
        if(ischar(s[i]) == False):
            return False
        if(s[i] != s[n - i - 1]):
            return False
    return True;
        
def xuli(n):
    for j in range(22, n):
        if(check(str(j))):
            print(j, end  = " ")
for i in range(t):
    n = int(input())
    xuli(n)
    print()