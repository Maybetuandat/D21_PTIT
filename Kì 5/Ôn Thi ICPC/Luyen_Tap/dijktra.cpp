#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll v, e, s;
vector<pair<ll, ll>> adj[1001];
void input()
{
    cin>>v>>e>>s;
    for(ll i=1; i<=v; i++)
      adj[i].clear();
    
    for(ll i=0; i<e; i++)
    {
        ll x, y, w;  cin>>x>>y>>w;
        adj[x].push_back({y, w});
        adj[y].push_back({x, w});
    }
}
const ll INF = 1e9;
void dijktra(ll s)
{
    vector<ll> d(v+2, INF);
    d[s] = 0;
    priority_queue<pair<ll, ll> , vector<pair<ll,ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, s});
    while(!pq.empty())
    {
        pair<ll, ll> top = pq.top(); pq.pop();
        ll u = top.second;
        ll kc = top.first;
        if(kc > d[u])
            continue;
        for(auto it : adj[u])
        {
             
            
             if(d[it.first] > d[u] + it.second)
             {
                d[it.first] = d[u] + it.second;
                pq.push({d[it.first], it.first});
             }
        }
    }
    for(ll i=1; i<=v; i++)
        cout<<d[i]<<" ";
}
void ct()
{   
        input();
        dijktra(s);
        cout<<endl;
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll t; cin>>t;
    while(t--)
    {
        ct();
    }
    return 0;
}