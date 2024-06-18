#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int Nmax = 1e3 + 9;
int  color[Nmax] = {0};
set<int> adj[Nmax];
int v,e , m;
void inp()
{
    cin>>v>>e>>m;
    for(int i=0; i<Nmax; i++)
      adj[i].clear();
    memset(color, 0, sizeof(color));
    for(int i=0; i< e; i++)
    {
        int x,y; cin>>x>>y;
        adj[x].insert(y);
        adj[y].insert(x);
    }
}
//kiem tra xem dinh u co the to mau c hay khong 
bool check(int u, int c)
{
    for (int x : adj[u])
    {
        if( color[x] == c)
           return false;

    }
    return true;
}
int solve(int c)
{
    int dem = 0;

    for(int i=1; i<=v; i++)
    {
        
        if(color[i] == 0 && check(i,c) == true)
        {
             color[i] = c;
              dem++;
        }   
    }
    return dem;
}
void ct()
{
        
        inp();
        int res = 0;
        for(int i=1; i<=m; i++)
        {
            res += solve(i);
            if(res >= v)
            {
                cout<<"YES\n";
                return;
            }
        }
        cout<<"NO\n";
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