n = int(input())
print(n, end = ' ')
while n != 1:
    n = n % 2 == 0 and  n // 2 or  n * 3 + 1
    print(n, end = ' ')
