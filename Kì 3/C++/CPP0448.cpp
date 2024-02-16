#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t,i,n,k,x,j;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int dem=0;
		for(i=0; i<n; i++)
		{
			cin>>x;
			if( x == k )
			  dem++;
			else
			if( x > k)
			  break;
		}
		for(j=i+1; j<n; j++)
		  cin>>x;
		if( dem == 0)
		{
			cout<<"-1"<<endl;
		}
		else
		cout<<dem<<endl;
	}
}
