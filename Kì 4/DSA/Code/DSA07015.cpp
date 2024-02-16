#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll prio(char ch)
{
	if(ch == '+' || ch =='-')
	  return 1;
	return 2;
}
ll cal(char ch, ll a, ll b)
{
	switch (ch)
	{
		case '+': return a + b;  break;
		case '-': return a - b; break;
		case '*': return a * b; break;
		case '/': return a / b; break;
	}
}
string convert(string s)
{
	stack<char> st;
	vector<ll> val;
	
	int i=0;
	while(i < s.length())
	{
		if(isdigit(s[i]))
		{
			int j = i+1;
			while(j < s.length() && isdigit(s[j]))
			  j++;
			//int k = stoi(s.substr(i, j -i));
			ll k = 0;
			for(int t = i; t<j; t++)
			{
				k = k * 10 + (s[t] - '0');
			}
			val.push_back(k);
			i = j;
		}
		else
		{
			while(!st.empty() && prio(st.top()) >= prio(s[i]))
			{
				ll k1 = val.back(); val.pop_back();
				ll k2 = val.back(); val.pop_back();
				val.push_back(cal(st.top(), k2, k1));
				st.pop();
			}
			st.push(s[i]);
			i++;
		}
	}
	while(!st.empty())
	{
			ll k1 = val.back(); val.pop_back();
			ll k2 = val.back(); val.pop_back();
			val.push_back(cal(st.top(), k2, k1));
			st.pop();
	}
	return to_string(val.back());
}
void ct()
{
	//thuat toan

	//luu y: gia tri cua ket qua la long long -> can khai bao bien du lon de luu tru
	
	
	
	string s; cin>>s;
	s='(' + s + ')';
	stack<string> st;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i] != ')')
		  st.push(string(1, s[i]));
		else
		{
			string cmp ="";
			while(!st.empty() && st.top() != "(")
			  {
			  	cmp = st.top() + cmp;
			  	st.pop();
			  }
			st.pop();//bo dau mo ngoac
			st.push(convert(cmp));
		}
	}
	string ans ="";
	while(!st.empty())
	{
		ans += st.top();
		st.pop();
	}
	cout<<ans<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
