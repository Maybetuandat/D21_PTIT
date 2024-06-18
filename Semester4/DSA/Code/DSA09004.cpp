#include<bits/stdc++.h>
using namespace std;
vector<int> ans[1001];
bool visited[1001];
void dfs(int u)
{
	   cout<<u<<" ";
	   visited[u] = true;
	   for(int x : ans[u])
	   {
	   	if(!visited[x])
	   		dfs(x);
	   }
}
void ct()
{
	int v,e,u; cin>>v>>e>>u;
	for(int i=1; i<= v; i++)
	{
		ans[i].clear();
		visited[i] = false;	
	}
	  
	for(int i=0; i<e; i++)
	{
		int x,y; cin>>x>>y;
		ans[x].push_back(y);
		ans[y].push_back(x);
	}
	dfs(u);
}

int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
		cout<<endl;
	}
}
