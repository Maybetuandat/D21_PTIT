t = int(input())
for i in range(t):
    n = int(input())
    x = list(map(int, input().split()))
    min1 = int(1e9)
    min2 = min1
    min3 = min1
    check = [0] * n
    index = 0
    for j in range(n) :
        if(x[j] < min1):
            min1 = x[j]
            index = j
    check[index] = 1
    for j in range(n):
        if(check[j] == 0 and x[j] < min2):
            min2 = x[j]
            index = j
    check[index] = 1
    for j in range(n):
        if(check[j] == 0 and x[j] < min3):
            min3 = x[j]
            index = j
    print(min1+ min2 + min3)
        