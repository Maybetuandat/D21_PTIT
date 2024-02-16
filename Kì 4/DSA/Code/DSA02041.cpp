#include<bits/stdc++.h>
using namespace std;
int res = INT_MAX;
void  xuli(int n, int dem)
{
	if( n == 1  || dem >= res )
	{
		res = min(dem, res);
		return;
	}
	if ( n % 3 == 0) xuli(n/3, dem + 1);
	if (n % 2 == 0) xuli(n / 2, dem + 1);
	xuli(n-1, dem + 1);
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		res = INT_MAX;
		xuli(n, 0);
		cout<<res<<endl;
	}
}
