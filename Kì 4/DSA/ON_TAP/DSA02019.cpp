#include <bits/stdc++.h>
using namespace std;
vector<int> a[30];
int vs[30][30];
int n, m, kq;
void DFS(int u, int cnt)
{
    for (int x : a[u])
    {
        if (vs[u][x] == 0 && vs[x][u] == 0)
        {
            vs[u][x] = 1;
            vs[x][u] = 1;
            DFS(x, cnt + 1);
            vs[u][x] = 0;
            vs[x][u] = 0;
        }
    }
    kq = max(kq, cnt);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        kq = 0;
        for (int i = 1; i <= 20; i++)
        {
            a[i].clear();
        }
        cin >> n >> m;
        for (int i = 1; i <= m; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x + 1].push_back(y + 1);
            a[y + 1].push_back(x + 1);
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                vs[i][j] = 0;
            DFS(i, 0);
        }
        cout << kq << endl;
    }
    return 0;
}
