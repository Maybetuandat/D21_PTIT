#include <iostream>
#include <vector>

using namespace std;

long long CountBinaryStrings(int n, int k) {
    vector<vector<long long>> dp(n + 1, vector<long long>(k + 1, 0));

    // Trường hợp đặc biệt: n < k
    if (n < k) {
        return 0;
    }

    // Khởi tạo giá trị ban đầu
    dp[0][0] = 1;

    // Tính dp[i][j] cho i từ 1 đến n và j từ 0 đến k
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= k; ++j) {
            dp[i][j] = dp[i - 1][j];
            if (j > 0) {
                dp[i][j] += dp[i - 2][j - 1];
            }
        }
    }

    return dp[n][k];
}

int main() {
    int n ;  cin>>n;
    int k = 3;

    long long result = CountBinaryStrings(n, k);

    cout<<result<<endl;

    return 0;
}
