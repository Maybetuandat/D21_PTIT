#include <iostream>
#include <vector>
#include <stack>
#include <cstring>
using namespace std;
vector<int> adj[1001], r_adj[1001];
stack<int> st;
bool visited[1001];
int n, m;
void input()
{
	cin >> n >> m;
	for (int i = 0; i <= n; i++)
	{
		adj[i].clear();
		r_adj[i].clear();
	}
	memset(visited, 0, sizeof(visited));
	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		r_adj[y].push_back(x);
	}
}
void dfs1(int u)
{
	visited[u] = 1;
	for (int x : adj[u])
	{
		if (!visited[x])
		{
			dfs1(x);
		}
	}
	st.push(u);
}
void dfs2(int u)
{
	visited[u] = 1;
	for (int x : adj[u])
	{
		if (!visited[x])
		{
			dfs2(x);
		}
	}
}
int main()
{
	input();
	for (int i = 1; i <= n; i++)
	{
		if (!visited[i])
		{
			dfs1(i);
		}
	}

	memset(visited, 0, sizeof(visited));
	int res = 0;
	while (!st.empty())
	{
		int top = st.top();
		st.pop();
		if (!visited[top])
		{
			dfs2(top);
			res++;
		}
	}
	if (res == 1)
		cout << "YES\n";
	else
		cout << "NO\n";
	// co 3 buoc :
	// buoc 1: xac dinh thu tu sap xep toppo
	// buoc 2: dao nguoc do thi
	// buoc 3: dfs tim thanh phan lien thong manh
}