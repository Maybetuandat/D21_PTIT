#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> adj[1001];
int v, ok = 0;
int vs[1001];
void halmiton(int u, int dem)
{
    if(dem == v)
    {
        ok = 1;
        return;
    }
    for(int x : adj[u])
    {
        if(!vs[x])
        {
            vs[x] = 1;
              halmiton(x, dem + 1);
              vs[x] = 0;
        }
    }
}
void ct()
{
        int e; cin>>v>>e;
        for(int i=0; i<=v; i++)
          adj[i].clear();

        ok = 0;
      

        for(int i=0; i<e; i++)
        {
            int x,y; cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);

        }
        for(int i=1; i<=v; i++)
        {
                memset(vs, 0, sizeof(vs));
                vs[i] = 1;
                halmiton(i, 1);
                if(ok)
                {
                    cout<<"1\n";
                     return;
                }
                
        }
         
        cout<<"0\n";
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