#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<pair<ll, ll>> adj[100009];
ll v,e;
ll par[100009];
void dijktra(ll s)
{
	ll inf = INT_MAX;
	int vs[100009] = {0};
	vector<ll> d(v + 1, inf);
	d[s] = 0;
	vs[s] = 1;
	par[s] = s;
	priority_queue<pair<ll, ll> , vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
	//pq se luu dinh  va khoang cach ngan nhat den dinh do
	//first se luu khoang cach, second se luu dinh
	
	pq.push({0, s});
	while(!pq.empty())
	{
		pair<ll, ll> top = pq.top(); pq.pop();
		ll u = top.second;
		ll kc = top.first;
		vs[u] = 1;
		if(kc > d[u])    // truong hop dinh u da duoc cap  nhat thi khong can xet nua 
		  continue;
		  
		//xet cac dinh lien thuoc voi u
		for(auto it : adj[u])
		{
			  // first se luu dinh ke, con second se luu trong so tu dinh u den dinh v
			  ll x = it.first;
			  ll w = it.second;
			  if(d[u] + w < d[x] )
			   {
			   		d[x] = d[u] + w;
			   		pq.push({d[x], x});
			   		vs[x] = 1;
			   		par[x] = u;// truoc v la u
			   }
		}
	} 
	if(vs[v] == 0)
	  cout<<"-1";
	else
	{
		vector<ll> path;
		ll t = v;
		
		while(1)
		{
			path.push_back(t);
			if(t == 1)
			  break;
			t = par[t];
		}
		reverse(path.begin(), path.end());
		for(ll x: path)
		cout<<x<<" ";
	}

	
}
void ct()
{
	 cin>>v>>e;
	for(ll i=0; i<e; i++)
	{
		ll x,y, w; cin>>x>>y>>w;
		adj[x].push_back({y,w});
		adj[y].push_back({x, w});
	}
	dijktra(1);
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ct();
}
