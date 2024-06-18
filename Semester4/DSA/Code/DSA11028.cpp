#include <bits/stdc++.h>
using namespace std;
vector<int> a[100005];
int n;
int vs[100005];
void BFS()
{
    queue<pair<int, int>> q;
    int kq = 0;
    q.push({1, 0});
    vs[1] = 1;
    while (!q.empty())
    {
        auto x = q.front();
        kq = max(kq, x.second);
        q.pop();
        for (auto it : a[x.first])
        {
            if (vs[it] == 0)
            {
                vs[it] = 1;
                q.push({it, x.second + 1});
            }
        }
    }
    cout << kq << endl;
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
            vs[i] = 0;
        }
        for (int i = 1; i <= n - 1; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        BFS();
    }
    return 0;
}
