#include<bits/stdc++.h>
using namespace std;
int Nmax = 123456789;
typedef long long ll;
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
	cout<<mu(2,n - 1)<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
