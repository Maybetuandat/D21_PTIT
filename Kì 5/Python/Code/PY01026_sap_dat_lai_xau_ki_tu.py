def check(s1, s2):
    dem = {}
    for i in s1:
        if i in dem:
            dem[i] +=1
        else:
            dem[i] = 1
    for i in s2:
        if i in dem and dem[i] > 0:
            dem[i] -= 1
        else:
            return False
    return True
for i in range(1, int(input()) + 1):
    s1= input()
    s2 = input()
    if check(s1, s2) == True:
        print(f"Test %d: YES" % i)
    else:
        print(f"Test %d: NO" % i)
