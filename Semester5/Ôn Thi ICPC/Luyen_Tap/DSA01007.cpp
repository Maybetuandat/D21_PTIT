#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int v,e,u;
vector<int> adj[1005];
typedef pair<int,int> ii;
vector<ii> ans;
int vs[1005];
void input()
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
    ans.clear();
    memset(vs, 0, sizeof(vs));

}
void bfs(int s)
{
    vs[s] = 1;
    queue<int> q;
    q.push(s);
    while(!q.empty())
    {
        int top  = q.front(); q.pop();
        for(int x : adj[top])
        {
            if(!vs[x])
            {
                vs[x] = 1;
                q.push(x);
                ans.push_back({x, top});

            }
        }
    }
    if(ans.size() != v-1)
        cout<<"-1\n";
    
    else
    {
        for(auto it : ans)
          cout<<it.second<<" "<<it.first<<endl;
    }
}
void ct()
{
        input();
        bfs(u);

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