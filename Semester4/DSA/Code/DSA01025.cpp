#include<bits/stdc++.h>
using namespace std;
void xuli(int n, int k)
{
	int a[k+3];
	for(int i=1; i<=k; i++)
	    a[i]=i;
	while(1)
	{
		for(int i=1; i<=k; i++)
		{
			char ch = 'A' + a[i] - 1;
			cout<<ch;
		}
		cout<<endl;
		int i = k;
		while(a[i] >= n - k + i && i > 0)
		   i--;
		if(i == 0)
		  return;
		a[i]+=1;
		for(int j=i+1; j<=k; j++)
		   a[j]=a[i] + j - i;
	}
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		int n,k; cin>>n>>k;
		xuli(n,k);
	}
}