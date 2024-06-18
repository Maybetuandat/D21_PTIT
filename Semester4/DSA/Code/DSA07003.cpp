#include<bits/stdc++.h>
using namespace std;
void ct()
{
	string s; cin>>s;
	stack<char> st;
	for(char ch : s)
	{
		if(ch != ')')
		   st.push(ch);
		else
		{
			bool ok = false;
			while(!st.empty())
			{
				char c = st.top(); st.pop();
				if(c == '+' || c =='*' || c=='-' || c == '/')
				   ok = true;
				if(c == '(')
				   break;
			}
			if( !ok)
			{
				cout<<"Yes\n";
				return;
			}
		}
	}
	cout<<"No\n";
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
