#include<bits/stdc++.h>
using namespace std;
bool check(vector<int> a, int x)
{
	int k = a[0] % x;
	for(int i=1; i<a.size() ; i++)
	  if( a[i] % x  != k)
	    return false;
	return true;
}
void xuli(int n)
{
	vector<int> a(n);
	for(int i=0; i<n; i++)
	  cin>>a[i];
	sort(a.begin(), a.end());
	vector<int> ans;
	int d= a[n-1] - a[0];
	for(int i=1; i<=sqrt(d); i++)
	{
		if( d % i == 0)
		{
			if( i == d / i)
			{
				ans.push_back(i);
			}
			else
			{
				ans.push_back(i);
				ans.push_back(d / i);
			}
		}
	}
	int count =0;
	for(int x : ans)
	{
		if( check(a, x))
		  count++;
		  
	}
	cout<<count<<endl;
}
void ct()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		xuli(n);
	}
}
int main ()
{
	ct();
	return 0;
}
