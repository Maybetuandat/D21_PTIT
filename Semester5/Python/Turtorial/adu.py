def xuli1(n, m):
    # n > m
    sum = -1
    summ = 0
    for i in range(1, n + 1):
        sum += 2 * i - 1
    for i in range(1, m):
        summ += i * 2 - 1
    return sum - summ
while(1):
    n, m = map(int, input().split())
    if(n ==0 and m == 0):
        exit()
    print(xuli1(n, m))
    