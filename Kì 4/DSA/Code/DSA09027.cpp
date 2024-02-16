#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<vector<int>> adj;
bool check[1001];
int n,m, adu1, adu2;
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
			if(x == adu2)
				  return;
		}
		}
	}
}
void ct()
{
	cin>>n>>m;
	adj.clear();
	adj.resize(n+2);
	for(int i=0; i<m; i++)
	{
		int x,y; cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int q; cin>>q;
	while(q--)
	{
		memset(check, false, sizeof(check));
		 cin>>adu1>>adu2;
		bfs(adu1);
		if(!check[adu2])
			cout<<"NO\n";
		
		else
			  cout<<"YES\n";
	}
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