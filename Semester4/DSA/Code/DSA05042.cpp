#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool   search_binary(ll f[], int dau, int cuoi, ll x)
{
	while(dau <= cuoi)
	{
		int mid = (dau + cuoi) / 2;
		if(f[mid] == x)
		  return true;
		if(f[mid] > x)
		   cuoi = mid - 1;
		else
		  dau = mid + 1;
	}
	return false;
}
void ct()
{
	int n;ll k; cin>>n>>k;
	ll f[n + 1];
	f[0] = 0;
	bool kt = false;
	for(int i=1; i<=n; i++)
	{
		int x; cin>>x;
		f[i] = f[i-1] + x;
		if(f[i] == k)
			kt = true;
		
	}
	if(kt)
	{
		cout<<"YES\n";
		return;
	}
	for(int i=1; i<n; i++)
	{
		if(search_binary(f, i, n, f[i-1] + k ))
		{
			cout<<"YES\n";
			return;
		}
	}

	cout<<"NO\n";
	
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
