#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ucln(ll a, ll b)
{
	ll du = 0;
	while( b != 0)
	{
		du = a % b;
		a=b;
		b =du;
	}
	return a;
}
void ct()
{
	ll  n,k; cin>>n>>k;
	ll a[n];
	for(ll &x : a)
	{
		cin>>x;
		if( x == k)
		{
			cout<<"1\n";
			return;
		}
	} 
	ll minn = INT_MAX;bool kt = false;
	for(ll i=0; i<n-1; i++)
	{
		ll adu = a[i];
		for(ll j=i+1; j<n; j++)
		{
			adu = ucln(adu, a[j]);
			if(adu == k)
			{
				kt =true;
				if(j - i +1 < minn)
				  minn = j-i+1;
			}
		}
		    
	}
	if(!kt)
	  cout<<"-1\n";
	else
	   cout<<minn<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
