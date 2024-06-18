#include<bits/stdc++.h>
using namespace std;
void xuli(string s)
{
	string s1="";
	s1 = s1 + s[0];
	for(int i=1; i<s.length(); i++)
	{
		char ch = s1[s1.length() - 1] ;
		if(s[i] == '0')
		{
			s1 = s1 + ch;
		}
		else
		{
			int t = ch -'0';
			t = (t + 1 ) % 2;
			ch = t + '0';
			s1 = s1  + ch ;
		}
	}
	cout<<s1<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		string s; cin>>s;
		xuli(s);
	}
}
