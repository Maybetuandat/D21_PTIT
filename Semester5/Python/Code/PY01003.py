t = int(input())
for i in range(t):
    n = int(input())
    ans = ""
    while(n > 10):
        
        k = n % 10
        n = n //  10
        if(k >= 5):
          n += 1
        ans =  "0" + ans
    else:
        ans = str(n) + ans
    print(ans)