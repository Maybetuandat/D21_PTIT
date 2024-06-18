#include<bits/stdc++.h>
using namespace std;
void ct()
{
	string s; cin>>s;
	int n = s.length();
	s = '#' + s;
	
	int i = n;
	while(i > 0 && s[i] != '0')
	{
		s[i] = '0';
		i--;
	}
	if(i == 0)
	{
		for(int i=1; i<=n; i++)
		  cout<<"0";
		cout<<endl;
		return;
	}
	s[i] = '1';
	s.erase(s.begin());
	cout<<s<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();	
	}
}
