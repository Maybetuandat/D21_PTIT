#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
	int n; cin>>n;
	ll a[n], b[n];
	for(ll &x : a)
	  cin>>x;
	for(ll &x : b)
	  cin>>x;
	sort(a, a + n);
	sort(b, b + n, greater<int>()  );
	ll ans=0;
	for(int i=0; i<n; i++)
	{
		ans += a[i] * b[i]; 
	}
	cout<<ans<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
