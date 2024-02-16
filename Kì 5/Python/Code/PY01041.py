def check(s, index):
    n = len(s)
    for i in range(1, index + 1):
        if(s[i] <= s[i-1]):
            return False
    for i in range(index + 1, n):
        if(s[i] >= s[i-1]):
            return False
    return True
def xuli():
    s = input()
    st = set(s)
    if(len(st) < 3):
        return "NO"
    n = len(s)
    for i in range(n):
        if(check(s, i) == True):
            return "YES"
    return "NO"
t = int(input())
for i in range(t):
    print(xuli())