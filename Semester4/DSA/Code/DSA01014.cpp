#include<bits/stdc++.h>
using namespace std;
void xuli(int n, int k, int s)
{
	int a[k+1];
	for(int i=1; i<=k; i++)
	  a[i]=i;
	int dem=0;
	while(1)
	{
		int tong = 0;
		for(int i=1; i<=k; i++)
		  tong += a[i];
		if(tong == s)
		  dem++;
		int  i =k;
		while( i > 0 && a[i] >= n - k + i)
		   i--;
		if(i == 0)
		  break;
		a[i] = a[i] + 1;
		for(int j=i+1; j<=k; j++)
		   a[j] = a[i] + j - i;
	}
	cout<<dem<<endl;
}
int main ()
{

	while(1)
	{
		int n,k,s; cin>>n>>k>>s;
		if( n == 0 && k == 0 && s == 0)
		   return 0;
		xuli(n,k,s);
	}
}
