#include<bits/stdc++.h>
using namespace std;
int Nmax = 1e9 + 7;
typedef long long ll;
void xuli(int n, int k)
{
	ll dp[n+5] = {0};
	dp[0] = 1;
	dp[1] = 1;
	for(int i=2; i<= n; i++ )
	{
		for(int j=1; j<= min(i,k); j++)
		{
			dp[i] += dp[i - j];
			dp[i] %= Nmax;
		}
	}
	cout<<dp[n]<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		int n,k; cin>>n>>k;
		xuli(n,k);
	}
}
