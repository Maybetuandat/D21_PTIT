#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void xuli(int n)
{
	ll a[n];
	cin>>a[0];
	int vt = 0;
	for(int i=1; i<n; i++)
	{
		cin>>a[i];
		if(a[i-1] > a[i])
		{
			vt = i ;
		}
	}
	cout<<vt<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		xuli(n);
	}
}
