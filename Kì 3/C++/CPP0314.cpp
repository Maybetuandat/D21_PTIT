#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t;
	cin >>t;
	string s;
	cin.ignore();
	set<string> ss;
	while( t--)
	{
		getline(cin,s);
		ss.insert(s);
	}
	cout<<ss.size();
}