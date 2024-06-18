#include<bits/stdc++.h>
using namespace std;
int v, e, u;
int ec[1001], dem ;
vector< vector<int>> adj;
bool check[1001];
vector<pair<int, int>> ans;
void tree_bfs(int u)
{
	check[u] = true;
	queue<int> q;
	q.push(u);
	while(!q.empty())
	{
		int k = q.front(); q.pop();
		for(int x : adj[k])
		{
			if(!check[x])
			{
				check[x] = true;
				ans.push_back({k , x});
				q.push(x);
				dem++;
			}
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
	tree_bfs(u);
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
