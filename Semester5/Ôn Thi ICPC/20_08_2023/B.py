n, k = map(int, input().split())
ans = 0
dem = 0
for i in range(1, n + 1):
    ans = ans * 10 + i
    if(ans % k == 0):
        dem = dem + 1
print(dem)