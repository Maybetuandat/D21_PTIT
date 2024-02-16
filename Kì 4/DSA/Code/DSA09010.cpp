#include<bits/stdc++.h>
using namespace std;
stack<int> st;
int const maxn = 1001;
vector<int> adj[maxn], r_adj[maxn];
int e,v;
bool check[maxn];
void input()
{
	cin>>v>>e;
	for(int i=1; i<=v; i++)
	{
		adj[i].clear();
		r_adj[i].clear();
	}
	//chuyen tu danh sach canh sang danh sach ke
	// tao luon do thi co huong dao nguoc cung : TG
	for(int i=0; i<e; i++)
	{
		int x,y; cin>>x>>y;
		adj[x].push_back(y);
		r_adj[y].push_back(x);
	}
	
}
void dfs1(int u)
{
	//dfs de duyet tat ca cac dinh trong do thi
	check[u] = true;
	for(int x : adj[u])
	{
		if(!check[x])
		{
			check[x] = true;
			dfs1(x);
		}
	}
	st.push(u);
}
void dfs2(int u)
{
	//dfs de in ra thanh phan lien thong manh trong do thi
	check[u] = true;
	for(int x : r_adj[u])
	{
		if(!check[x])
		{
			check[x] = true;
			dfs2(x);
		}
	}
}
void ct()
{
		//   B1: nhap du lieu dau vao
	input();

	memset(check, false, sizeof(check));
	//duyet tat ca cach dinh trong do thi va push vao stack
	for(int i=1; i<=v; i++)
	{
		if(!check[i])
		  dfs1(i);
	}
	// B3:pop cac dinh trong stack va goi dfs den tung dinh trong do thi TG
	memset(check, false, sizeof(check));
	int dem  = 0;
	while(!st.empty())
	{
		int u = st.top(); st.pop();
		if(!check[u])
		{
			dfs2(u);
			dem++;
		}
	}
	if(dem == 1)
	  cout<<"YES\n";
	else
	  cout<<"NO\n";
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
}
