n = int(input())
arr = list(map(int, input().split()))
sum = 0
for i in range(1, n):
    if(arr[i] >= arr[i-1]):
       continue
    else:
       sum += arr[i-1] - arr[i]
       arr[i] = arr[i-1] 
print(sum)