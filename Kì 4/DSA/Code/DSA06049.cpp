#include<bits/stdc++.h>
using namespace std;
void xuli()
{
	int n,k; cin>>n>>k;
	int a[n];
	for(int &x : a)
	  cin>>x;
	sort(a, a + n);
	long long dem=0;
	for(int i=0; i<n-1; i++)
	{
		dem += lower_bound(a + i + 1, a + n, k + a[i]) - a - i - 1;
	}
	cout<<dem<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		xuli();
		cout<<endl;
	}
}
