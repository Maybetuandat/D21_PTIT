#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void xuli(int n)
{
	if(n <= 2)
	{
		cout<<"NO"<<endl;
		return;
	}
	ll a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		a[i] = a[i] * a[i];
	}
	sort(a, a + n);
	for(int i=0; i<n-2; i++)
	{
		for(int j=i+1; j<n-1; j++)
		{
			ll ans = a[i] + a[j];
			if(binary_search(a + j + 1, a + n, ans))
			{
				cout<<"YES"<<endl;
				return;
			}
		}
	}
	cout<<"NO"<<endl;
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
