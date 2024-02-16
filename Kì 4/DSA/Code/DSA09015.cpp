#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int V,E;
vector<vector<int> > adj;
int color[1001];
bool DFS(int u)
{
	color[u] = 1;
	for(int v : adj[u])
	{
		 if(color[v] == 0)
		 {
		 	if(DFS(v))
		 		  return true;

		 }
		 else if(color[v] == 1)  return true;
	}
	color[u]  =2;
	return false;
}
void ct()
{
		cin>>V>>E;
		adj.clear();
		adj.resize(V+2);
		for(int i=0; i<E; i++)
		{
			int x,y; cin>>x>>y;
			adj[x].push_back(y);
		}
		memset(color, 0, sizeof(color));
		for(int i=1; i<=V; i++)
		{
			if(DFS(i))
			{
				cout<<"YES\n";
				return;
			}
		}
		cout<<"NO\n";
}
int main ()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
	return 0;
}