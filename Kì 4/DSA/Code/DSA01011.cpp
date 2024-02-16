#include<bits/stdc++.h>
using namespace std;
void xuli(string s)
{
	int a[100], n=0;
	for(char ch : s)
	{
		n++;
		a[n] = (int) (ch - '0');
	}
	int i = n - 1;
	while(i > 0 && a[i] >= a[i+1])
	  i--;
//	cout<<i<<endl;
	if(i == 0)
	{
		cout<<"BIGGEST\n";
		return;
	}
	int k = n;
	while(a[k] <= a[i])
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
	for(int i=1; i<=n; i++)
	   cout<<a[i];
}
int main ()
{
	int t; cin>>t;
	for(int i=1; i<=t; i++)
	{
		int x; cin>>x;
		string s; cin>>s;
		cout<<x<<" ";
		xuli(s);
		cout<<endl;
	}
}
