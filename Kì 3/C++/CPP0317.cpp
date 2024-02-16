#include<bits/stdc++.h>
using namespace std;
#define Nmax 10000009
void xuli(long long l, long long r, int snt[])
{
	long long dau=sqrt(l),dem=0;
	long long cuoi=sqrt(r);
	for(long long i=dau; i<=cuoi; i++)
	{
		if(snt[i] == 0 && i*i >=l && i*i <=r)
		  dem++;
	}
	cout<<dem<<endl;
}
void sangnt(int snt[])
{
	snt[1]=1;
	for(long long i=2; i<=sqrt(Nmax); i++)
	{
		if( snt[i] == 0)
		{
			for(long long j=2; j<=Nmax / i; j++)
			  snt[i*j]=1;
		}
	}
}
void ct()
{
	int t;
	cin>>t;
	int snt[10000009]={0};
	sangnt(snt);
	long long l,r;
	while(t--)
	{
		cin>>l>>r;
		xuli(l,r,snt);
	}
}
int main ()
{
	ct();
}
