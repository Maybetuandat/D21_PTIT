#include<bits/stdc++.h>
using namespace std;
bool vs[1001][1001];
int x[]={-1, -1,  -1,  0, 0,  1,  1, 1};
int y[]={-1,  0,   1, -1, 1, -1,  0, 1};
int n,m;
int a[1001][1001];
void dfs(int i, int j)
{
	vs[i][j] = true;
	for(int k=0; k<8; k++)
	{
		int i1 = i + x[k];
		int j1 = j + y[k];
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && !vs[i1][j1] && a[i1][j1] == 1)
		{
			dfs(i1, j1);
		}
	}
}
void ct()
{
	 cin>>n>>m;
	for(int i=1; i<=n; i++)
	  for(int j=1; j<=m; j++)
	     cin>>a[i][j];
	int dem = 0;
	memset(vs, false, sizeof(vs));
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		   if(a[i][j] == 1  && !vs[i][j])
		   {
		   	dem++;
		   	dfs(i,j);
		   }
	}
	cout<<dem<<endl;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
