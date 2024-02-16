t = int(input())
for i in range(t):
    n = int(input())
    x = list(map(int, input().split()))
    x = sorted(x)
    ans = x[0] + x[1] + x[2]
    print(ans)