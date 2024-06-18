n = int(input())
a = list(map(float, input().split()))
a.sort()
minn = a[0]
maxx = a[-1]
vs = [0] * n 
for i in range(len(a)):
   if a[i] == minn:
      vs[i] = 1
   if a[i] == maxx:
      vs[i] = 1
dem = 0
sum = 0
for i in range(n):
   if vs[i] == 0:
      sum += a[i]
      dem += 1
sum = float(sum / dem)
print("%.2f"  %sum)