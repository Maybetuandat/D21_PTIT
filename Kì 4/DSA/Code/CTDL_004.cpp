#include<bits/stdc++.h>
using namespace std;
int a[100],n,k, x[100], dem=0;
void in()
{
	for(int j=1; j<k; j++)
	{
		if(a[x[j]] >= a[x[j + 1]])
		  return;
	}
	  dem++;
}
void th(int i)
{
	for(int j= x[i-1] + 1; j<= n - k + i; j++)
	{
		x[i]=j;
		if(i == k)
		   in();
		else
		   th(i+1);
	}
}
int main ()
{
	 cin>>n>>k;
	for(int i=1; i<=n; i++)
	   cin>>a[i];
	th(1);
	cout<<dem<<endl;
}
