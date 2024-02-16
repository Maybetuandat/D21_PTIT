#include<bits/stdc++.h>
using namespace std;
void xuli(string s)
{
	int i,res=0;
	string ans="";
	for(i=0; i<s.length(); i++)
	{
		ans+=s[i];
		int n=ans.length();
		if(ans[n-1] == '0' && ans[n-2] == '0' && ans[n-3] == '1')
		{
			res=res+3;
			ans.erase(n-3, 3);
		}
	}
	cout<<res<<endl;
}
void ct()
{
	int t; cin>>t;
	string s;
	while(t--)
	{
		cin>>s;
		xuli(s);
	}
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ct();
	return 0;
}
