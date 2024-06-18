#include<bits/stdc++.h>
using namespace std;
int V,E, v, u;
vector<int> adj[1001];
bool check[1001];
typedef long long ll;
int parent[1001];
void dfs(int u)
{
	check[u] = true;
	for(int x : adj[u])
	{
		if(!check[x])
		{
			parent[x] = u;
			dfs(x);
		}
	}
}
void ct()
{
	cin>>V>>E>>u>>v;
	for(int i=0; i<=V; i++)
		  adj[i].clear();
	for(int i=0; i<E; i++)
	{
		int x,y; cin>>x>>y;
		adj[x].push_back(y);	
	}
	memset(check, false, sizeof(check));
	memset(parent, 0, sizeof(parent));
	dfs(u);
	if(!check[v])
	{
		cout<<"-1\n";
		return;
	}
	vector<int> path;
	while(u != v)
	{
		path.push_back(v);
		v= parent[v];
	}
	path.push_back(u);
	reverse(path.begin(), path.end());
	for(int x : path)
		  cout<<x<<" ";
	cout<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
	return 0;
}