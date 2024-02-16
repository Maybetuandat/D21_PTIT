#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
	string s; cin>>s;
	stack<int> st;
	for(int i=0; i<= s.size(); i++)
	{
		if(s[i] == 'D')
		  st.push(i+1);
		else
		{
			cout<<i+1;
			while(!st.empty())
			{
				cout<<st.top();
				st.pop();
			}
			cout<<endl;
		}

	}
	cout<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
	return 0;
}