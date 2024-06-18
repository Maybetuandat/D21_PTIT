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
	int n = s.length();
	//duyệt các kí tự trong xâu từ cuối lại
	stack<string> st;
	for(int i = n-1; i>=0; i--)
	{
		if(!check(s[i]))
		  st.push(string(1, s[i]));
		else
		{
			string k1 = st.top(); st.pop();
			string k2 = st.top(); st.pop();
			st.push(k1 + k2 + s[i]);
		}
	}
	cout<<st.top()<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	//các bài biến đổi tiền tố đều co con trỏ chạy từ cuối lại
	//cấc bài hậu tố thì cho con trỏ chạy từ đầu đi 
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
	return 0;
}
