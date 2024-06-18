t = int(input())
for i in range(t):
    s = input()
    n = len(s)
    ok = "YES"
    for j in range(n - 1):
        if(s[j] > s[j+1]):
            ok = "NO"
            break
    print(ok)
    