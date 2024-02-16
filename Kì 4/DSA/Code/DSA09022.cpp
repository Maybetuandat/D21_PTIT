#include<bits/stdc++.h>
using namespace std;
vector<int> ans[1001];
bool visited[1001];
void dfs(int i)
{
	cout<<i<<" ";
	visited[i] = true;
	for(int x : ans[i])
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

