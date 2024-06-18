#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int tinh(int n, ll k)
{
	ll x = pow(2, n - 1);
	if(x == k)
	  return n;
	if( k < x)
	  return tinh( n-1, k);
	return tinh(n-1, k - x);
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; ll k;  cin>>n>>k;
		cout<<tinh(n, k)<<endl;
	}
}
