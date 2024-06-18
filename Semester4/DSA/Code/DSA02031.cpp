#include<bits/stdc++.h>
using namespace std;
char c;
int n;
int vs['Z'] = {0};
bool check(char ch)
{
	if(ch == 'B' || ch=='C' || ch=='D'|| ch=='F' || ch =='G' || ch=='H')
	   return true;
	return false;
}
void in(string s)
{
	bool kt = true;
	for(int i=1; i<s.length() - 1; i++)
	{
		if(s[i] == 'A' || s[i] == 'E')
		{
			if(    check(s[i-1]) && check(s[i+1])    )
				{
					kt = false;
					break;
				}
		}
	}
	if(kt)
	  cout<<s<<endl;
}
void sinh(string s)
{
	for(char ch = 'A'; ch<= c; ch++)
	{
		if(!vs[ch])
		{
			s = s + ch;
			vs[ch] = 1;
			if(s.length() == n)
			  in(s);
			else
			  sinh(s);
			vs[ch]=0;
			s.erase(s.length() - 1);
		}
	}
}
int main ()
{
	 cin>>c;
	 n = c -'A' + 1;
	sinh("");
}
