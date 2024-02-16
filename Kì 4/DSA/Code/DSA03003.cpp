#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t; cin>>t;
	int Nmax = 1000000007;
	while(t--)
	{
		int n; cin>>n;
		int a[n];
		for(int i=0; i<n; i++)
		  cin>>a[i];
		sort(a, a + n);
		long long ans=0;
		for(int i=0; i<n; i++)
		{
			ans = ans + ((a[i] % Nmax) * (i % Nmax)) % Nmax;
		}
		cout<<ans<<endl;
	}
}
