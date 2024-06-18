#include<bits/stdc++.h>
using namespace std;
int a[100][100], e[100] = {0}, d[100] = {0}, n, s;

void input()
{
	cin>>n>>s;
	for(int  i=1; i<=n; i++)
	  for(int j=1; j<=n; j++)
	    cin>>a[i][j];
	  
}
void prim()
{
	int vs[100] = {0};
	for(int i=1; i<=n; i++)
	{
		d[i] = a[s][i];
		e[i] = s;
		
	}
	d[s] = 0;
	e[s] = 0;
	vs[s] = 1;
	int dem = 1, trongso = 0;
	while(dem <  n)
	{
		int u = 0, minn = INT_MAX;
		for(int i=1; i<=n; i++)
		{
			if(d[i] < minn && !vs[i] )
			{
				minn = d[i];
				u = i;
			}
		}
		if(u == 0)
		{
			cout<<"khong ton tai cay khung \n";
			return;
		}
		vs[u] = 1;
		trongso += minn;
		for(int i=1; i<=n; i++)
		{
			if(vs[i] == 0 && d[i] > a[u][i])
			{
				d[i] = a[u][i];
				e[i] = u;
			}
		}
		dem++;
	}
	cout<<trongso<<endl;
	for(int i=1; i<=n; i++)
	{
		if(e[i] != 0)
		  cout<<e[i]<<" "<<i<<endl;
	}
}
int main ()
{
	input();
	prim();
}
