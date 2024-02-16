#include<bits/stdc++.h>
using namespace std;
int a[30], n ,k;
vector<string> ans;
void in()
{
	string s="";
	for(int j=1; j<=n; j++)
	{
		if(a[j] == 0)
		  s+='A';
		else
		   s+='B';
	}
	int i=0, maxx=0;
	while(i < s.length())
	{
		if(s[i] == 'A')
		{
			int j=i+1;
			while(s[j] == 'A' && j < s.length())
			   j++;
			if(j - i > maxx)
			  maxx=j-i;
			i = j + 1;
		}
		else
		  i++;
	}
	if(maxx == k)
		ans.push_back(s);
	
}
void sinh(int i)
{
	for(int j=0; j<=1; j++)
	{
		a[i] = j;
		if(i == n)
		   in();
		else
		   sinh(i+1);
	}
}
int main ()
{
    cin>>n>>k;
	sinh(1);
	cout<<ans.size()<<endl;
	for(string x : ans)
	  cout<<x<<endl;
}
