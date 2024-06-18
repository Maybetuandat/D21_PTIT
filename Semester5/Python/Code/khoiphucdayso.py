n = int(input())
a = []
b = []
for i in range(0, n):
    b.append(list(map(int, input().split())))

a.append((b[0][2] - b[1][2] + b[0][1]) // 2)
for i in range(1, n):
    a.append(b[0][i] - a[0])

print(*a)