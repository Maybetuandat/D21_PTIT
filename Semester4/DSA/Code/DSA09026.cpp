#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int V,E,u,v;
vector<vector<int>> adj;
bool check[1001];
int parent[1001];
void bfs(int u)
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
				parent[x] = k;
				check[x] = true;
				q.push(x);
			}
		}
	}
	int a[]
}
void ct()
{
	cin>>V>>E>>u>>v;
	adj.clear();
	adj.resize(V+2);
	for(int i=0; i<E; i++)
	{
		int x,y; cin>>x>>y;
		adj[x].push_back(y);
	}
	memset(check, false, sizeof(check));
	memset(parent, 0, sizeof(parent));
	bfs(u);
	if(!check[v])
	{
		cout<<"-1\n";
		return;
	}
	vector<int> path;
	while(u != v)
	{
		path.push_back(v);
		v = parent[v];
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