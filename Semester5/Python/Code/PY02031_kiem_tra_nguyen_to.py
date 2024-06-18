from math import*
n, m = map(int, input().split())
a = []
def isprime(n):
    if n <= 1:
        return 0
    for i in range(2, int(sqrt(n)) + 1):
        if n % i == 0:
            return 0
    return 1
for i in range(0, n):
    a.append(list(map(int, input().split())))
for i in range(0, n):
    for j in range(0, m):
       a[i][j] = isprime(a[i][j])
for i in range(0, n):
    for j in range(0, m):
       print(a[i][j], end = " ")
    print()
