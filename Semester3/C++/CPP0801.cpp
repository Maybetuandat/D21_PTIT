#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main ()
{
	ifstream f;
	f.open("PTIT.in", ios::in);
	ofstream g;
	g.open("PTIT.out",ios::out);
	string s;
	while( !f.eof())
	{
		getline(f,s);
		g<<s;
	 } 
	f.close();
	g.close();
}
