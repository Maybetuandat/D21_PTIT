res = 0
def mergersort(l, r, a, mid):
    x =[]
    global res
    y = []
    for i in range(l, mid + 1 ):
        x.append(a[i])
    for i in range(mid + 1, r  + 1):
        y.append(a[i])
    i = 0
    j = 0
    while(i < len(x) and j < len(y)):
        if(x[i] <= y[j]):
            a[l] = x[i]
            i += 1
            l += 1
        else:
            res += len(x) - i
            a[l] = y[j]
            l += 1
            j += 1
    while(i < len(x)):
        a[l] = x[i]
        l += 1
        i += 1
    while(j < len(y)):
        a[l] = y[j]
        l += 1
        j += 1
def mergersplit(l, r,  a):
    if(l >= r):
        return
    if(l < r):
         mid = (l + r) // 2
         mergersplit(l, mid , a)
         mergersplit(mid + 1, r, a)
         mergersort(l, r, a, mid)
n = int(input())
a = list(map(int, input().split()))
#print(a)
mergersplit(0, len(a) - 1, a)
print(res)
