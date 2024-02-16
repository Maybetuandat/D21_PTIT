#include <bits/stdc++.h>
using namespace std;

const int MAXN = 15;

int n, dist[MAXN][MAXN], dp[1 << MAXN][MAXN];

int tsp() {
    // Kh?i t?o b?ng k?t qu? cho tru?ng h?p ban d?u (di t? thành ph? 0 d?n thành ph? 0)
    for (int i = 0; i < n; i++) {
        dp[1 << i][i] = dist[0][i];
    }

    // Tính toán b?ng k?t qu? cho các tr?ng thái khác
    for (int mask = 1; mask < (1 << n); mask++) {
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                for (int j = 0; j < n; j++) {
                    if (i != j && (mask & (1 << j))) {
                        if (dp[mask][i] == -1 || dp[mask][i] > dp[mask ^ (1 << i)][j] + dist[j][i]) {
                            dp[mask][i] = dp[mask ^ (1 << i)][j] + dist[j][i];
                        }
                    }
                }
            }
        }
    }

    // Tìm k?t qu? t?i uu
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (dp[(1 << n) - 1][i] != -1 && ans > dp[(1 << n) - 1][i] + dist[i][0]) {
            ans = dp[(1 << n) - 1][i] + dist[i][0];
        }
    }

    return ans;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> dist[i][j];
        }
    }

    memset(dp, -1, sizeof(dp));

    cout << "Minimum cost: " << tsp() << endl;

    return 0;
}


