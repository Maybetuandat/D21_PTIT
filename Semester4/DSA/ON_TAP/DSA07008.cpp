#include<bits/stdc++.h>
using namespace std;
bool check(char ch)
{
	if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
	  return true;
	return false;
}
int uutien(char ch)
{
	if(ch == '+' || ch == '-')
	  return 2;
	if(ch == '*' || ch == '/')
	  return 3;
	if(ch == '^')
	  return 4;
	return 1;
}
void ct()
{
	string s; cin>>s;
	stack<char> st;
	string ans = "";
	for(char ch : s)
	{
		if(ch == '(')
		  st.push(ch);
		else   if(ch == ')')
			   {
			   		while(!st.empty() && st.top() != '(')
			   		{
			   			ans += st.top();
			   			st.pop();
					}
					st.pop();
			   }
			   else if(check(ch))
			   		{
			   			while(!st.empty() && uutien(st.top()) >= uutien(ch))
			   			{
			   				ans += st.top();
			   				st.pop();
						}
						st.push(ch);
						   
						   	
					}
					else
					  ans += ch;
	}
	while(!st.empty())
	  {
	  	ans += st.top();
	  	st.pop();
	  }
	  cout<<ans<<endl;
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

