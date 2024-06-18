#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(char ch)
{
	if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
		return true;
	return false;
}
void ct()
{
	string s; cin>>s;
	int n = s.size();
	stack<string> st;
	for(int i=n-1; i>=0; i--)
	{
		if(!check(s[i]))
			st.push(string(1, s[i]));
		else
		{
			string s1 = st.top(); st.pop();
			string s2 = st.top(); st.pop();
			string cmp = "(" + s1 + s[i] + s2+ ")";
			st.push(cmp);
		}
	}
	cout<<st.top()<<endl;	
}
int main ()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
	return 0;
}