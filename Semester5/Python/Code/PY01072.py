def cout():
   # print(a)
    for j in range (1, k + 1):
        print(s[a[j] - 1], end = " ")
    print()
def trial(i):
    for j in  range (a[i-1] +1, n - k + i +1):
        a[i] = j
        if(i == k):
            cout()
        
        else:
            trial(i + 1)
n , k = map(int, input().split())
s = sorted(list(set(map(int, input().split()))))
n = len(s)
a = [ 0] * (k + 1)
trial(1)