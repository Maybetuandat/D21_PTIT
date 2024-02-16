#include<bits/stdc++.h>
using namespace std;
int UCLN(int a, int b)
{
	int du;
	while( b != 0)
	{
		du=a % b;
		a=b;
		b=du;
	}
	return a;
}
int ktsnt(int n)
{
	int i;
	if( n < 2)
	  return 0;
	for(i=2; i<=sqrt(n); i++ )
	{
		if( n % i == 0)
		   return 0;
	}
	return 1;
}
void xuli(int n)
{
	int i,dem=0;
	for(i=1; i<n; i++ )
	{
		if(UCLN(i,n) == 1)
		{
			dem++;
		}
	}
	cout<<ktsnt(dem)<<endl;
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
