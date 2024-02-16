x = list(map(int, input().split()))
def ucln(a, b):
    du = 0
    while( b != 0):
        du = a % b
        a = b
        b = du
    return a
n = x[0]
k = x[1]
dau = 1
cuoi = 9
for i in range(k - 1):
    dau = dau * 10
    cuoi = cuoi * 10 + 9
print(dau, cuoi)
dem = 0
for i in range(dau, cuoi + 1):
    if(ucln(n, i) == 1):
        dem += 1
        print(i, end = " ")
        if(dem == 10):
            print()
            dem = 0