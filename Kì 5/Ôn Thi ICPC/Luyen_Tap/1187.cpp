#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int parent[1001]; 
int num[1001];
void init()
{
    for(int i=1; i<=n; i++)
    {
        parent[i] = i;
        num[i] = 1;
    }
}
int Find( int v)
{

    if( v == parent[v])
      return v;
    return parent[v] = Find(parent[v]);

}
void Union(int u, int v)
{

    int a = Find(u);
    int b = Find(v);
    if(a == b)
      return;
    if (num[a] < num[b]) swap(a,b);
    num[a] += num[b];
	parent[b] = a;
}
void ct()
{
    int m; cin>>n>>m;
    init();
    for(int i=0; i < m; i++)
    {
        int x, y; cin>>x>>y;
        Union(x, y);
    }
    int q; cin>>q;
    while(q--)
    {
        int x,y; cin>>x>>y;
        if(Find(x) != Find(y))
           cout<<"NO\n";
        else
           cout<<"YES\n";
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