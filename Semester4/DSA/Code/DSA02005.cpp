#include<bits/stdc++.h>
using namespace std;
void xuli(string s)
{
	int n =s.length();
	int a[n + 1];
	for(int i=1; i<=n; i++)
	    a[i]=i;
	while(1)
	{
		for(int i=1; i<=n; i++)
		  cout<<s[a[i] -1];
		cout<<" ";
		int i = n-1;
		while( i > 0 && a[i+1] < a[i])
		   i--;
		if(i == 0)
		  return;
		int k = n;
		while(a[k] < a[i])
		   k--;
		swap(a[i], a[k]);
		int l = i+1;
		int r = n;
		while(l < r)
		{
			swap(a[l], a[r]);
			l++;
			r--;
		}
	}
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		string s; cin>>s;
		xuli(s);
		cout<<endl;
	}
}
