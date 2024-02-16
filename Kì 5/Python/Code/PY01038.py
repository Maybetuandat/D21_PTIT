def daonguoc(n):
    ans = 0
    while(n != 0):
        ans = ans * 10 +  n % 10
        n = n // 10
    return ans
def xuli():
    n = int(input())
    if(n % 7 ==0):
        print(n)
        return
    i = 0
    while(i < 1000):
        n = n + daonguoc(n)
        if(n % 7 == 0):
            print(n)
            return
        i+=1
    print("-1")
t = int(input())
for i in range(t):
    xuli()