#include<bits/stdc++.h>
using namespace std;
vector<int> ans;
void in()
{
	cout<<"(";
	for(int i =0; i< ans.size() - 1; i++)
	  cout<<ans[i]<<" ";
	cout<<ans.back()<<") ";
}
void dq(int lm, int rm)
{
	for(int j = lm; j>=1; j--)
	{
		if(rm >= j)
		{
			ans.push_back(j);
			if(rm - j == 0)
				  in();			
			else
			  dq(j , rm - j);
			ans.pop_back();
		}
	}
}
void casetest()
{
	int n; cin>>n;
	ans.clear();
	dq(n,n);
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		casetest();
		cout<<endl;
	}
}
