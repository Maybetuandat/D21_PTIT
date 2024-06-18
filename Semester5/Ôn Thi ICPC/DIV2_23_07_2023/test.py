def is_possible(arr, n, k, target_sum):
    count_arr = 1
    sum = 0

    for i in range(n):
        if arr[i] > target_sum:
            return False

        if sum + arr[i] > target_sum:
            count_arr += 1
            sum = arr[i]
        else:
            sum += arr[i]

    return count_arr <= k

def Find(arr, n, k):
    low = max(arr)
    high = sum(arr)

    while low < high:
        mid = (low + high) // 2

        if is_possible(arr, n, k, mid):
            high = mid
        else:
            low = mid + 1

    return low


n, k = map(int, input().split())
arr = list(map(int, input().split()))


result = Find(arr, n, k)
print(result)
