#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dem = 0;
void merger(ll a[], ll l, ll m, ll r)
{
	vector<ll> x(a + l, a + m + 1);
	vector<ll> y(a + m + 1, a + r + 1);
	ll i=0, j= 0;
	while(i < x.size() && j < y.size())
	{
		if(x[i] > y[j])
		{
			a[l++] = y[j];
			dem += x.size() - i;
			j++; 
			
		}
		else
		{
			a[l++] = x[i];
			i++;
		}
	}
	while(i < x.size())
	{
		a[l++] = x[i++];
	}
	while(j < y.size())
	{
		a[l++] = y[j++];
	}
}
void mergersort(ll a[], ll l, ll r)
{
	if(l >= r)
	  return;
	ll mid = (l+r) / 2;
	mergersort(a, l, mid);
	mergersort(a, mid + 1, r);
	merger(a, l, mid, r);
}
void ct()
{
	ll n; cin>>n;
	ll a[n];
	for(ll &x : a)
	  cin>>x;
	dem = 0;
	mergersort(a, 0, n-1);
	cout<<dem<<endl;
}

int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
