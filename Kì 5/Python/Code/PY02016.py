def xuli():
    n = int(input())
    a = list(map(int, input().split()))
    dem = [0] * int(1e6 + 9)
    minn = int(1e9)
    maxx = 0
    for i in a:
        dem[i] +=1
        minn = min(minn, i)
        maxx = max(maxx, i)
    index = 0
    adu = 0
    for i in range(minn, maxx + 1):
        if(dem[i] > n // 2 and dem[i] > adu):
            index = i
            adu = dem[i]
    if(index == 0):
        print("NO")
    else:
        print(i)
for i in range(int(input())):
    xuli()