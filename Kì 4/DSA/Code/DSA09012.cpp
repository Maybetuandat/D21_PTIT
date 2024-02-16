#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
int v, e,check[1001];
void bfs(int u)
{
	queue<int> q;
	q.push(u);
	while(!q.empty())
	{
		int y = q.front(); q.pop();
		for(int x : adj[y])
		{
			if(!check[x])
			{
				q.push(x);
				check[x] = 1;
				
			}
		}
	}
}
void ct()
{
	 cin>>v>>e;
	for(int i=1; i<=v; i++)
	   adj[i].clear();
	for(int i=0; i<e; i++)
	{
		int x,y; cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(int i=1; i<=v; i++)
	{
		memset(check, 0, sizeof(check));
		check[i] = 1;
		int dem = 0;
		for(int j=1; j<=v; j++)
		{
			if(!check[j])
			{
				dem++;
				bfs(j);
			}
		}
		if(dem > 1)
		  cout<<i<<" ";
	}
	cout<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
