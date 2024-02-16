s = list(map(str, input().split()))
for i in range(len(s)):
    for j in range(len(s[i])):
        if (j == 0):
            s[i][j].upper()
        else:
            s[i][j].lower()
        print(s[i])
    print(" ")