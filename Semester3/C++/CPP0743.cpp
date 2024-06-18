#include<bits/stdc++.h>
using namespace std;
void xuli(string s)
{
	stringstream ss(s);
	string cmp;
	vector<string> adu;
	while( ss >> cmp)
	{
		adu.push_back(cmp);
	}
	for(vector<string>::iterator it = adu.end()-1; it >= adu.begin(); it--)
	{
		cout <<*it <<" ";
	}
	cout<<endl;
}
void ct()
{
	int t;
	string s;
	cin>>t;
	cin.ignore();
	while( t--)
	{
		getline(cin,s);
		xuli(s);
	}
}
int main ()
{
	ct();
}
