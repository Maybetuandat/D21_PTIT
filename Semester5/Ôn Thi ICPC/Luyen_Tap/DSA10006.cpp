#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int v, e, u;
vector<int> adj[1005];
typedef pair<int, int> ii;
vector<ii> ans;
int vs[1005];
void input()
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
    memset(vs, 0, sizeof(vs));
    ans.clear();
}
void dfs(int s)
{
    vs[s] = 1;
    for(int x : adj[s])
      if(!vs[x])
      {
        ans.push_back({x, s});
        dfs(x);

      }
        
}
void ct()
{
    input();
    dfs(u);
    int dem = 0;
    for(int i=1; i<=v; i++)
        if(vs[i] == 1)
          dem++;
    if(dem != v)
        cout<<"-1\n";
    else
    {   
        for(auto it : ans)
          cout<<it.second<<" "<<it.first<<endl;
    }
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