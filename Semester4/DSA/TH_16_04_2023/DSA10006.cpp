#include<bits/stdc++.h>
using namespace std;
int v, e, u;
int ec[1001], dem ;
vector< vector<int>> adj;
bool check[1001];
void tree_dfs(int u)
{
	check[u] = true;
	for(int x : adj[u])
	{
		if(!check[x])
		{
			ec[x] = u;
			dem++;
			tree_dfs(x);
		}
	}
}
void ct()
{
	cin>>v>>e>>u;
	adj.clear();
	adj.resize(v + 2);
	for(int i=0; i<e; i++ )
	{
		int x,y; cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(check, false, sizeof(check));
	memset(ec, 0, sizeof(ec));
	dem = 0;
	tree_dfs(u);
	if(dem !=  v-1)
	{
		cout<<"-1\n";
		return;
	}
	for(int i=1; i<=v; i++)
	  if(ec[i] != 0)
	  cout<<ec[i]<<" "<<i<<endl;
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
