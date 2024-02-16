#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin>>n;
    int a[n+ 1][n + 1];
    bool vs[n + 1][n + 1];
    memset(vs, false, sizeof(vs));
    int u; cin>>u;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
          cin>>a[i][j];
    }
    queue<int> q;
    q.push(u);
    int parent[1001];
    bool check[n+1];
    memset(check, false, sizeof(check));
    check[u] = true;
    int k;
    while(!q.empty())
    {
         k = q.front(); q.pop();
        for(int i=1; i<=n; i++)
        {
            if(a[k][i] == 1 && !vs[k][i])
            {
                q.push(i);
                check[i] = true;
                parent[i] = k;
                vs[k][i] = true;
                vs[i][k] = true;
            }
        }
    }
    for(int i=1; i<=n; i++)
      if(!check[i])
      {
        cout<<"No spanning tree\n";
        return 0;
      }
    vector<pair<int, int> > ans;
    while( u != k )
    {
        ans.push_back({u, parent[u]});
        u = parent[u];
    }
    for(auto it : ans)
      cout<<it.first<<" "<<it.second<<endl;
}