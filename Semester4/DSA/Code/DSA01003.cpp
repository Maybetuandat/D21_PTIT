#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
	int a[n+3];
	for(int i=1; i<=n; i++)
	  cin>>a[i];
	int i=n-1;
	while(a[i] >= a[i+1] && i > 0)
	   i--;
	if(i == 0)
	{
		for(int i=1; i<=n; i++)
		  cout<<i<<" ";
		cout<<endl;
		return;
	}
	int k = n;
	while(a[k] <= a[i])
	  k--;
	swap(a[i], a[k]);
	int l = i+1;
	int r = n;
	while( l < r)
	{
		swap(a[l], a[r]);
		l++;
		r--;
	}
	
		for(int i=1; i<=n; i++)
		  cout<<a[i]<<" ";
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
