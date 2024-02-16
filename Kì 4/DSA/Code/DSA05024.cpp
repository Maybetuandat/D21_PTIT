#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int Nmax = 1e9 + 7;
void ct()
{
	int n,k; cin>>n>>k;
	int a[n];
	for(int &x : a)
	  cin>>x;
	ll f[k+1] = {0};
	memset(f, 0, sizeof(f));
	f[0] = 1;
	for(int i=1; i<=k; i++)
	{
		for(int j=0; j<n; j++)
		if(i >= a[j])	{
			
			f[i] += f[i - a[j]];
			f[i] %= Nmax;
		}
	 } 
	 cout<<f[k]<<endl;
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
