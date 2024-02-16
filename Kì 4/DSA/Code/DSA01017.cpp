#include<bits/stdc++.h>
using namespace std;
void xuli(string s)
{
	string s1 = "";
	s1= s1 + s[0];
	for(int i=1; i<s.length(); i++)
	{
		if(s[i-1] == s[i])
		   s1 = s1 + '0';
		else
		   s1 = s1 + '1';
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
