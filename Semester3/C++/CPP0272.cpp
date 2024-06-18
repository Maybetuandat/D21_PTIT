#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
#define faster ios_base::sync_with_stdio(0);	cin.tie(0); cout.tie(0);
long long mod = 1e9+7;

ll mu(ll a, ll b)
{
	if( b == 0)
	   return 1;
	if( b == 1)
	  return a;
	ll k = mu(a, b/2);
	if(b % 2 == 0)
		return k % mod * k % mod;
	else
		return a % mod * k % mod * k % mod;
}
ll gcd(ll a, ll b)
{
	ll du;
	while( b )
	{
		du = a % b;
		a = b;
		b = du;
	}
	return a;
}
void xuli( ll  n)
{
	vector<ll> a(n);
	for(ll &x : a)
	   cin>>x;
	ll i;
	
	ll ucln=a[0], tich=a[0];
	
	ll ans;
	
	for(i=1; i<n; i++)
	{
		ucln=gcd(a[i], ucln);
		tich = tich * a[i];
		tich= tich % mod; 
	}
	
	cout<<mu(tich, ucln)<<endl;
}
void ct()
{
	int t; cin>>t;
	while(t--)
	{
		ll  n;  cin>>n; 
		xuli(n);
	}
}
int main ()
{
	faster;
	ct();
}
