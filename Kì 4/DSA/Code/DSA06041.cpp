#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
	map<int, int> mp;
	for(int i=0; i<n; i++)
	{
		int x; cin>>x;
		mp[x]++;
	}
	int maxx=0, ans;
	for(auto it : mp)
	{
		if(it.second > maxx)
		{
			maxx=it.second;
			ans=it.first;
		}
	}
	if(maxx > n / 2)
	  cout<<ans<<endl;
	else
	   cout<<"NO\n";
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		xuli(n);
	}
}
