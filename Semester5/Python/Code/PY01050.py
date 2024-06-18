a = []
def dq(s, cnt, dem1, dem2, dem3):
    if(cnt > n):
        return
    if(cnt >= 3 and dem1 <= dem2 and dem2 <= dem3 and dem1 != 0 and dem2 != 0 and dem3 != 0):
        a.append(s)
    dq(s + "A",cnt + 1, dem1 + 1, dem2, dem3)
    dq(s + "B",cnt + 1, dem1 , dem2 + 1, dem3)
    dq(s + "C",cnt + 1, dem1 , dem2, dem3 + 1)
n = int(input())
dq("", 0, 0, 0, 0)
a = sorted(a, key = lambda x: (len(x), x))
for i in a:
    print(i)