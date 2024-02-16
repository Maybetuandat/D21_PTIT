#include<bits/stdc++.h>
using namespace std;
char c;
int k;
void sinh(string s, char tr)
{
	for(char  ch = tr; ch<=c; ch++)
	{
		s = s + ch;
		if(s.length() == k)
			cout<<s<<endl;
		else
		   sinh(s, ch);
		s.erase(s.length() - 1);
	}
}
int main ()
{
	cin>>c>>k;
	sinh("", 'A');
}
