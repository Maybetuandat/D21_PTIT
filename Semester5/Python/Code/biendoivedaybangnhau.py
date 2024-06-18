n = int(input())
a = list(map(int, input().split()))
ans, pos = int(1e9), 0
for i in a:
    tmp = 0
    for j in a:
        if i > j:
            tmp += i - j
        else:
            tmp += j - i
    
    if ans > tmp:
        ans = tmp
        pos = i
print(ans, pos)