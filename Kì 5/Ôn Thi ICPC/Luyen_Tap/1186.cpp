#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> adj[1001];
bool vs[1001];
int v, e , u, t ;
int parent[1001];
void bfs(int u)
{
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
                q.push(x);
                vs[x] = true;
                parent[x] = top; 
            }
        }
     }
}
void ct()
{
    cin>>v>>e>>u>>t; // tim duong di tu u den t    
    memset(vs, false, sizeof(vs));
    for(int i=0; i<=v; i++)
      adj[i].clear();
    for(int i=0; i<e; i++)
    {
        int x,y; cin>>x>>y;
        adj[x].push_back(y);

    }

    bfs(u);
    if(!vs[t] )
      cout<<"-1\n";
    else
    {
            int i = t;
            vector<int> path;
            while(i != u)
            {
                path.push_back(i);
                i = parent[i];
            }
            path.push_back(u);
            reverse(path.begin(), path.end());
            for(int x : path)
              cout<<x<<" ";
            cout<<endl;
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