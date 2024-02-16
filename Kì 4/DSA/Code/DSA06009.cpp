#include<bits/stdc++.h>
using namespace std;
void xuli(int n, int k)
{
	int a[n];
	for(int &x : a)
	  cin>>x;
	sort(a, a + n);
	long long dem=0;
	for(int i=0; i< n - 1; i++)
	{
		int x = k - a[i];
		int vt = lower_bound(a + i + 1, a + n, x) - a;
		while(vt < n && a[vt] == x)
		{
			dem++;
			vt++;
	    }
    }
    	cout<<dem<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		int n, k; cin>>n>>k;
		xuli(n,k);
	}
}
