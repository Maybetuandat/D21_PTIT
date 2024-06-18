#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> adj[1001];
int v,e, u;
bool vs[1001];
void dfs(int k)
{
    cout<<k<<" ";
    vs[k] = true;
    for(int x : adj[k])
    {
        if(!vs[x])
        {
            dfs(x);
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
        int x, y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(vs, false, sizeof(vs));
    dfs(u);
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