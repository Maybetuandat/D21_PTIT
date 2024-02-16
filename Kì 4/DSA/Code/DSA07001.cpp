#include<bits/stdc++.h>
using namespace std;
void in(stack<int> st)
{
	stack<int> adu;
	while(!st.empty())
	{
		adu.push(st.top());
		st.pop();
	}
	while(!adu.empty())
	{
		cout<<adu.top()<<" ";
		adu.pop();
	}
	cout<<endl;
}
int main ()
{
	stack<int> st;
	while(1)
	{
	
		string s; cin>>s;
		if(s == "\n")
		  return 0;
		if(s == "push")
		{
			int n; cin>>n;
			st.push(n);
		}
		if(s == "pop")
		  st.pop();
		if(s == "show")
		{
			if(st.empty())
			{
				cout<<"empty\n";
			}
			else
			   in(st);
		}
	}
}
