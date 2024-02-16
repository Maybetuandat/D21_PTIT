from fractions import Fraction
t = int(input())
for i in range(t):
    n = int(input())
    ans = Fraction(0, 1)
    if(n % 2 == 0):
        i = 2
    else:
        i = 1
    while(i <= n):
        ans += Fraction(1, i)
        i += 2
    print("%6f" % (ans.numerator / ans.denominator))

