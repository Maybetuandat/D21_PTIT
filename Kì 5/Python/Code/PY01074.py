import sys
import math
import array as arr
maxn = int(2e6) + 1

pr = arr.array('i', [0]*maxn)

for  i in range(2, int(math.sqrt(maxn)) + 1):
    if(pr[i] == 0):
        pr[i] = i
        for j in range(i * i, maxn, i):
            pr[j] = i

for i in range(4, maxn):
    if pr[i] > 0: 
        pr[i] += pr[i // pr[i]] 
    else:
        pr[i] += i

res = 0
for i in range ( int (sys.stdin.readline())):
    res += pr[int (sys.stdin.readline())]
print(res)