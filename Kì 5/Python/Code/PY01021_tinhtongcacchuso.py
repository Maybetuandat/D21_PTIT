def xuli():
    n = input()
    sum =0
    res =""
    for i in n:
        if i.isdigit():
            sum += int(i)
        else:
            res += i
    res = sorted(res)
    for i in res:
        print(i, end = "")
    print(sum)
for i in range(int(input())):
    xuli()