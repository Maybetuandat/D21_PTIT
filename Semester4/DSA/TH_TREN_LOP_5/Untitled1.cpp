#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAXN = 16;
const int INF = 1e9;

int n;
int dist[MAXN][MAXN];
int dp[1 << MAXN][MAXN];

int tsp(int mask, int cur) {
    if (mask == (1 << n) - 1) {
        return dist[cur][0];
    }
    if (dp[mask][cur] != -1) {
        return dp[mask][cur];
    }
    int ans = INF;
    for (int i = 0; i < n; i++) {
        if ((mask & (1 << i)) == 0) {
            ans = min(ans, dist[cur][i] + tsp(mask | (1 << i), i));
        }
    }
    return dp[mask][cur] = ans;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> dist[i][j];
        }
    }
    memset(dp, -1, sizeof(dp));
    int ans = tsp(1, 0);
    cout << ans << endl;
    return 0;
}

