#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
int n;
bool check[1001];
void bfs(int u)
{
	check[u] = true;
	queue<int> q;
	q.push(u);
	while(!q.empty())
	{
		int v = q.front(); q.pop();
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
void ct()
{
	 cin>>n;
	 adj.clear();
	 adj.resize(n+2);
	memset(check, false, sizeof(check));
	for(int i=1; i<n; i++)
	{
		int x,y; cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	bfs(1);
	for(int i=1; i<=n; i++)
	{
		if(!check[i])
		{
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
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
