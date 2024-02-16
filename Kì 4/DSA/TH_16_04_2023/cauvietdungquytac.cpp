#include<bits/stdc++.h>
using namespace std;
void xuli(string s)
{
	stack<char> st;
	for(char ch : s)
	{
		if(ch == '(' || ch == '[')
		   st.push(ch);
		else
		{
			if(st.empty())
			{
				cout<<"NO\n";
				return;
			}
			else
			{
				char tmp = st.top();
				if(ch == ']' && tmp == '[')
					st.pop();
				else
				  if(ch == ')' && tmp == '(')
					  st.pop();
				  else
				  {
				  	cout<<"NO\n";
				  	return;
				  }
			}
		}
	}
	if(st.empty())
		  cout<<"YES\n";
	else
		  cout<<"NO\n";
}
bool check(char ch)
{
	if(ch == '[' || ch == ']' || ch == '(' || ch == ')')
	  return true;
	return false;
}
int main ()
{
	
	int t; cin>>t;
	
	cin.ignore();
	while(t--)
	{
		string s; getline(cin, s);
		string s1= "";
		for(char ch : s)
		  if(check(ch))
		    s1 = s1 + ch;
		xuli(s1);
	}
	return 0;
}
