t = int(input())
def xuli(s):
    s1 = s[::-1]
    n = len(s)
    for i in range(1, n):
        if(abs(ord(s[i])      - ord(s[i-1])) != abs(ord(s1[i]) - ord(s1[i-1]))):
            print("NO")
            return 
    print("YES")
for i in range(t):
    s = input()
    xuli(s)