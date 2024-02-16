#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int v,e,u;
vector<int> adj[1001];
bool vs[1001];
void bfs(int u)
{
    cout<<u<<" ";
    vs[u] = true;
    queue<int> q;
    q.push(u);
    while(!q.empty())
    {
        int top = q.front(); q.pop();
        for(int x : adj[top])
        {
            if(!vs[x])
            {
                vs[x] = true;
                cout<<x<<" ";
                q.push(x);
            }
        }
    }
}
void ct()
{
    cin>>v>>e>>u;
    for(int i=0; i<=v; i++)
      adj[i].clear();
    for(int i=0; i<e; i++)
    {
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(vs, false, sizeof(vs));

    bfs(u);
    cout<<endl;
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        ct();
    }
    return 0;
}