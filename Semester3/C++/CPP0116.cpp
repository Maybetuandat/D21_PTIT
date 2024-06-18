#include<bits/stdc++.h>
using namespace std;
#define Nmax 10009
void sangnt(int a[])
{
	a[1]=1;
	for(int i=2; i<=sqrt(Nmax); i++)
	{
		if( a[i] == 0)
		{
			for(int j=2; j<=Nmax / i; j++)
			{
				a[i*j]=1;
			}
		}
	}
}
void xuli(int n, int a[])
{
	int i,j;
	cout<<"1 ";
	for( i=2; i<=n; i++)
	{
		if( a[i] == 0)
		{
			cout<<i<<" ";
		}
		else
		{
			for( j=2; j<=i; j++)
			{
				if( (i % j )== 0 && (a[j] == 0) )
				{
					cout<<j<<" ";
					break;
				}
			}
		}
	}
	cout<<endl;
}
int main ()
{
	int n,t,a[10009]={0};
	cin>>t;
	sangnt(a);
	while(t--)
	{
		cin>>n;
		xuli(n,a);
	}
}
