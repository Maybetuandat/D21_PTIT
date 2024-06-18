#include<bits/stdc++.h>
using namespace std;
int n, a[100];
void in()
{
	if(a[1] == 0)
	  return;
	for(int i=1; i<n; i++)
	{
		if(a[i] == a[i+1] && a[i] == 0)
		  return;
	}
	cout<<"H";
	for(int i=1; i<=n; i++)
	{
		if(a[i] == 0)
		  cout<<"H";
		else
		   cout<<"A";
	}
	cout<<"A"<<endl;
}
void sinh(int i)
{
	for(int j=1; j>=0; j--)
	{
		a[i]=j;
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
		if( n == 2)
		 cout<<"HA"<<endl;
		else
		{
			n-=2;
			sinh(1);
		}
	}
}
