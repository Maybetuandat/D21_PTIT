t = int(input())
ans = ['00', '22', '44','66', '88']
x = ['2', '4', '6', '8']
def sinh(i):
    if(len(ans[i]) >= 6):
        return
    s = ans[i]
    for j in x:
        ans.append(j + s + j)
    sinh(i + 1)
sinh(0)    
x = []
for j in ans:
    x.append(int(j))
x.sort()
for i in range(t):
    n = int(input())
    for j in x:
        if(j < n and j > 0) :
            print(j, end = " ")
    print()