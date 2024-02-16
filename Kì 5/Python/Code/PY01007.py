import math
t = int(input())
for i in range(t):
    s = input()
    x = list(map(float, (s.split())))
    base = 1 + x[1] / 100
    k = int(math.log( x[2] / x[0]   , base))
    print(k + 1)
    