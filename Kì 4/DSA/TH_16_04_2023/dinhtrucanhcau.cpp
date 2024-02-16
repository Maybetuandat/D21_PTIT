#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
int v, e;
bool check[1001];
void bfs(int u)
{
	queue<int> q;
	q.push(u);
	check[u] = true;
	while(!q.empty())
	{
		int y = q.front(); q.pop();
		for(int x : adj[y])
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
	cin>>v>>e;
	pair<int, int> pr[e+1];
	for(int i=1; i<=v; i++)
	   adj[i].clear();
	for(int i=1; i<=e; i++)
	{
		int x,y; cin>>x>>y; pr[i].first = x; pr[i].second = y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int tplt = 0;
	memset(check, false, sizeof(check));
	for(int i=1; i<=v; i++)
	{
		if(!check[i])
		{
			tplt++;
			bfs(i);
		}
	}
	int dinhtru = 0, canhcau = 0;
	for(int i=1; i<=v; i++)
	{
		memset(check, false, sizeof(check));
		check[i] = true;
		int dem = 0;
		for(int j=1; j<=v; j++)
		{
			if(!check[j])
			{
				dem++;
				bfs(j);
			}
		}
		if(dem > tplt)
		  dinhtru++;
	}
	
	
	
	
	
	///// canh cau
	
	
	
	
	
	
	
	
	
	
	
		for(int i=1; i<=e; i++)
	{
	
	
				for(int i=1; i<=v; i++)
	   				adj[i].clear();
	
	
		for(int j = 1; j<=e; j++)
		{
			if(j != i)
			{
			  adj[pr[j].first].push_back(pr[j].second);
			  adj[pr[j].second].push_back(pr[j].first);	
			}
			  
		}
		int dem  = 0;
		memset(check, false, sizeof(check));
		for(int j=1; j<=v; j++)
		{
			if(!check[j])
			{
				dem++;
				bfs(j);
			}
		}
		if(dem > tplt)
		  canhcau++;
	}	
	cout<<dinhtru<<" "<<canhcau<<endl;
}
int main ()
{
	int t = 1;
	while(t--)
	{
		ct();
	}
}
