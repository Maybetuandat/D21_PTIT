#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[93], tong ;
ll tinh(ll n, ll k)
{
	if(n == 1)
	  return 1;
	if( n == 0)
	  return 0;
	if(k <= f[n-2])
	{
		 tong = tong + tinh(n-2, k);
		return tong;
	}
	  return tinh(n-2, f[n-2]) + tinh(n-1, k - f[n-2]);
}
void init()
{
	f[0] = 1;
	f[1] = 1;
	for(int i=2; i<= 92; i++)
	  f[i] = f[i-1] + f[i-2];
}
int main ()
{
	init();
	int t; cin>>t;
	while(t--)
	{
		ll n,k; cin>>n>>k;
		tong = 0;
		cout<<tinh(n,k)<<endl;
	}
}
