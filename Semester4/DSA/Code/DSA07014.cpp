#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int calculation(int x, int y, char ch)
{
	switch (ch)
	{
	case '+': 
		return x + y;
		break;

	case '-': 
		return x - y;
		break;
	case '*': 
		return x * y;
		break;
	default: return (int) x / y;
	}
}
bool check(char ch)
{
	if(ch =='+' || ch == '-' || ch == '*' || ch == '/')
		return true;
	return false;
}
void ct()
{
	string s; cin>>s;
	int n = s.length();
	stack<int> st;
	for(int i = n-1; i>= 0; i--)
	{
		if(!check(s[i]))
		
			st.push(s[i] - '0');
		
		else
		{
			int k1 = st.top(); st.pop();
			int k2 = st.top(); st.pop();
			st.push(calculation(k1, k2, s[i]));
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