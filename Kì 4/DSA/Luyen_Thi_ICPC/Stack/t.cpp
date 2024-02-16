#include<bits/stdc++.h>
using namespace std;
int V, E, u, v, x, y;
vector<vector<int>> G;
vector<bool> vs;
void bfs(int u)
{
     queue<int> q;
     q.push(u);
    while (!q.empty()) {
        int u = q.front(); q.pop();
        if (vs[u] == false) {
            cout << u << " ";
            vs[u] = true;
        }

        for (int v : G[u]) {
            if (vs[v] == false) {
                q.push(v);
            }
        }
    }
    
}
int main()
{
    int t; cin >> t;
    while(t--)
	{
         cin >> V >> E >> u;
    G.clear(); G.resize(V + 1);
    vs.clear(); vs.resize(V + 1, 0);
    while (E--) 
	{
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    bfs(u);
        cout << endl;
    }
}
