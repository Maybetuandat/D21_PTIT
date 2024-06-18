#include<bits/stdc++.h>
using namespace std;
void xuli(int n, int k)
{
	int a[k+1];
	for(int i=1; i<=k; i++)
	   cin>>a[i];
	int i = k;
	while( i > 1 && a[i] - a[i-1] ==  1 )
		i--;
	if(i == 1)
	{
		if(a[1] == 1)
		{
			for(int j= n - k + 1; j<=n; j++)
			  cout<<j<<" ";
			cout<<endl;
			return;
		}
	}
	a[i] = a[i] - 1;
	for(int j=i+1; j<=k; j++)
	   if(a[j] < n - k + j)
	     a[j] +=1;
	for(int j=1; j<=k; j++)
	cout<<a[j]<<" ";
	cout<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		int n,k; cin>>n>>k;
		xuli(n,k);
	}
}
