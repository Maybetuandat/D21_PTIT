def xuli():
    s = input()
    n = input()
    idx = s.find(n)
    l = len(n)
    cnt = 0
    while idx != -1:
        cnt += 1
        idx = s.find(n, idx + l)
    print(cnt)
for i in  range(int(input())):
    xuli()