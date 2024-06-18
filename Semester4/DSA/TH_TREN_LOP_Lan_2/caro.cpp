#include<bits/stdc++.h>
using namespace std;
int n, a[30];
char ch;
void in()
{
	int demo=0, demx=0;
	string s="";
	for(int j=1; j<=n; j++)
	{
		if(a[j] == 0)
		{
		
		  s+="O";
		  
	   }
		else
		{
		
		  s+="X";
		
	    }
	}
	int dem=0, dem2=0;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i] == 'X')
		{
			for(int j=i; j<s.length(); j++)
			{
				if(s[j] == 'X')
				   dem++;
				else
				  break;
			}
			if(dem > demx)
			  demx=dem;
		}
	}
	for(int i=0; i<s.length(); i++)
	{
		if(s[i] == 'O')
		{
			for(int j=i; j<s.length(); j++)
			{
				if(s[j] =='O')
				  dem2++;
				else
				  break;
			}
			if(dem2 > demo)
			  demo=dem;
		}
	}
	if(ch == 'X')
	{
		if(demx > demo)
		  cout<<s<<endl;
	}
	else
	 {
	 	if(demo > demx)
	 	  cout<<s<<endl;
	 }
}
void sinh(int i)
{
	for(int j=0; j<=1; j++)
	{
		a[i]=j;
		if(i == n)
		  in();
		else
		  sinh(i+1);
	}
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		cin>>n>>ch;
		sinh(1);
	}
}
