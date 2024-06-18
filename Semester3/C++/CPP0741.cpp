#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t,a,b,c;
	cin>>t;
	long long dl,kq;
	while( t--)
	{
		cin>>a>>b>>c;
		dl=1;
		for(int i=0; i<b; i++)
		{
			dl=(dl*a )% c;
		}
		cout<<dl<<endl;
	}
}
