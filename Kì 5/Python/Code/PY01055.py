def xuli():
    s = input()
    if(len(s) % 2 == 0):
        return "NO"
    if(s[0] == s[1]):
        return "YES"
    adu = s[0]
    i = 2
    while(i < len(s)):
        if(s[i] != adu):
            return "NO"
        i += 2
    return "YES"
for i in range(int(input())):
    print(xuli())