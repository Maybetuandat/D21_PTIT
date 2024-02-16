#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
	vector<int> a(n);
	for(int i=0; i<n; i++) 
	   cin>>a[i];
	sort(a.begin(), a.end());
	for(int x : a)
	  cout<<x<<" ";
	cout<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		xuli(n);
	}
}
