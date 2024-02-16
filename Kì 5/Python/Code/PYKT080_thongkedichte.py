m, n =map(int, input().split())
a = []
for i in range(m):
    a.append(list(map(int, input().split())))
x = [-1, -1, -1,  1, 1, 1,  0, 0]
y = [-1,  0,  1, -1, 0, 1, -1, 1]
vs = [[0 for _ in range(m)]  for _ in range(n)]
dem = 0
for i in range(m):
    for j in range(n):
        if a[i][j] == -1:
            for k in range(8):
                i1 = i + x[k]
                j1 = j + y[k]
                if i1 >=  0 and i1 <m and j1 >=0 and j1 < n and vs[i1][j1] == 0:
                        dem += a[i1][j1]
                        vs[i1][j1] = 1
print(dem)