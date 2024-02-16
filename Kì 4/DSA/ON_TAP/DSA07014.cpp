#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll calculator(ll a, ll b, char ch)
{
	if(ch == '-')
	  return a - b;
	if(ch == '+')
	  return a + b;
	if(ch == '*')
	  return a * b;
	 
	 
	return a / b;
	  
}
bool check(char ch)
{
	if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
	   return true;
	return false;
}
void ct()
{
	string s; cin>>s;
	stack<ll> st;
	
	int n = s.length();
	for(int i=n-1; i>=0; i--)
	{
		if(!check(s[i]))
		{
			ll x = s[i] - '0';
			st.push(x);
		}
		else
		{
			ll x1 = st.top(); st.pop();
			ll x2 = st.top(); st.pop();
			ll x = calculator(x1, x2, s[i]);
			st.push(x);
		}
	}
	cout<<st.top()<<endl;
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

