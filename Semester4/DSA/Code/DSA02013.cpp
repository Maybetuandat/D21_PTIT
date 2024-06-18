#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int c[100];
int n,p,s, m, vt1, vt2;
vector<string> ans;
void in()
{
	string s="";
	for(int i=1; i<=n; i++)
	  s = s + to_string(c[i]) + " ";
	ans.push_back(s);
}
void dq(int i, int sum)
{
	for(int j=vt1; j<=vt2; j++)
	{
		if( a[j] > c[i-1] &&  sum + a[j] <= s)
		{
			c[i] = a[j];
			sum = sum + a[j];
			if(sum == s && i == n)
			  in();
			else
			  dq(i+1, sum );
			sum = sum - a[j];
		}
	}
}
bool check(int t)
{
	for(int i=2; i<= sqrt(t); i++)
	  if( t % i == 0)
	    return false;
	return true;
}
void ct()
{
	  cin>>n>>p>>s;
	   vt1=0;
	  while(a[vt1] <= p)
	     vt1++;
	vt2= a.size() - 1;
	while(a[vt2] > s)
	   vt2--;	
	ans.clear();
	dq( 1, 0);
	cout<<ans.size()<<endl;
	for(string x : ans)
	  cout<<x<<endl;
	
}
int main ()
{
	for(int i=2; i<= 200; i++)
	   if(check(i))
	     a.push_back(i);
	m = a.size();
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
