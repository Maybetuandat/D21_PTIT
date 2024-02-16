def ucln(a, b):
      while b != 0:
           du = a % b
           a = b
           b = du
      return a
t = int(input())
while t > 0:
   a = int(input())
   b = int(input())
   x = int((a * b) // ucln(a, b))
   print(x) 
   t = t-1
