#include<bits/stdc++.h>
using namespace std;
void xuli(int n, int k)
{
	int a[n+3];
	for(int i=1; i<=n; i++)
	   a[i]=0;
	while(1)
	{
		int dem=0;
		for(int i=1; i<=n; i++)
		   if(a[i] == 1)
		     dem++;
		if(dem == k)
		{
			for(int i=1; i<=n; i++)
			  cout<<a[i];
			cout<<endl;
		}
		int k=n;
		while(a[k] == 1 && k > 0)
		{
			a[k]=0;
			k--;
		}
		if( k == 0)
		  return;
		else
		  a[k]=1;
	}
}
int main ()
{
	int t; cin >>t;
	while(t--)
	{
		int n,k;  cin>>n>>k;
		xuli(n,k);
	}
}
