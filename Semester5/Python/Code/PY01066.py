from math import *
def xuli():
    s = input()
    s1 = s[::-1]
    n = len(s)
    for i in range(1, n ):
        if(abs(ord(s[i]) - ord(s[i-1])) != abs(ord(s1[i]) - ord(s1[i-1]))):
            return "NO"
    return "YES"
for i in range(int(input())):
    print(xuli())
