#include<bits/stdc++.h>
using namespace std;
string check(char ch)
{
	if( ch =='4' )
	{
		return "223";
	}
	if(ch == '6')
	  return "35";
	if( ch == '8')
	{
		return "2227";
	}
	if( ch == '9')
	    return "3327";
	if( ch == '2')
	  return"2";
	if( ch == '3')
	  return"3";
	if( ch == '5')
	  return"5";
	if( ch == '7')
	  return"7";
	if( ch == '0')
	  return "";
}
void xuli(string s,int n)
{
	int i,j;
	string s1="";
	for( i=0;i<n; i++)
	{
		if( (s[i] != '1') )  
		{
			  s1=s1+check(s[i]);
		}
	}
	int m=s1.length();
	for(i=0; i<m-1; i++ )
	{
		for(j=i+1; j<m; j++)
		{
			if( s1[i] < s1[j])
			{
				char tg=s1[i];
				s1[i]=s1[j];
				s1[j]=tg;
			}
		}
	}
	cout<<s1<<endl;
}
int main ()
{
	int t,n;
	string s;
	cin>>t;
	while( t--)
	{
		cin>>n;
		cin>>s;
		xuli(s,n);
	}
}
