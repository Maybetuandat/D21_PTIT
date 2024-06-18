#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n; cin>>n;
	int a[n+1];
	for(int i=1; i<=n; i++)
	   cin>>a[i];
	int l[n+1] = {0}, r[n+1] = {0};
	l[1] = 1;
	for(int i=2; i<=n; i++)
	{
		l[i] = 1;
		if(a[i-1] < a[i])
		 l[i] = max(l[i], l[i-1] + 1);  
	}
	r[n]  = 1;
	for(int i=n-1; i>= 1; i--)
	{
		r[i] = 1;
		if(a[i ] > a[i+1])
		   r[i] = max(r[i], r[i+ 1] + 1);
	}
	int maxx = 0;
	for(int i=1; i<=n; i++)
	{
		maxx = max(maxx, r[i] + l[i] - 1);
	}
	for(int i=1; i<=n; i++)
	  cout<<l[i]<<" ";
	cout<<endl;
	for(int i=1; i<=n; i++)
	  cout<<r[i]<<" ";
	cout<<endl;
	cout<<maxx<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
