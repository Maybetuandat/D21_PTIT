#include<bits/stdc++.h>
using namespace std;
void ct()
{
	string s; cin>>s;
	stack<int> st;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i] == '(' || st.empty())
		{
			st.push(i);
		}
		else
		{
			if(s[st.top()] == '(')
			{
				st.pop();
			}
			else
			{
				st.push(i);
			}
		}
	}
	vector<int> ans;
	while(!st.empty())
	{
		ans.push_back(st.top());
		st.pop();
	}
	if(ans.size() == 0)
	{
		cout<<s.length()<<"\n";
		return;
	}
	reverse(ans.begin(), ans.end());
	if(ans[0] != 0)
	{
		ans.insert(ans.begin(), -1);
	}
	if(ans.back() != s.length() - 1)
	{
		ans.push_back(s.length());
	}
	int maxx = 0;
	for(int i=0; i<ans.size() -1; i++)
	{
		maxx = max(maxx, ans[i+1] - ans[i] - 1);
	}
	cout<<maxx<<"\n";
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t-- )
	{
		ct();
	}
}
