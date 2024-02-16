#include<bits/stdc++.h>
using namespace std;
void xuli(int n, int p)
{
	int i;
	int dem=0;
	for(i=1; i<=n; i++)
	{
		int k=i;
		while(k % p == 0)
		{
			dem++;
			k=k/p;
		}
	}
	cout<<dem<<endl;
}
void ct()
{
	int t,n,p; cin>>t;
	while(t--)
	{
		 ; cin>>n>>p;
		xuli(n,p);
	}
}
int main ()
{
	ct();
}
