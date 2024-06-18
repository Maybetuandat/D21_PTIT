#include<bits/stdc++.h>
using namespace std;
typedef long long ll;;
void ct()
{
	ll n,x; cin>>n>>x;
	ll a[n + 1];
	ll k = -1;
	for(ll i=1; i<=n; i++)
	{
		cin>>a[i];
		if(a[i] <= x)
		{
			k = i;
		}
	}
	cout<<k<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
