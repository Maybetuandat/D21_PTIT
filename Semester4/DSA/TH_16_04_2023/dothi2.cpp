#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int v,e,u;
vector<vector<int>> adj;
bool check[1001];
int parent[1001];
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    check[u] = true;
    while(!q.empty())
    {
        int k = q.front(); q.pop();
        for(int x : adj[k])
        {
            if(!check[x])
            {
                q.push(x);
                check[x] = true;
                parent[x] = k;
            }
        }
    }
}
void ct()
{
    cin>>v>>e>>u;
    adj.clear();
    adj.resize(v+2);
    memset(check, false, sizeof(check));
    for(int i=0; i<e; i++)
    {
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }    
    bfs(u);
    for(int i=1; i<=v; i++)
    {
        if(i != u)
        {


            if(!check[i])
              cout<<"No path"<<endl;
            else
            {
                vector<int> path;
                int j  = u;
                while(j != i)
                {
                    path.push_back(j);
                    j = parent[j];
                }
                path.push_back(i);
                reverse(path.begin(), path.end());
                for(int x : path)
                  cout<<x<<" ";
                cout<<endl;
            }

        }
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
