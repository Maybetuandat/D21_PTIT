#include<bits/stdc++.h>
using namespace std;
#define Nmax 1000000007
typedef long long ll;
ll mu(ll a, ll b)
{
	ll  ans=1;
	while(b)
	{
		if(b % 2 == 1)
		ans = ((ans % Nmax) * (a % Nmax)) % Nmax;
		a = ((a % Nmax) * (a % Nmax)) % Nmax;
		b=b/2;
	}
	cout<<ans<<endl;
}
int main ()
{

	while(1)
	{
		ll a,b; cin>>a>>b;
		if(a == 0 && b== 0)
		  return 0;
		cout<<mu(a,b)<<endl;
	}
}
