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
				check[x] = true;
				q.push(x);
			}
		}
	}
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
	memset(check, false, sizeof(check));
	int dem = 0;
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
