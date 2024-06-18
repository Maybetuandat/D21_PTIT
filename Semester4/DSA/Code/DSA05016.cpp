#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[10009];
void init()
{

	f[1] = 1;
	ll i3 = 1,  i2 = 1, i5 = 1;
	for(int i=2; i<= 10000; i++)
	{
		f[i] = min({f[i2] * 2, f[i3] * 3, f[i5] * 5});
		if(f[i] == f[i2] * 2)
		     i2++;
		if(f[i] == f[i3] * 3)
		     i3++;
		if(f[i] == f[i5] * 5)
		    i5++;
	}
}
void ct()
{
	int n; cin>>n;
	cout<<f[n]<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
		init();
	int t; cin>>t;

	while(t--)
	{
		ct();
	}
}
