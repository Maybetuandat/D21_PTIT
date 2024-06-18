#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void xuli(int n)
{
	ll k; cin>>k;
	int a[n];
	for(int i=0; i<n; i++)
	   cin>>a[i];
	sort(a, a + n);
	ll dem=0;
	for(int i=0; i<n-1; i++)
	{
		ll ans = k -a[i];
		dem += upper_bound(a + i + 1, a + n, ans) - lower_bound(a + i + 1, a + n, ans);
	}
	cout<<dem<<endl;
}
int main ()
{
	int t;   cin>>t;
	while(t--)
	{
		int n ; cin>>n;
		xuli(n);
	}
}
