#include<bits/stdc++.h>
using namespace std;
void xuli(string s)
{
	stack<string> st;
int n = s.length();
	for(int i=0; i<n; i++)
	{
		if(s[i] != ')')
			st.push(string(1, s[i]));
		else
		{
			string cmp="";
			while(!st.empty() && st.top() != "(")
			{
				cmp = st.top() + cmp;
				st.pop();
			}
			st.pop();//bo dau mo ngoac
			if(!st.empty())
			{
				if(st.top() == "-" && cmp.length() > 1)
				   cmp = "(" + cmp + ")";
			}
			st.push(cmp);
		}
	}
	string ans = "";
	while(!st.empty())
	{
		ans = st.top() + ans;
		st.pop();
	}
	cout<<ans<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	cin.ignore();
	while(t--)
	{
		string s; getline(cin, s);
		string cmp ="";
		for(char ch : s)
		  if(ch != ' ')
		     cmp+= toupper(ch);
		xuli(cmp);
	}	
}
//(A - B + C)  - (A + (B-C))
