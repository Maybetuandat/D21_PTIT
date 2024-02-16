#include<bits/stdc++.h>
using namespace std;
void ct(int n)
{
	n = n /2;
	int a[n+1];
	for(int i=1; i<=n; i++)
	  a[i]=0;
	while(1)
	{
		for(int i=1; i<=n; i++)
		  cout<<a[i];
		for(int i=n; i>=1; i--)
		  cout<<a[i];
		cout<<" ";
		int k = n;
		while( k > 0 && a[k] )
		{
			a[k]=0;
			k--;
		}
		if(k == 0)
		  return;
		a[k] = a[k] + 1;
	}
}
void xuli(int n)
{
	int i=2; 
	while(i <= n)
	{
		ct(i); 
		i+=2;
	
	}
	cout<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		xuli(n);
	}
}

