#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
	int n,m; cin>>n>>m;
	ll f[n+2][m+2];
	ll a[n+2][m+2];

	for(int i=1; i<=n; i++)
	  for(int j=1; j<=m; j++)
	     cin>>a[i][j];
	for(int i=1; i<=n; i++)
	   f[i][0] = 1e9;
	for(int i=1; i<=m; i++)
	  f[0][i] = 1e9;
	f[0][0] = 0;
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
		 f[i][j] = min({f[i - 1][j], f[i][j - 1], f[i - 1][j - 1]}) + a[i][j];
		}
	}
	cout<<f[n][m]<<endl;
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
	return 0;
}
