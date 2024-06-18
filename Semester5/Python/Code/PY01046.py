def thaphn(n, a, b, c):
    if(n == 1):
        print(a, "->", c)
        return
    thaphn(n-1, a, c, b)
    print(a , "->", c)
    thaphn(n-1, b, a, c)    
t = int(input())
a = 'A'
b = 'B'
c = 'C'
thaphn(t, a, b, c)