#include <bits/stdc++.h>
using namespace std;
int f[1005];
int n;
vector<int> a[1005];
int vs[1005];
int par[1005];
void BFS()
{
    queue<int> q;
    q.push(1);
    par[1] = 0;
    vs[1] = 1;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (auto it : a[x])
        {
            if (vs[it] == 0)
            {
                vs[it] = 1;
                par[it] = x;
                q.push(it);
            }
        }
    }
}
void path(int e)
{
    stack<int> st;
    while (e != 1)
    {
        st.push(e);
        e = par[e];
    }
    cout << 1 << " ";
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
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
            f[i] = 0;
            vs[i] = 0;
            a[i].clear();
        }
        for (int i = 1; i <= n - 1; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
            f[x] = 1;
        }
        BFS();
        for (int i = 1; i <= n; i++)
        {
            if (f[i] == 0)
            {
                path(i);
            }
        }
    }
    return 0;
}
