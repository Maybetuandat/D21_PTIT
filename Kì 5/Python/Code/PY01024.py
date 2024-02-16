t = int(input())

def xuli(s):
    sum = 0
    n = len(s)
    sum = int(s[0])
    for i in range(1, n):
        if(abs(int(s[i]) - int(s[i-1])) != 2):
            print("NO")
            return
        sum += int(s[i])
    if(sum % 10 == 0):
        print("YES")
    else:
        print("NO")
for i in range(t):
    s = input()
    xuli(s)