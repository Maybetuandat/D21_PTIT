#include<bits/stdc++.h>
using namespace std;
void ct()
{	
		string s; cin>>s;
		stack<char>st;
		vector<int> ans;
		ans.clear();
		int n = s.length();
		for(int i=0; i<n; i++)
		{
			if(s[i] == '(')
			{
				ans.push_back(i);
				st.push(s[i]);
				
			}
			else
			{
				if(!st.empty() && st.top() == '('  )
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
		}
	if(ans.front() != 0)
	    ans.insert(ans.begin(), -1);
	if(ans.back() != n-1)
	   ans.push_back(n);
//	for(int x : ans)
//	  cout<<x<<" ";
//	cout<<endl;
	int maxx = INT_MIN;
	for(int i=1; i<ans.size(); i++)
	   maxx = max(maxx,  ans[i] -  ans[i-1] - 1);
	cout<<maxx<<endl;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}

