#include<bits/stdc++.h>
using namespace std;
vector<int> ans;
vector<string> res;
void in()
{
	string s="(";
	for(int i=0; i<ans.size() - 1; i++)
		s = s + to_string(ans[i]) + " ";
	s = s + to_string(ans.back()) + ')';
	res.push_back(s);
}
void dq(int lm, int rm)
{
	for(int j=lm; j>=1; j--)
	{
		if(rm >= j)
		{
			ans.push_back(j);
			if(rm - j == 0)
			  in();
			else
			    dq(j, rm - j);
			ans.pop_back();
		}
	}
}
void ct()
{
	int n; cin>>n;
	ans.clear();
	res.clear();
	dq(n,n);
	cout<<res.size()<<endl;
	for(string x : res)
	  cout<<x<<" ";
	cout<<endl;
	
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
