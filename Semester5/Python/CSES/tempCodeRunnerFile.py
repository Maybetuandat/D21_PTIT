n = int(input())
if(n <= 3):
    print("NO SOLUTION")
    exit()
i = 2
while(i <= n):
    print(i, end = " ")
    i += 2
i = 1
while(i <= n):
    print(i, end = " ")
    i += 2
