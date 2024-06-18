# n = int(input())
# a = list(map(int, input().split()))
# a.sort()
# def xuli():
#     print(*a)
#     # if a[0] != 1:
#     #     return 1
#     for i in range(n-1):
#         if a[i] + 1 != a[i+1]:
#             return a[i] + 1
#     return n + 1
# print(xuli())
def xuli():
    n = int(input())
    a = list(map(int,input().split()))
    dem = [0] * 100000
    maxx = 0
    for i in a:
        dem[i] += 1
        maxx = max(maxx, i)
    for i in range(1, maxx + 1):
        if dem[i] == 0:
            print(i)
            return
    print(maxx + 1)
xuli()