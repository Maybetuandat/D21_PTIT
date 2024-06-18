#include<bits/stdc++.h>
using namespace std;
int  check(int a[], int b[], int n)
{
	for(int i=1; i<=n; i++)
	  if(a[i] != b[i])
	    return 0;
	return 1;
}
void xuli(int n)
{
	int a[n+3], b[n+3];
	for(int i=1; i<=n; i++)
	  cin>>b[i];
	for(int i=1; i<=n; i++)
	   a[i]=i;
	int dem=1;
	while(1)
	{
		if(check(a,b,n) == 1)
		{
			cout<<dem<<endl;
			return;
		}

	
		dem++;
		int i=n-1;
		while(a[i] >= a[i+1] && i > 0)
			i--;
		if(i == 0)
		  return;
		int k = n;
		while(a[k] < a[i])
		   k--;
		swap(a[i], a[k]);
		int l = i+1;
		int r = n;
		while(l < r)
		{
			swap(a[l], a[r]);
			l++;
			r--;
		}
	}
	
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
