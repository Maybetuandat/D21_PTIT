#include<bits/stdc++.h>
using namespace std;
int a[100][100], d[100], e[100], n, vs[100];
void input()
{
	cin>>n;
	for(int i=1; i<=n; i++)
	  for(int j=1; j<=n; j++)
	    cin>>a[i][j];
	memset(d, 0, sizeof(d));
	memset(e, 0, sizeof(e));
	memset(vs, 0, sizeof(vs));
}
void dijktra(int s)
{
	for(int i=1; i<=n; i++)
	{
		d[i] = a[s][i];
		e[i] = s;
	}
	d[s] = 0;
	e[s] = 0;
	vs[s] = 1;
	while(1)
	{
		int u =0, minn = 32767;
		for(int i=1; i<=n; i++)
		{
			if(d[i] < minn && !vs[i])
			{
				minn = d[i];
				u = i;
			}
		}
		if(u == 0)
		  break;
		vs[u] = 1;
		for(int i=1; i<=n; i++)
		{
			if(!vs[i] && d[i] > d[u] + a[u][i])
			{
				d[i] = d[u] + a[u][i];
				e[i] = u;
				
			}
		}
		
	}
	for(int i=1; i<=n; i++)
	{
		if(d[i] != 0)
		{
			cout<<s<<"->"<<i<<":\n";
			cout<<"do dai la : ";
			cout<<d[i]<<" \n";
			int t = i;
			while(t != s)
			{
				cout<<t<<"<-";
				t = e[t];
			}
			cout<<s<<endl;
			cout<<"-------------------------------------------------------------------------------\n";
		}
		  
		  
	}
	cout<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	input();
	int s; cin>>s;
	dijktra(s);
}
