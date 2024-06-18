def tichcs(n):
    res = 1
    for i in n:
        res *= int(i)
    return res
#    return (res * int(i) for i in n)
for i in range(int(input())):
    n = int(input())
    a = list(input().split())
    a.sort(key = lambda x : (tichcs(x), int(x)))
    print(*a)