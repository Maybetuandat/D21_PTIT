#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n,s; cin>>n>>s;
	int a[n];
	for(int i=0; i<n; i++)
	  cin>>a[i];
	vector<bool> ans(s + 1, false);
	ans[0] = true;
	for(int i=0; i<n; i++)
	{
		for(int j= s; j>= a[i]; j--)
		{
			if(ans[j - a[i]] == true)
			   ans[j] = true;
		}
	}
	if(ans[s])
	  cout<<"YES\n";
	else
	  cout<<"NO\n";
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
