t = int(input())
def xuli(s):
    n = len(s)
    if(s[n-1] == '6' and s[n-2] == '8'):
        print("YES")
    else:
        print("NO")
for i in range(t):
    s = input()
    xuli(s)