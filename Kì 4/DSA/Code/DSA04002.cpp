#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int Nmax = 1e9 + 7;
ll dao(ll n)
{
	ll ans=0;
	while(n)
	{
		ans = ans * 10 + n % 10;
		n = n / 10;
	}
	return ans;
}
ll mu(ll a, ll b)
{
	if(b == 0)
	  return 1;
	ll x = mu(a, b / 2);
	if( b % 2  == 0)
	  return x * x % Nmax;
	return a * (x * x % Nmax) % Nmax;
}
void ct()
{
	ll n; cin>>n;
	if( n == 0)
	{
		return;
	}
	ll r = dao(n);
	cout<<mu(n,r)<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
