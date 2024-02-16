#include<bits/stdc++.h>
using namespace std;
int check(int a[], int b[], int n)
{
	for(int i=1; i<=n; i++ )
	{
		if(a[i] != b[i])
		  return 0;
	}
	return 1;	
}
void xuli(int n)
{
	int k; cin>>k;
	int ans[k + 1];
	for(int i=1; i<=k; i++)
	  cin>>ans[i];


	int a[k+1];
	for(int i=1; i<=k; i++)
	  a[i]=i;
	int dem=1;
	while(1)
	{
		
		
		if(check(a, ans, k))
		{
			cout<<dem<<endl;
			return;
		}
		dem++;
		int i = k;
		while(i > 0 && a[i] >= n - k + i)
		    i--;
		if(i == 0)
		  return;
		a[i]=a[i]+1;
		for(int j=i+1; j<=k; j++)
		  a[j] = a[i] + j - i;
		  
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
