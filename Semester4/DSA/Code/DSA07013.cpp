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
		stack<ll> st;
		for(char ch : s)
		{
			if(!check(ch))
			{
				ll x = ch - '0';
				st.push(x);
			}
			else
			{
				ll k1 = st.top(); st.pop();
				ll k2 = st.top(); st.pop();
				ll s = 0;
				if(ch == '+')
					s = k1+ k2;
				else if(ch == '-')
					s = k2 - k1;
					else if(ch == '*')
						  s = k1 * k2;
						 else 
						    s = k2 / k1;
				st.push(s); 
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