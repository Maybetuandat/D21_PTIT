#include<bits/stdc++.h>
using namespace std;
int v, e, u;
int  dem ;
vector< vector<int>> adj;
bool check[1001];
vector<pair<int, int>> ans;
void tree_dfs(int u)
{
	check[u] = true;
	for(int x : adj[u])
	{
		if(!check[x])
		{
			ans.push_back({u, x});
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
	ans.clear();
	dem = 0;
	tree_dfs(u);
	if(dem !=  v-1)
	{
		cout<<"-1\n";
		return;
	}
	for(auto it : ans)
	  cout<<it.first<<" "<<it.second<<endl;
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
