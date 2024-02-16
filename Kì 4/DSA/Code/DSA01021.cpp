#include<bits/stdc++.h>
using namespace std;
void xuli(int n, int k)
{
	int a[k+3];
	map<int, int> mp;
	for(int i=1; i<=k; i++)
	{
		cin>>a[i];
		mp[a[i]]++;
	}
	int i =  k;
	while(a[i] >= n - k + i && i > 0 )
	    i--;
	if(i == 0)
	{
		cout<<k<<endl;
		return;
	}
	a[i]=a[i]+1;
	for(int j=i+1; j<=k; j++)
	  a[j]=a[i] + j - i;
	  int dem=0;
	for(int j=1; j<=k; j++)
		if(mp[a[j]] == 0)
		  dem++;
	cout<<dem<<endl; 
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
