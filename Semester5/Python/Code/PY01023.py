t = int(input())
def xuli(n):
    i = 2
    ans = ""
    while(i <= n):
        dem = 0
        while(n % i == 0):
            dem += 1
            n = n // i
        if(dem != 0):
             ans = ans + "* " + str(i) + "^" + str(dem) + " "
        i+=1
    print(ans)
for i in range(t):
    n = int(input())
    print("1", end = " ")
    xuli(n)
