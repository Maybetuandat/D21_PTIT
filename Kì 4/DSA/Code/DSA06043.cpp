#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void xuli(int n)
{
	ll f[n+1];
	f[0]=0;
	for(int i=1; i<=n; i++)
	{
		int x; cin>>x;
		f[i]= f[i- 1] + x;
	}
	bool kt= false;
	for(int i=1; i<=n; i++)
	{
		if(f[i-1] == f[n] - f[i])
		{
			kt=true;
			cout<<i<<endl;
			break;
		}
	}
	if(!kt)
	   cout<<"-1"<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		xuli(n);
	}
}
