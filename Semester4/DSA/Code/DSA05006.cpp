#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
	int n; cin>>n;
	int a[n];
	for(int &x : a)
	  cin>>x;
	ll f[n];
	ll maxx = INT_MIN;
	for(int i=0; i<n; i++)
	{
		f[i] = a[i];
		for(int j = 0; j<i; j++)
		  if(a[j] < a[i] && f[i] < f[j] + a[i])
		  	f[i] = f[j] + a[i];
		maxx = max(maxx, f[i]);
		
	}
	cout<<maxx<<endl;
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
