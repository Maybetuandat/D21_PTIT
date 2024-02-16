#include<bits/stdc++.h>
using namespace std;
void tao(long long f[])
{
	f[0]=0;
	f[1]=1;
	f[2]=1;
	for(int i=3; i<=103; i++)
	{
		f[i]=f[i-1]+f[i-2];
	}	
} 
void xuli(long long n,long long f[])
{
	int i,kt=0;
	for(i=0; i<=103; i++)
	{
		if( f[i] == n)
		{
			cout<<"YES\n";
			kt=1;
			break;
		}
	}
	if( kt == 0)
	  cout<<"NO\n";
}
int main ()
{
	int t;
	long long n,f[1000];
	tao(f);
	cin>>t;
	while( t--)
	{
		cin>>n;
		xuli(n,f);
	}
}
