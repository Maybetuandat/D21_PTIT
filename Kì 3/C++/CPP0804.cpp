#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
	
	ifstream f;
	f.open("VANBAN.in", ios::in);
	string s;
	set<string> ss;
	while(! f.eof())
	{
		f>>s;
		transform(s.begin(),s.end(), s.begin(),::tolower);
		ss.insert(s);
	}
	for(string x : ss)
	  cout<<x <<endl;
	f.close();
}
