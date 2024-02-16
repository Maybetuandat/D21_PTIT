from math import*
def dq(n, k, l, r):
    mid = int((l + r) / 2)
    if(k == mid):
        return chr(n + ord('A') - 1)
    elif k > mid:
            return dq(n-1, k, mid + 1, r)
    else:
            return dq(n-1, k, l, mid - 1)
for i in range(int(input())):
    n, k = map(int, input().split())
    if(k % 2 == 1):
        print('A')
    else:
        adu = pow(2, n) - 1
        print(dq(n,k, 1, adu))