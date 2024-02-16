#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
int v, e, u;
bool vs[1001];
void bfs(int u)
{
	cout<<u<<" ";
	queue<int> q;
	q.push(u);
	vs[u] = true;
	while(!q.empty())
	{
		int k = q.front(); q.pop();
		for(int x : adj[k])
		  if(!vs[x])
		  {
		  	q.push(x);
		  	vs[x] = true;
		  	cout<<x<<" ";
		  }
	}
}
void ct()
{
	cin>>v>>e>>u;
	for(int i=0; i<=v; i++)
	  adj[i].clear();
	for(int i=0; i<e; i++)
	{
		int x,y; cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(vs, false, sizeof(vs));
	bfs(u);
	cout<<endl;
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
