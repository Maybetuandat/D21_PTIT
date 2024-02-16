#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll chuyendoi(int a[], int j, int k)
{
	ll res = 0;
	for(int i=j; i<= j + k -1; i++)
	   res = res * 10 + a[i];
	return res;
}
void ct()
{
	string s; cin>>s;
	int a[20];
	for(int i=0; i<s.length(); i++)
	   a[i+1] = s[i] - '0';
	int n = s.length();
	ll ans = 0;
	for(int k=1; k<=n; k++)
	{
		//k la do dai cua so
		for(int j=1; j<= n - k + 1 ; j++)
		{
			ans += chuyendoi(a, j, k);
		}
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
