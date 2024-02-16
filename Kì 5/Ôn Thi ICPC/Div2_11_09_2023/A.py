for _ in range(int(input())):
    n=int(input())
    pis=list(map(int,input().split()))
    lis=[]
    for i in range(n):
        lis.append((pis[i],i))
    final=[0 for i in range(n)]
    lis.sort()
    print(lis)
    for i in range(n):
        final[lis[i][1]]=n-i
    print(*final)