#include<bits/stdc++.h>
using namespace std;
#define  Nmax 1000009
typedef long long ll;
void ct()
{

	int a[Nmax]={0};
	a[1]=1;
	for(int i=2; i<=sqrt(Nmax); i++)
	{
		if(a[i] == 0)
		{
		  for(int j=2; j<= Nmax / i; j++)
		     a[i*j]=1;	    
        }
	} 
	
	
	int t; cin>>t;
	ll l,r;	
	while(t--)
	{
		cin>>l>>r;
		ll dau=sqrt(l);
		ll cuoi=sqrt(r);
		ll dem=0;
		for(ll i=dau; i<=cuoi; i++)
		{
			if(a[i] == 0  &&  i*i >= l && i*i <= r)
			  dem++;
		}
		cout<<dem<<endl;
	}
}
int main ()
{
	ct();
	return 0;
}
