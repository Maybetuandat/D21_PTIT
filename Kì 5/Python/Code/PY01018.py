def xuli(s, k):
    p = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_."
    n = len(s)
    ans = ""
    for i in range(n):
        j = p.find(s[i])
        ans = ans + p[(j +  k) % 28]
    print(ans[::-1])
while(True):
    x = list(input().split())
    k = int(x[0])
    if(k == 0):
        break
    s = x[1]
    xuli(s, k)