#include<bits/stdc++.h>
using namespace std;
void nhiphanlientruoc(string s)
{
	int i = s.length()-1;
	while(s[i] == '0' && i >= 0)
	{
		s[i]='1';
		i--;
	}
	if(i < 0)
	{
		cout<<s<<endl;
		return;
	}
	s[i]='0';
	cout<<s<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		string s; cin>>s;
		nhiphanlientruoc(s);
	}
}
