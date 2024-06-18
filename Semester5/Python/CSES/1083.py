n = int(input())
if(n == 2):
    k = int(input())
    if (k == 1):
        print("2")
    else:
        print("1")
    exit();
arr = list(map(int, input().split()))
arr = sorted(arr)
ok = 0
for i in  range(0, n-2):
   if(arr[i] + 1 != arr[i+1] ):
       print(arr[i] + 1)
       ok = 1
       break 
if(ok == 0):
   print(n)