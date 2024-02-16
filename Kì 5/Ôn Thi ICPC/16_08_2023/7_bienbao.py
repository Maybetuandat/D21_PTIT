s = input()
k = int(input())
ans = s
for i in range(k):
    n = len(ans)
    res= ""
    for j in range(n-1):
        if(ans[j] < ans[j+1]):
            # bo ans[j]
            res = res + ans[j+1: None]
            break
        else:
            res = res + ans[j]
    ans = res
print(ans)