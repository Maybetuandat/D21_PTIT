#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
	int k,i,dem=0;
	for(i=2; i<=sqrt(n); i++)
	{
		if( n % i == 0 )
		{
			k= n / i;
			if( i != k)
			{
				if( i % 2 == 0)
				  dem++;
				if( k % 2 == 0)
				  dem++;
			}
			else
			   if( i % 2 == 0)
			      dem++;
		}	
	}
	if( n % 2 == 0)
	  dem++;
	cout<<dem<<endl;
}
int main ()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		xuli(n);
	}
}
