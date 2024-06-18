#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll Nmax=1000000007;
ll mu(ll n, ll k)
{
	if(k == 0)
	   return 1;
	ll x = mu(n, k/2);
	if(k % 2 == 0)
	   return x * x % Nmax;
	else
	   return n * (x * x % Nmax) % Nmax;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ll n,k; cin>>n>>k;
		cout<<mu(n,k)<<endl;
	}
}
