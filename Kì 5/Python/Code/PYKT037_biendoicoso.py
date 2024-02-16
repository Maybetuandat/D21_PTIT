def xuli():
    n, k = map(int, input().split())
    a = []
    while n != 0:
        a.append(n % k)
        n //= k
    a = reversed(a)
    for i in a:
        if i < 10:
            print(i, end = "")
        else:
            print(chr(i - 10 + ord('A')), end = "")
    print()
for  i in range(int(input())):
    xuli()