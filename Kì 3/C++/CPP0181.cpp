#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b)
{
	ll du;
	while( b != 0)
	{
		du= a % b;
		a=b;
		b=du;
	}
	return a;
}
void ct()
{
	int t;
	ll a,x,y;
	cin>>t;
	while(t--)
	{
		cin>>a>>x>>y;
		ll i,k=gcd(x,y);
		for(i=1; i<=k; i++)
		  cout<<a;
		cout<<endl;
		
	}
	
}
int main ()
{
	ct();
}
