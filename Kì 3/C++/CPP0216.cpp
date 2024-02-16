#include<bits/stdc++.h>
using namespace std;
int check(long long  l, long long r, long long a[])
{
	long long  i=l,j;
	while( i < r)
	{
		if( a[i] >= 0)
		   i++;
		else
		  {
		  	for(j=i; j<r; j++)
		  	  if(a[j] >= 0)
		  	    return 0;
		  	break;
		  }
	}
	return 1;
}
void ct()
{
	long long  i,t,n,a[10000],tg,l,r,x;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>x;
		for(i=0; i<n-1; i++)
		{
			cin>>a[i];
			tg=a[i];
			a[i]=a[i]-x;
			x=tg;
		}
		cin>>l>>r;
		if( check(l,r,a) == 1)
		  cout<<"Yes\n";
		else
		   cout<<"No\n";
	}
}
int main ()
{
	ct();
}
