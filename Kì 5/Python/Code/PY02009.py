def xuli():
    dem = [0] * 1009
    n = int(input())
    for i in range(n):
        dem[int(input())] += 1
    maxx = 0
    index = 0
    for i in range(1, 1001):
        if(dem[i] > maxx):
            maxx = dem[i]
            index = i
    print(index)
for i in range(int(input())):
    xuli()