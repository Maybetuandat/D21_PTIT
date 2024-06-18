#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t; cin>>t;
	stack<int> st;
	while(t--)
	{
		string s; cin>>s;
		if(s == "PUSH")
		{
			int n; cin>>n; st.push(n);
		}
		if(s == "PRINTF")
		{
			if(st.empty())
			  cout<<"NONE\n";
			else
			  cout<<st.top()<<endl;
		}
		if(s == "POP" && !s.empty())
		  st.pop();
	}
}
