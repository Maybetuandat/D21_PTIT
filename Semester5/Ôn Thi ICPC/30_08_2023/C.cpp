#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n;
int pr[100006], sz[100006];
void init()
{
    for(int i=1; i<=n; i++)
    {
        pr[i] = i;
        sz[i] = 1;
    }
}
int Find(int u)
{
    if(pr[u] == u)
        return u;
    return pr[u] = Find(par[u]);
}
void Union(int a, int b )
{
    int u = Find(a);
    int v = Find(b);
    if(u == v)
      return;
    if(sz[u] < sz[v])
       swap(u, v);
    sz[u] += sz[v];
    pr[v] = u;
}
int main ()
{
    faster;
    cin>>n;
    init();
    for(int i=0; i < n-1; i++)
    {
        int x,y; cin>>x>>y;
    
     }
    int q ;cin>>q;
    while(q--)
    {
        int x,y; cin>>x>>y;
        int a = Find(x);
        int b = Find(y);
        cout<<
    }
  
}