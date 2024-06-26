#include <bits/stdc++.h>
using namespace std;

int k, n, m, u, v;
vector<vector<int>> G;
vector<int> vt; // v? tr� c� ngu?i d?ng
vector<int> cnt; // s? ngu?i c� th? di qua
vector<bool> vs;

void DFS(int u) {
    vs[u] = true;
    cnt[u]++;
    for (int v : G[u]) {
        if (!vs[v]) {
            DFS(v);
        }
    }
}

void TestCase() {
    cin >> k >> n >> m;
    G.assign(n + 1, {});
    cnt.assign(n + 1, 0);
    vt.clear();
    for (int i = 0; i < k; ++i) {
        cin >> u;
        vt.push_back(u);
    }
    while (m--) {
        cin >> u >> v;
        G[u].push_back(v);
    }

    for (int u : vt) {
        vs.assign(n + 1, false);
        DFS(u);
    }
    int res = 0;
    for (int i = 1; i <= n; ++i) {
        if (cnt[i] == k)
            res++;
    }
    cout << res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}
