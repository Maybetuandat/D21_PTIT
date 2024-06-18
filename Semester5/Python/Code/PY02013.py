def xuli(n):
    if n == 1:
        return 1
    res = 1
    while n != 1:
        if n % 2 == 0:
            n = n // 2
            res += 1
        else:
            n = n * 3 + 1
            res += 1
    return res
while True:
    n = int(input())
    if n == 0:
        break
    print(xuli(n))