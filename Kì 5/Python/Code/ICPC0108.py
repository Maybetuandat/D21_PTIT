t = int(input())
for i in range(t):
    n = int(input())
    a = sorted(list(map(int, input().split())))
    ans = 0
    for i in range(n-2):
        j = i + 1
        k = n - 1
        while(j < k):
            tmp = a[i] + a[j] + a[k]
            if(tmp == 0):
                ans += 1
                j += 1
            elif tmp < 0:
                 j += 1
            else:
                k -= 1
    print(ans)
