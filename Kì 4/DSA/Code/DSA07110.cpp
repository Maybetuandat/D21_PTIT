#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
	string s; cin>>s;
	stack<char> st;
	for(char ch : s)
	{
		if(ch == '(' || ch == '{' || ch == '[')
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
				  if(ch == '}' && tmp == '{')
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
	return 0;
}