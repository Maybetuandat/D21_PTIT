#include<bits/stdc++.h>
using namespace std;
int n,k, c[100];
string s;
set<string> ans;
void in()
{
	string adu="";
	for(int i=1; i<=k; i++)
	   adu = adu + s[c[i] - 1];
	ans.insert(adu);
	
}
void trial(int i)
{
	for(int j=c[i-1] + 1; j<= n - k + i; j++ )
	{
		c[i] = j;
		if(i == k)
		  in();
		else
		  trial(i + 1);
	}
}
void ct()
{
     cin>>n;
     ans.clear();
	 cin>>s;
	for(k=1; k<=n; k++)
	   trial(1);
	for(string x : ans)
	  cout<<x<<" ";
	cout<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
