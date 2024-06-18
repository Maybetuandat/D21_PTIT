import math
def conver(s, base):
    sum = 0
    for i in range(base):
        k = int(s[i])
        sum = sum +  k * (2 ** (base - i - 1))
    if(sum == 10):
      return "A"
    if(sum == 11):
      return "B"
    if(sum == 12):
      return "c"
    if(sum == 13):
      return "D"
    if(sum == 14):
      return "E"
    if(sum == 15):
      return "F"
    return sum
def convert(s, coe):
    base = int(math.log2(coe))
    if(base == 1):
        print(s, end = "")
        return
    while( base != 0 and  len(s) % base != 0):
          s = "0" + s
    i = 0
    while(i < len(s)):
        s1 = s[ i  :   i + base]
        print(conver(s1, len(s1)) , end = "")
        i = i + base


t = int(input())
for i in range(t):
    coe = int(input())
    s = input()
    convert(s, coe)
    print()