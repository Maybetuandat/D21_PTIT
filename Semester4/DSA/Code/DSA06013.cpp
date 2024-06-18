#include<bits/stdc++.h>
using namespace std;
void xuli(int n, int k)
{
	map<int, int> mp;
	for(int i=0; i<n; i++)
	{
		int x; cin>>x;
		mp[x]++;
	}
	if(mp[k] == 0)
	  cout<<"-1\n";
	else
	   cout<<mp[k]<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		int n, k; cin>>n>>k;
		xuli(n,k);
	}
}
