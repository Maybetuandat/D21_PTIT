#include<bits/stdc++.h>
using namespace std;
bool check(char ch)
{
	if(ch == '(' || ch ==')')
	   return true;
	return false;
}
char convert(char ch)
{
	if(ch == '(')
	  return '0';
	return '1';
}
void ct()
{
	string s; cin>>s;
	stack<int> st;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i]  == '(')
		   st.push(i);
		else if(s[i] == ')')
			{
				if( !st.empty() && s[st.top()] == '(')
				  st.pop();
				else
				  st.push(i);
			}
	}
	vector<int> ans;
	while(!st.empty())
	{
		ans.push_back(st.top());
		st.pop();
	}
	reverse(ans.begin(), ans.end());
//	for(int x : ans)
//	  cout<<x<<" ";
//	cout<<endl;
//			
	for(int x : ans)
		s[x] = '2';
	for(int i=0; i<s.length(); i++)
	{
		if(check(s[i]))
		  s[i] = convert(s[i]);
	}
	for(char ch : s)
	  if(ch == '2')
	    cout<<"-1";
	  else
	    cout<<ch;
	cout<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
