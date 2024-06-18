import math
nmax = int(1e6)
isprime1 = [0] * (nmax + 16)
def snt(n):
     if(n <= 1):
          return False
     for i in range(2, int(math.sqrt(n)) + 1):
          if(n % i == 0):
               return False
     return True                  
def xuli():
     s = input()
     adu = "2357"
     sum = 0
     for i in s:
          if(i not in adu):
               return "No"
          sum  = sum +  int(i)
     if(snt(sum) == False):
        return "No"
     cv_s = s[::-1]
     if(snt(int(s)) == False or  snt(int(cv_s) == False)):
        return "No"
    
     return "Yes"
     
for i in range(int(input())):
    print(xuli())