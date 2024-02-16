#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void casetest()
{
	int n,s,m; cin>>n>>s>>m;
	ll res= s * m;
	if(n < m)
	{
		cout<<"-1\n";
		return;
	}
	if( n * 6 < 7 * m)
	{
		cout<<"-1\n";
		return;
	}
	ll ans = res / n;
	if(res % n != 0)
	   ans = ans + 1;
	if(ans > s)
	{
		cout<<"-1\n";
		return;
	}
	cout<<ans<<endl;
	
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		casetest();
	}
}
