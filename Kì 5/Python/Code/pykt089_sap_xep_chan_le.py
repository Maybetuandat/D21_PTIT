n = int(input())
a = map(int , input().split())
chan = []
le = []
for i in a:
    if i % 2 == 0:
        chan.append(i)
    else:
        le.append(i)
chan.sort()
le.sort(lambda x : -x)
i = 0
while i < len(le) and i < len(chan)