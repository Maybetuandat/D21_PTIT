import math
x = list(map(int, input().split()))
a = list(map(int, input().split()))
sum = 0
for i in range(x[0]):
    sum1 = 0
    for j in range(1, a[i] + 1):
        sum1 += (j * (math.factorial(j) + a[i] )) % x[1]
        sum1 = sum1 % x[1]
    sum += sum1
    sum = sum % x[1]
print(sum)