#include<bits/stdc++.h>
using namespace std;
int n;
int a[100][100];
void input()
{
	cin>>n;
	for(int i=1; i<=n; i++)
	  for(int j=1; j<=n; j++)
	     cin>>a[i][j];
}
void dijktra(int s)
{
	int d[100], e[100];
	int vs[100] = {0};
	for(int i=1; i<=n; i++)
	{
		d[i] = a[s][i];
		e[i] = s;
	}
	d[s] = 0;
	vs[s] = 1;
	e[s] = 0;
	while(1)
	{
		int min = INT_MAX, u = 0;
		// tim min trong cac d[i] voi vs[i] == 0
		for(int i=1; i<=n; i++)
		{
			if(!vs[i] && d[i] < min)
			{
				min = d[i];
				u = i;
			}
		}
		if(u == 0)    //u = 0 tuc la khong tim duoc dinh thoa man
		  break;
		
		vs[u] = 1;  // dinh u duoc danh dau la da tham
		
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
	 if(s != i)
	 {
	 	if(d[i] == 1000)
	 	  cout<<"khong ton tai duong di \n";
	 	else
	 	{
	 		cout<<s<<"->"<<i<<endl;
	 	cout<<"Do dai  : ";
	 	cout<<d[i]<<"\n";
		cout<<"Duong di: ";
		int t = i;
		while(t != s)
		{
			cout<<t<<"<-";
			t = e[t];
		}
		cout<<s<<endl;
		 }
	 }
	}
	cout<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	input();
	dijktra(7);
}
