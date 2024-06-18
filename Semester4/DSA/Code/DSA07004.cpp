#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{

	string s; cin>>s;
	stack<char> st;
	int mo =0, dong = 0;
	for(char ch : s)
	{
		if(ch == '(')
		{
			mo++;
			st.push(ch);
		}
		else
		{
			if(!st.empty() && st.top() == '(')
			{
					st.pop();
					mo--;
			}
			else
			{
				st.push(ch);
				dong++;
			}
		}

	}	
		int ans =  dong / 2 + mo / 2 + dong % 2 + mo % 2;
	     cout<<ans<<endl;
	
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