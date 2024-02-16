from math import*
nmax = int(1e6)
isprime = [0] * int(nmax + 9)
isprime[1] = 1
for i in range(2, int(sqrt(nmax)) + 1):
    if isprime[i] == 0:
        for j in range(2, nmax // i):
            isprime[i*j] = 1
n = int(input())
a = list(map(int, input().split()))
dem = [0] * (nmax  + 9)
for i in a:
    if isprime[i] == 0:
        dem[i] += 1
for i in a:
    if dem[i] != 0:
        print(i, dem[i])
        dem[i] = 0