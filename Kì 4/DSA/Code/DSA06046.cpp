#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
	int a[n];
	for(int &x: a)
	    cin>>x;
	sort(a, a + n);
	int minn = INT_MAX;
	for(int i=0; i<n-1; i++)
	{
		if(abs(a[i] - a[i+ 1]) < minn)
		   minn=abs(a[i] - a[i+1]);
	}
	cout<<minn<<endl;
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
