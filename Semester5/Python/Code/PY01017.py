t = int(input())
def xuli(s):
    n = len(s)
    i = 0
    ans = ""
    while(i < n):
        j = i 
        while(j < n and s[j] == s[i]):
            j += 1
        ans = ans + str(j - i ) + s[i]
        i = j
    print(ans)


for i in range(t):
    s = input()
    xuli(s)