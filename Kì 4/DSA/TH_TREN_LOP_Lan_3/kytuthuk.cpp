#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll tinh(ll n, ll k)
{
	ll x= pow(2, n-1);
	if(k == x)
	   return n;
	if(k < x)
	  return tinh(n-1, k);
	return tinh(n-1, k-x);
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ll n,k; cin>>n>>k;
		int x = tinh(n,k);
		char ch = x -1  + 'A';
		cout<<ch<<endl;
	}
}
