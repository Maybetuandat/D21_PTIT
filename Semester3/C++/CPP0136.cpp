#include<bits/stdc++.h>
#define Nmax 1000000
using namespace std;
void sangnt(int a[])
{
	a[1]=1;
	int i,j;
	for( i=2; i<= sqrt(Nmax); i++)
	{
		if( a[i] == 0)
		{
			for(j=2; j<= Nmax / i; j++)
			  a[i*j]=1;	
		} 
	}
}
void xuli(long long  n, int a[])
{
	long long i,dem=0;
	for(i=2; i<=sqrt(n); i++)
	{
		if( a[i] == 0)
		{
			long long k=i*i;
			if( k <= n)
			   dem++;
		    
		}
	}
	cout<<dem<<endl;
}
int main ()
{
	int t;
	int a[1000000]={0};
	sangnt(a);
	long long n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		xuli(n,a);
	}
}
