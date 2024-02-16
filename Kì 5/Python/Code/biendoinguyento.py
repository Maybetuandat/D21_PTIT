pr = [1] * 10005
pr[0] = pr[1] = 0
for i in range(2, 101):
    if(pr[i] == 1):
        for  j in range(i*i, 10005, i):
            pr[j] = 0
n = int(input())
a = list(map(int, input().split()))
adu = 0
for i in a:
        cnt = 0
        i1, i2 = i, i
        while(pr[i1] == 0 and pr[i2] == 0):
             i1 += 1
             i2 -= 1
             cnt += 1
        adu = max(adu, cnt)
print(adu)