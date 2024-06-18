#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<int> parent;
vector<bool> visited;

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        for (int x : adj[front])
        {
            if (!visited[x])
            {
                q.push(x);
                visited[x] = 1;
                parent[x] = front;
            }
        }
    }
}
void ct()
{
    adj.clear();
    parent.clear();
    visited.clear();
    int n, m, s, u;
    cin >> n >> m >> s >> u; // di tu dinh s den dinh u
    adj.resize(n + 2);
    parent.resize(n + 2);
    visited.resize(n + 2);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bfs(s);
    if (!visited[u])
    {
        cout << "-1\n";
        return;
    }
    else
    {
        vector<int> ans;
        while (u != s)
        {
            ans.push_back(u);
            u = parent[u];
        }
        ans.push_back(s);
        cout << s << endl;
        reverse(ans.begin(), ans.end());
        for (int x : ans)
            cout << x << " ";
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ct();
    }
}