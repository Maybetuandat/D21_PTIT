#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> adj[1005], r_adj[1005];
int v,e;
int vs[1005];
stack<int> st;
void input()
{
    cin>>v>>e;
    for(int i=0; i<=v; i++)
    {
        adj[i].clear();
        r_adj[i].clear();
    }
    for(int i=0; i<e; i++)
    {
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        r_adj[y].push_back(x);
    }
    memset(vs, 0, sizeof(vs));
}
void dfs1(int u)
{
    vs[u] = 1;
    for(int x : adj[u])
    {
        if(!vs[x])
        {
            dfs1(x);
        }
    }
    st.push(u);
}
void dfs2(int u)
{
    vs[u] = 1;
    for(int x : r_adj[u])
    {
        if(!vs[x])
        {
            dfs2(x);
        }
    }
}
void ct()
{
    input();
    for(int i=1; i<=v; i++)
    {
        if(!vs[i])
        {
            dfs1(i);
        }
    }
    int dem = 0;
    memset(vs, 0, sizeof(vs));
    while(!st.empty())
    {
        int top = st.top(); st.pop();
        if(!vs[top])
        {
            dem++;
            dfs2(top);
        }
    }
    if(dem == 1)
        cout<<"YES\n";
    else cout<<"NO\n";
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