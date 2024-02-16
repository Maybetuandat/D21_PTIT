cnt = 0
adu = []
adu = set(adu)
while(cnt != 10):
    a = []
    a = list(map(int, input().split()))
    for i in a:
       adu.add(i % 42) 
    cnt += len(a)
print(len(adu))