#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t,n,x,i;
	cin>>t;
	while( t--)
	{
		cin>>n >>x;
		int y;
		for(i=1; i<=n;i++ )
		{
			cin >>y;
			if( x == y)
			{
				cout<<i<<endl;
				break;
			}
		}
		for(int j=i+1; j<=n; j++)
		  cin>>y;
	}
}
