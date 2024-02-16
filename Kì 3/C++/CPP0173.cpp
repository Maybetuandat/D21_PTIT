#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x,y,z,n;
ll UCLN(ll a, ll b)
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
ll BCNN(ll a, ll b)
{
	return a*b / UCLN(a,b);
}
int demcs(ll a)
{
	int dem=0;
	while( a != 0)
	{
		dem++;
		a/=10;
	}
	return dem;
}
void xuli()
{
	ll ans;
	ans=BCNN(x,y);
	ans=BCNN(ans,z);
	if( demcs(ans) == n)
	{
		cout<<ans<<endl;
	}
	else
	  if( demcs(ans) > n)
	     cout<<"-1\n";
	  else
	  {
	  	  ll kq=pow(10,n-1);
	  	  ll kt=kq/ans;
	  	  while(1)
	  	  {
	  	  	if( ans * kt >= kq)
	  	  	{
	  	  		cout<<ans*kt<<endl;	
	  	  		break;
			}
			kt++;
		  }
	  }
}
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>z>>n;
		xuli();	
	}	
} 
