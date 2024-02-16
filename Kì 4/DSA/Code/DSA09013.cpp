#include<bits/stdc++.h>
using namespace std;
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
void ct()
{
	cin>>v>>e;
	pair<int, int> pr[e+1];
	for(int i=1; i<=e; i++)
	   cin>>pr[i].first>>pr[i].second;
	for(int i=1; i<=e; i++)
	{
		adj.clear();
		adj.resize(v+2);
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
				if(dem > 1)
				{
					cout<<pr[i].first<<" "<<pr[i].second<<" ";
					break;
				}
				bfs(j);
			}
		}
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
		cout<<endl;
	}
}
