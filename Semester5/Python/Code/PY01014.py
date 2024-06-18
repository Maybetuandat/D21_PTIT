x = list(map(int, input().split()))
ans= []
for i in range(1, x[2] // x[1] + 1):
    m = i * x[1] - x[0]
    if(m > 0):
        ans.append(m)
if(len(ans) == 0):
    print("-1")
else:
  for i in ans:
    print(i, end = " ")