for jj in range(int(input())):
    n = int(input())
    arr = [[int(i),x] for x,i in enumerate(input().split())]
    #print(arr)
    arr.sort()
    print(*arr)
    print(len(arr))
    print(arr[0][1])
    t = [0] * n
    for i in range(n):
        t[arr[i][1]] = n-i
   # print(*t)