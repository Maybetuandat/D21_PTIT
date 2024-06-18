t = int(input())
for i in range(t):
    s = input()
    n = len(s)
    demchan = 0
    demle = 0
    for j in range(n):
        if(j % 2 == 0):
            demle += int(s[j])
        else:
            demchan += int(s[j])
    print(demchan, demle)
