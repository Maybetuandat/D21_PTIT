t = int(input())
def xuli(s):
    n = len(s)
    ans = ""
    for i in range(n):
        if(s[i] >= '1' and s[i] <= '9'):
            t = int(s[i])
            for j in range(t):
                ans = ans + s[i-1]
    print(ans)

for i in range(t):
    s = input()
    xuli(s)