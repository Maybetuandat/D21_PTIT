from math import*
def demuoc(n):
     dem = 0
     for i in range(2, int(sqrt(n)) + 1):
            if n % i == 0:
                   k = n // i
                   if i != k:
                          dem += 2
                   else:
                          dem += 1
     dem += 2
     return dem     
for i in range(int(input()) + 1):
        if demuoc(i) == 9:
                print(i)