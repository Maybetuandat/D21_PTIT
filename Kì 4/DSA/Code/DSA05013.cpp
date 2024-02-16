#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Nmax = 1e9 + 7;
void ct()
{
	int n,k; cin>>n>>k;
	ll dp[n+5] = {0};
	dp[0]=dp[1] = 1;
	for(int i=2; i<=n; i++)
	{
		for(int j=1; j <=min(i, k); j++)
		{
			dp[i] += dp[i-j];
			dp[i] %= Nmax;	
		}
	}
	cout<<dp[n]<<endl;
	
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
