#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
	long long k; cin>>k;
	int a[n];
	for(int i=0; i<n; i++)
	   cin>>a[i];
	sort(a, a + n);
	for(int i=0; i<n-2; i++)
	{
		for(int j=i+1; j<n-1; j++)
		{
			long long ans = k - a[j] - a[i];
			if(binary_search(a + j + 1, a + n,  ans) )
			{
				cout<<"YES\n";
				return;
			}
		}
	}
	cout<<"NO\n";
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
