#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
	ll q,p; cin>>p>>q;
	while(1)
	{
		if(q % p == 0)
		{
			cout<<"1/" << q / p<<endl;
			return;
		}
		else
		{
			ll x = q / p + 1;
			cout<<"1/"<<x<<" + ";
			p = p * x - q;
			q = q * x;
		}
	}
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
