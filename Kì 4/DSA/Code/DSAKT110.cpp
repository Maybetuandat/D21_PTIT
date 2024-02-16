#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
	int n; cin>>n;
	ll a[n + 1];
	for(int i=1; i<=n; i++)
	  cin>>a[i];
	ll f[n] = {0};
	f[1] = a[1];
	for(int i=2; i<=n; i++)
	{
		f[i] = max(f[i-1], f[i-2] + a[i]);
	}
	cout<<f[n]<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
