#include<bits/stdc++.h>
using namespace std;
int v,e;
vector<vector<int>> adj;
bool bfs(int u)
{
	queue<int> q;
	q.push(u);
	bool check[v+2];
	memset(check, false, sizeof(check));
	check[u] = true;
	int parent[v+2];
	memset(parent, 0, sizeof(parent));
	while(!q.empty())
	{
		int k = q.front(); q.pop();
		for(int x : adj[k])
		{
			if(!check[x] )
			{
				q.push(x);
				check[x] = true;
				parent[x] = k;
			}
			else 
			{
				if(x != parent[k])
					return true;	
			} 
		}
	}
	return false;
}
void ct()
{
	 cin>>v>>e;
	adj.clear();
	adj.resize(v+2);
	for(int i=0; i<e; i++)
	{
		int x,y; cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(int i=1; i<=v; i++)
	{
		if(bfs(i))
		{
			cout<<"YES\n";
			return;
		}
	}
	cout<<"NO\n";
	
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
