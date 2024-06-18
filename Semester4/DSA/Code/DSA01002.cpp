#include<bits/stdc++.h>
using namespace std;
void xuli(int n, int k)
{
	int a[k+3];
	for(int i=1; i<=k; i++)
	   cin>>a[i];
	int i=k;
	while(a[i] >= n - k + i && i > 0)
		i--;
	if( i == 0)
	{
		for(int i=1; i<=k; i++)
		  cout<<i<<" ";
		cout<<endl;
		return;
	}
	a[i]=a[i]+1;
	for(int j=i+1; j<=k; j++)
	   a[j]=a[i] + j - i;
	for(int i=1; i<=k; i++)
		  cout<<a[i]<<" ";
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
