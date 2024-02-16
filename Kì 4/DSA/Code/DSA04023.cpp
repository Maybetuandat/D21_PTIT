#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n,k; cin>>n>>k;
	int a[n];
	for(int &x : a)
	  cin>>x;
	sort(a, a  + n);
	long long ans  = 0;
	for(int i=0; i<n-1; i++)
	{
		int s = a[i] + k;
		ans += (lower_bound( a + i + 1, a + n, s) - a - i - 1);
	}
	cout<<ans<<endl;
}

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
