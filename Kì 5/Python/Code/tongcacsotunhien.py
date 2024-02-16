dem  = 0
ans = ""
def dq( cnt, s, sum ):
    global dem
    global ans
    if(sum == 0):
        dem += 1
        ans += '(' +s.strip() + ') '
        return
    if(sum < 0):
           return
    for i in range(cnt, 0, -1):
       dq( i,  s + str(i)+ " ", sum - i )
for i in range(int(input())):

    n = int(input())
    dem = 0
    ans = ""
    dq(n, "", n)
   
    print(dem)
    print(ans)