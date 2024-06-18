str = input()
n = len(str)
arr = [0] * n
maxx = 1
arr[0] = 1;
for i in range(1, n):
    arr[i] = str[i] == str[i - 1] and arr[i-1] + 1 or 1
    maxx = max(maxx, arr[i])
print(maxx)