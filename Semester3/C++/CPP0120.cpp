#include<bits/stdc++.h>
using namespace std;
int m,n,a,b;
void xuli()
{
	int i,dem=0;
	for(i=m; i<=n; i++)
	{
		if( i % a == 0 || i % b == 0)
		  dem++;
	}
	cout<<dem<<endl;
}
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>m>>n>>a>>b;
		xuli();
	}
}
