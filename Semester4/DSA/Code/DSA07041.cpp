#include<bits/stdc++.h>
using namespace std;
void ct()
{
	string s; cin>>s;
	vector<int> ans;
	stack<char> st;
	int n = s.length();
	for(int i=0; i<n; i++)
	{
		if(s[i] == ')' && !st.empty() && st.top() == '(')
		{
			st.pop();
			ans.pop_back();
		}
		else
		{
			st.push(s[i]);
			ans.push_back(i);
		}
	}
	
	if(ans.front() != 0)
	  ans.insert(ans.begin(), -1);
	if(ans.back() != n-1)
	  ans.insert(ans.end(), n);
	long long  res = 0;
	for(int i=0; i<ans.size() - 1; i++)
		res += (ans[i+1] - ans[i]- 1);
	cout<<res<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
