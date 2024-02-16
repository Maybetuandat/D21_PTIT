#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mu(int b)
{
	ll ans = 1;
	for(int i=0; i<b; i++)
	   ans *= 2;
	return ans;
}
ll convert(string s)
{
	int n = s.length();
	ll ans = 0;
	for(int i=0; i<n; i++)
	{
		int k = s[i] - '0';
		ans += k * mu(n - i - 1);
	}
	return ans;
}
void ct()
{
	string s1, s2; cin>>s1>>s2;
	ll ans = convert(s1) * convert(s2);
	cout<<ans<<endl;
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
