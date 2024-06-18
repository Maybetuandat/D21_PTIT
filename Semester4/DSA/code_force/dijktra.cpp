#include<bits/stdc++.h>
using namespace std;
int main ()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int v,e; 
	cin>>v>>e;
	vector<pair<int, int>> adj[1001];
	for(int i=1; i<=1001; i++)
	adj[i].clear();
	for(int i=0; i<e; i++)
	{
		int x , y, z; cin>>x>>y>>z;
		adj[x].push_back({y, z});
		adj[y].push_back({x, z});
	}
	vector<long long > d(v+1, 1000);
	d[1] = 0;
	priority_queue<  pair<int, int> , vector<pair<int, int>>, greater<pair<int, int>> > q;
	// dung de luu lai khoang cach de di den dinh do va dinh
	// khoang cach luu o first, vi tri dinh luu o second
	q.push({0, 1});
	while(!q.empty())
	{
		pair<int, int> top = q.top(); q.pop();
		int kc = top.first;
		int i = top.second;
		if(kc > d[i])
		  continue;
		for(auto it : adj[i])
		{
			int j = it.first;
			int w = it.second;
			if(d[i] + w < d[j])
			{
				d[j] = d[i] + w;
				q.push({d[j], j});
			}
		}
	}
	for(int i=1; i<=v; i++)
	  cout<<d[i]<<" ";
	
}
