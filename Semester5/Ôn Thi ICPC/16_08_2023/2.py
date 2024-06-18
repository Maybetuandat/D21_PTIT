t = int(input())
for i in range(t):
    x = list(map(int, input().split()))
    maxx = max(x[0], x[1])
    minn = min(x[0], x[1])
    if(maxx % minn == 0):
        print("YES")
    else:
        print("NO")