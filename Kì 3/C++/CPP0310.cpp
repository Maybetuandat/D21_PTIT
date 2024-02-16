#include<bits/stdc++.h>
using namespace std;
void xuli(long long a, long long b	)
{
	int i,mang1[100]={0},mang2[100]={0};
	int dem1=0,dem2=0;
	while( a != 0)
	{
		dem1++;
		mang1[dem1]= a % 10;
		a = a / 10;
	}
	while( b != 0)
	{
		dem2++;
		mang2[dem2] = b % 10;
		b = b / 10;
	}
	long long amax=0, bmax=0;
	for(i=dem1; i>=1; i--)
	{
		if(mang1[i] == 6)
			amax = amax * 10 + 5;
		else
			amax = amax * 10 + mang1[i];
	}
	for(i=dem2; i>=1; i--)
	{
		if(mang2[i] == 6)
		   	bmax = bmax * 10 + 5;
		else
			bmax = bmax * 10 + mang2[i];
	}
	cout<<amax + bmax <<" ";
	amax=0;
	bmax=0;
	for(i=dem1; i>=1; i--)
	{
		if ( mang1[i] == 5)
			amax = amax * 10 + 6;
		else
			amax = amax * 10 + mang1[i];
	}
	for(i=dem2; i>=1; i--)
	{
		if( mang2[i] == 5)
			bmax = bmax * 10 + 6;
		else
			bmax = bmax * 10 + mang2[i];
	}
	cout<<amax+bmax<<endl;
	
}
int  main ()
{
	int t;
	long long a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		xuli(a,b);
	}
}
