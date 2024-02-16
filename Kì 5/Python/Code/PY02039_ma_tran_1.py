from math import*
n = int(input())
a = []
for i in range(n):
    a.append(list(map(int, input().split())))
sumup = 0
sumdown = 0
for i in range(n-1):
    for   j in range(i+1, n):
        sumup += a[i][j]
        sumdown += a[j][i]
k = int(input())
adu = abs(sumdown - sumup)
if adu <= k:
    print("YES")
else:
    print("NO")
print(adu)