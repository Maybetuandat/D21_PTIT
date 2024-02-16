#include<bits/stdc++.h>
using namespace std;
void xuli(int n, int m)
{
	int maxx=INT_MIN, minn=INT_MAX;
	for(int i=0; i<n; i++)
	{
		int x; cin>>x;
		if(x > maxx)
		   maxx=x;
	}
	for(int i=0; i<m; i++)
	{
		int x; cin>>x;
		if(x < minn)
		   minn=x;
	}
	long long ans= maxx * minn;
	cout<<ans<<endl;
}
int main ()
{
	int  t; cin>>t;
	while(t--)
	{
		int n,m; cin>>n>>m;
		xuli(n,m);
	}
}
