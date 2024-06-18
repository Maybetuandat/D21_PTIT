#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[100];
ll fbword(ll n, ll k)
{
	if(n == 1)
	   return 0;
	if(n == 2)
	  return  1;
	if(k <= f[n-2])
	   return fbword(n-2, k);
	return fbword(n-1, k - f[n-2]);
}

void ct()
{
	ll n ,k;
	cin>>n>>k;
	f[1]= 1;
	f[2] = 1;
	for(int i=3; i<=92; i++)
	  f[i] = f[i-1] + f[i-2];
	cout<<fbword(n , k)<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
