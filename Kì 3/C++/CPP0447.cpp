#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t,x,n,k,i,a[100000];
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(i=0; i<n; i++)
		  cin>>a[i];
		sort(a,a+n);
		for(i=n-1; i>=n-k; i--)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
