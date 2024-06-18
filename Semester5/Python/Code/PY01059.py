def xuli():
    s = input()
    n = len(s)
    sum = 0
    ok  =0
    multi = 1
    for i in range(n):
        if(i % 2 == 0):
             sum += int(s[i])
        else:
            if(s[i] != '0'):
                ok = 1
                multi *= int(s[i])
    print(sum , end = " ")
    if(multi != 1):
        print(multi)
    else:
        if(ok == 1):
            print(multi)
        else:
            print("0")   
for i in range(int(input())):
    xuli()