#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a[1005];
int vs[1005];
int res;
bool check;
void DFS(int u, int v, int cnt)
{
    if (check)
        return;
    vs[u] = 1;
    if (u == v)
    {
        res = cnt;
        check = true;
        return;
    }
    for (auto x : a[u])
    {
        if (vs[x] == 0)
        {
            DFS(x, v, cnt + 1);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            a[i].clear();
        }
        for (int i = 1; i <= n - 1; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        int q;
        cin >> q;
        for (int i = 1; i <= q; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                vs[j] = 0;
            }
            check = 0;
            res = 0;
            int u, v;
            cin >> u >> v;
            DFS(u, v, 0);
            cout << res << endl;
        }
    }
    return 0;
}
