#include<bits/stdc++.h>
using namespace std;
bool check(char ch1, char ch2)
{
	if(ch1 == ')' && ch2 == '(' )
	  return true;
	if(ch1 == ']' && ch2 == '[')
	  return true;
	return false;
}
int main ()
{
	string s; cin>>s;
	stack<char> st;
	int n = s.length();
	s = "." + s;
	
	int a[n + 1]={0};
	a[0] = 0;
	for(int i=1; i<=n; i++)
	{
		if(s[i] == '[')
	     a[i] = a[i-1] + 1;
      else
	      a[i] = a[i-1];	
	}
	for(int i=1; i<=n; i++)
	{
	
		if(!st.empty() && check(s[i], s[st.top()] )  == true) 
		  st.pop();
		else
		 st.push(i);
	}
	if(st.empty())
	{
		cout<<a[n-1]<<endl;
		return 0;
	}
	vector<int> ans;
	while(!st.empty())
	{
		ans.push_back(st.top());
		st.pop();
	}
	reverse(ans.begin(), ans.end());
	if(ans.front() != 1)
	  ans.insert(ans.begin(), 0);
	if(ans.back() != n)
	  ans.insert(ans.end(), n);
	for(int i=0; i<ans.size(); i++)
	  if(s[ans[i]] == '[')
	     ans[i]--;
	    int maxx = 0;
	for(int x : ans)
	  cout<<x<<" ";
	 cout<<endl; 
	for(int i=0;i < ans.size() - 1; i++)
	{
		int k = a[ans[i+1]] - a[ans[i] ];
		maxx = max(k, maxx);
	}
	cout<<maxx<<endl;
}
//[[])(]
