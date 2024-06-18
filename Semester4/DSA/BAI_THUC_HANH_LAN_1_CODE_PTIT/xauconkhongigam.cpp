#include<bits/stdc++.h>
using namespace std;
int main ()
{
	string s; cin>>s;
	int n = s.length();
	int dp[n];
	int maxx = 0;
	for(int i=0; i<n; i++)
	{
		dp[i] = 1;
		for(int j=0; j<i; j++)
		{
			if(s[i] >= s[j] && dp[j] + 1 > dp[i])
			  dp[i] = dp[j] + 1;
			if(dp[i] > maxx)
			  maxx = dp[i];
		}
	}
	cout<<maxx;
}
