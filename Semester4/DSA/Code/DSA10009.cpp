#include<bits/stdc++.h>
using namespace std;
void init()
{
	
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n,m; cin>>n>>m;
	int d[105][105];
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(i == j)
			  d[i][j] = 0;
			else
			   d[i][j] = 1001;
		}
	}
	for(int i=1; i<=m; i++)
	{
		int x,y,w; cin>>x>>y>>w;
		d[x][y] = w;
		d[y][x] = w;
		
	}
	for(int k=1; k<=n; k++)
	{
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			  if(d[i][j] > d[i][k] + d[k][j])
			  {
			  	d[i][j] = d[i][k] + d[k][j];
			  }
		}
	}
	int q; cin>>q;
	while(q--)
	{
		int x,y; cin>>x>>y;
		cout<<d[x][y]<<endl;
	}
}
