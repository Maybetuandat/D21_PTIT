#include<bits/stdc++.h>
using namespace std;
int v,e;
vector<vector<int>> adj;
bool check[1001];
void bfs(int u)
{
	queue<int> q;
	q.push(u);
	check[u] = true;
	while(!q.empty())
	{
		int k = q.front(); q.pop();
		for(int x : adj[k])
		{
			if(!check[x])
			{
				q.push(x);
				check[x] = true;
			}
		}
	}
}
void ct()
{
	cin>>v>>e;
	adj.resize(v+1);
	for(int i=0; i<= v; i++)
	   adj[i].clear();
	for(int i=0; i<e; i++)
	{
		int x,y; cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(check, false, sizeof(check));
	int dem  = 0;
	for(int i=1; i<=v; i++)
	{
		if(!check[i])
		{
			dem++;
			bfs(i);
		}
		
	}
	cout<<dem<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
