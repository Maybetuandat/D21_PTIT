ans = []
a = 1
while a <= int(1e18):
    b = 1
    while b <= int(1e18):
        c = 1
        while c <= int(1e18):
            ans.append(a * b * c)
            c *= 5
        b *= 3
    a *=2
ans.sort()
def binary_search(l, r, x):
    dau = l
    cuoi = r
    while dau <= cuoi:
        mid = (dau + cuoi) // 2
        if ans[mid] == x:
            return mid+1
        elif ans[mid] > x:
                cuoi = mid - 1
        else:
            dau = mid + 1
    return "Not in sequence"
for i in range(int(input())):
    n = int(input())
    print(binary_search(0, len(ans) -1, n) )
    
        