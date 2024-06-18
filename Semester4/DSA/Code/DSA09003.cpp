#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n,m;  cin>>n>>m;
	vector<int> adj[n + 1];
	for(int i=1; i<=m; i++)
	{
		int x,y; cin>>x>>y;
		adj[x].push_back(y);
	}
	for(int i=1; i<=n; i++)
	{
		sort(adj[i].begin(), adj[i].end());
		cout<<i<<": ";
		for(int x : adj[i])
		  cout<<x<<" ";
		cout<<endl;
	}
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
