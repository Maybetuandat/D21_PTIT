#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void xuli(int n)
{
	ll k; cin>>k;
	ll a[n];
	for(int i=0; i<n; i++)
	   cin>>a[i];
	sort(a, a + n);
	long long dem=0;
	for(int i=0; i<n-2; i++)
	{
		for(int j=i+1; j<n-1; j++)
		{
			ll ans= k - a[i] - a[j];
			dem += lower_bound(a + j + 1, a + n, ans) - a - j - 1;
		}
	}
	cout<<dem<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		int  n; cin>>n;
		xuli(n);
	}
}
