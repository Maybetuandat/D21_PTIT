#include<bits/stdc++.h>
using namespace std;
int a[100];
vector<int> ans;
vector<string> res;
void in()
{
	string s="(";
	for(int i=0; i<ans.size() - 1; i++)
	   s = s + to_string(ans[i]) + " ";
	s = s + to_string(ans.back()) + ")";
	res.push_back(s);
}
void dq(int limit, int remain)
{
	for(int j=limit; j>=1; j--)
	{
		if(remain >= j)
		{
			ans.push_back(j);
			if(remain - j == 0)
			  in();
			else
			  dq(j, remain - j);
			ans.pop_back();
		}
	}
}
void casetest()
{
	int n; cin>>n;
	res.clear();
	ans.clear();
	dq(n,n);
	cout<<res.size()<<endl;
	for(string s : res)
	  cout<<s<<" ";
	cout<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		casetest();
	}
}
