#include<bits/stdc++.h>
using namespace std;
int  check(int a[], int n)
{
	for(int i=1; i<=n-1; i++)
	  if(abs(a[i] - a[i+1]) == 1)
	    return 0;
	return 1;
}
void xuli()
{
	int n; cin>>n;
	if(n <= 3)
	{
		cout<<endl;
		return;
	}
	int a[n+1];
	for(int i=1; i<=n; i++)
	   a[i] = i;
	while(1)
	{
		if(check(a, n))
		{
			for(int i=1; i<=n; i++)
			  cout<<a[i];
			cout<<endl;
		}
		int i=n-1;
		while(i > 0 && a[i] > a[i+1])
		   i--;
		if(i == 0)
		  return;
		int k =n;
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
		xuli();
	}
}
