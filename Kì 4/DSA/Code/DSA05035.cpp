#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int Nmax = 1e9 + 7;
	ll f[102];
void init()
{
	ll a[10];
	for(int i=1; i<=9; i++)
	  a[i] = 1;

	f[1] = 10;
	for(int i=2; i<= 100; i++)
	{
		for(int j=1; j<=9; j++)
		{
			ll s = 0;
			for(int k = j;k<=9; k++)
			  s += a[k];
			a[j] = s;
			f[i] = (f[i] + s) % Nmax;
		}
	}
	for(int i=2; i<=100; i++)
	   f[i] = (f[i] + f[i-1]) % Nmax;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	init();
	int t; cin>>t;
	
	while(t--)
	{
		int n; cin>>n;
		cout<<f[n]<<endl;
	}
}
