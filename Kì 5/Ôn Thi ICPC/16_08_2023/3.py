s = input()
from fractions import Fraction
x = Fraction(3, 2)
n = len(s)
sum = Fraction(0, 1)
for i in range(n):
    sum = sum + (int(s[i])) * (x ** (n - i - 1))
nguyen = sum.numerator // sum.denominator
du = sum.numerator % sum.denominator
if(du == 0):
    print(nguyen)
else:
    print(nguyen, end = " ")
    print(du, end = "/")
    print(sum.denominator)
