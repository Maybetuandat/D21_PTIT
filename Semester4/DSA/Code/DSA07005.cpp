#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(char ch)
{
	if(ch =='+' || ch =='-')
	  return true;
	return false;
}
char convert(char ch)
{
	if(ch == '-')
	  return '+';
	return '-';
}
void ct()
{
	string s; cin>>s;
	stack<string>st;
	for(int j=0; j<s.length(); j++)
	{
		if(s[j] != ')')
		{
			
			if(j == 0 && s[j] =='-')
			   st.push(" ");	
			st.push(string(1, s[j]));
		}
		  
		else
		{
			string cmp ="";
			while(!st.empty() && st.top() != "(")
			{
				cmp = st.top() + cmp;
				st.pop();
			}
			st.pop();
			if(!st.empty())
			{
				string adu = st.top();st.pop();
				if(!st.empty() && adu.back() == '-')
				{
					for(int i=0; i<cmp.length(); i++)
						if(check(cmp[i]))
							cmp[i] = convert(cmp[i]);
				}
				else if(adu.back() !='+')
				      {
				      	st.push(adu);
				      	adu ="";
					  }
				adu += cmp;
				st.push(adu);	
			}
			else
			   st.push(cmp);	
		}
	}
	string ans="";
	while(!st.empty())
	{
		ans = st.top() + ans;
		st.pop();
	}
	if(ans[0] == ' ')
	  ans.erase(ans.begin());
	cout<<ans<<endl;
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
}
