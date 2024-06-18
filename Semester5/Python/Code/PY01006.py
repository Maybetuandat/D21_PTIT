t = int(input())
for i in range(t):
    str = input()
    ok = "YES"
    for ch in str:
        if(ch != '4' and  ch != '7'):
            ok = "NO"
            break
    print(ok)