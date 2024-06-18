#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<vector<int>> adj;
bool check[1001];
int V, E,s, t;
int parent[1001];
void dfs(int u)
{
    check[u] = true;
    for(int x : adj[u])
    {
        if(!check[x])
        {
            parent[x] = u;
            dfs(x);
        }
    }
}
void ct()
{
    cin>>V>>E>>s>>t;
    memset(check, false, sizeof(check));
    adj.clear();
    adj.resize(V+2);
    for(int i=0; i<E; i++)
    {
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(s);
    if(!check[t])
    {
        cout<<"-1\n";
        return;
    }
    vector<int> ans;
    while(t != s)
    {
        ans.push_back(t);
        t = parent[t];
    }
    ans.push_back(s);
    reverse(ans.begin(), ans.end());
    for(int x : ans)
      cout<<x<<" ";
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