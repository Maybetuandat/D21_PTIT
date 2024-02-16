#include<bits/stdc++.h>
using namespace std;
void ct()
{
	string s; cin>>s;
	stack<int> st;
	int ans= 0;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i] == '[')
		  st.push(i);
		else
		{
			if(!st.empty())
			  st.pop();
			else
			{
				int j = i;
				while(s[j] == ']')  j++;
				swap(s[i], s[j]);
				ans += j -i;
				st.push(i);
			}
		}
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
