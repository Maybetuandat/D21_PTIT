
dp = [[0] * (44) for _ in range(44)]
def count_binary_strings(n, k):
    if n < k:
        return 0
    dp[0][0] = 1
    for i in range(1, n + 1):
        for j in range(k + 1):
            dp[i][j] = dp[i - 1][j]
            if j > 0:
                dp[i][j] += dp[i - 2][j - 1]
n, k = map(int, input().split())
count_binary_strings(n, n // 2 + 1)
