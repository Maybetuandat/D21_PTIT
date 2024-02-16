#include<bits/stdc++.h>
using namespace std;
int a[30], n, dem;
string s;
void in()
{
	for(int j=1; j<=n; j++)
	{
	   if(a[j] == 0)
	     s = s +"6";
	    else
	       s= s + "8";
	}
	s = s +" ";
	dem++;
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
		cin>>n;
		s="";  dem=0;
		sinh(1);
		cout<<dem<<endl;
		cout<<s<<endl;
	}	
}
