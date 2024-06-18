n = int(input())
sum = 0
index = 1

for i in range(1, n+1):
  index = index * i
  sum = sum + index
print(sum)
