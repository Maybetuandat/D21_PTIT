import math
def xuli():
    s1 = input()
    s = s1[::-1]
    print(s)
    n = int(s1)
    m = int(s)
    gcd = math.gcd(n, m)
    lcm = (n * m ) // gcd
    print(gcd)
    print(lcm)
    
for i in range(int(input())):
    xuli()