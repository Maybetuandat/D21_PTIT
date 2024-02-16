#include<bits/stdc++.h>
using namespace std;
int a[50], c[50];
int n,x, ok;
vector<string> ans;
void in(int n)
{
	string s="{";
	for(int i=1; i<n; i++)
	  s =s + to_string(c[i]) + " ";
	s = s + to_string(c[n]) + "}";
	ans.push_back(s);
}
void dq(int i,  int s)
{
	for(int j=1; j<=n; j++)
	{
		if(a[j] >= c[i-1] && s + a[j] <= x)
		{
			c[i] = a[j];
			if(s + a[j] == x)
			{
				ok = 1;
				in(i);
			}
			  
			else
			  dq(i+1, s + a[j]);
		}
	}
}
void ct()
{
	cin>>n>>x;
	for(int i=1; i<=n; i++)
	  cin>>a[i];
	ans.clear();
	ok = 0;
	dq(1, 0);
	if(ok == 0)
	{
		cout<<"-1\n";
		return;	
	}
	cout<<ans.size()<<" ";
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
