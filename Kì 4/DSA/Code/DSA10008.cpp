// thuat toan dijktra
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int V, E;
vector<pair<int, int> > adj[10001];
#define  inf 1e9
void dijktra(int s)
{
	vector<ll> d(V+1, inf);
	d[s] = 0;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
	q.push({0, s});
	while(!q.empty())
	{
		pair<int, int> top = q.top(); q.pop();
		int u = top.second;
		int kc = top.first;
		if(kc > d[u])  continue;
		for(auto it : adj[u])
		{
			int v = it.first;
			int w = it.second;
			if(d[v] > d[u] + w)
			{
				d[v] = d[u] + w;
				q.push({d[v], v});
				
			}
		}
	}
	for(int i=1; i<=V; i++)
	  cout<<d[i]<<" ";
	cout<<endl;
}
void ct()
{
	int u; cin>>V>>E>>u;
	for(int i=0; i<1001; i++)
	  adj[i].clear();
	for(int i=1; i<=E; i++)
	{
		int x , y , z;  cin>>x>>y>>z;// z la trong so
		adj[x].push_back({y, z});	
			adj[y].push_back({x, z});
	}	
	dijktra(u);
}

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
