#include<bits/stdc++.h>
using namespace std;
int n, a[30];
void in()
{
	int b[n+1];
	b[1]=a[1];
	for(int i=2; i<=n; i++)
	{
		if(a[i] == a[i-1])
		   b[i] = 0;
		else
		  b[i] = 1;
	}
	for(int i=1; i<=n; i++)
	  cout<<b[i];
	cout<<" ";
}
void sinh(int i)
{
	for(int j=0; j<=1; j++)
	{
		a[i] = j;
		if(i == n)
		   in();
		else
		  sinh(i+1);
	}
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
	     cin>>n;
		sinh(1);
		cout<<endl;
	}
}
