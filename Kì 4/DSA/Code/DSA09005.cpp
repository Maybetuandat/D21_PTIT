#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
bool check[1001];
int v,e,u;
void input()
{
	cin>>v>>e>>u;
	for(int i=0; i<=v; i++)
	{
		adj[i].clear();
	}
	for(int i=0; i<e; i++)
	{
		int x,y; cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(check, false, sizeof(check));
}
void bfs(int u)
{
	queue<int> q;
	q.push(u);
	check[u] = true;
	while(!q.empty())
	{
		int v = q.front();
		q.pop();
		cout<<v<<" ";
		for(int x : adj[v])
		{
			if(!check[x])
			{
				q.push(x);
				check[x] = true;
			}
		}
	}
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		
		input();
		bfs(u);
		cout<<endl;
	}
}
