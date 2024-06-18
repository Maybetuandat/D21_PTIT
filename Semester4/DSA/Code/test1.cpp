#include<bits/stdc++.h>
using namespace std;
int k;
string s="";
void sinh(char bef, char aft)
{
	for(char ch = bef; ch <= aft; ch++)
	{
		s = s + ch;
		if(s.length() == k)
		  cout<<s<<endl;
		else
		   sinh(ch, aft);
		s.erase(s.length() - 1);
	}
}
int main ()
{
	char ch; 
	cin>>ch>>k;
	sinh('A', ch);
}
