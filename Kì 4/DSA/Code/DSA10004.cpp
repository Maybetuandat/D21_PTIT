#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
int kt()
{
	int dem  = 0;
	for(int i=1; i<=v; i++)
	{
		if(adj[i].size() % 2 != 0)
			dem++;
	}
	if(dem == 0)
		 return 2;
	else if(dem == 2)
		  return 1;
		 else
		 	  return 0;
}
void ct()
{
	cin>>v>>e;
	adj.clear();
	adj.resize(v+2);
	memset(check, false, sizeof(check));
	for(int i=0; i<e; i++)
	{
		int x,y; cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	bfs(1);
	for(int i=1; i<=v; i++)
	  if(!check[i])
	  {
	  	cout<<"0\n";
	  	return;
	  }
	 cout<<kt()<<endl;
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