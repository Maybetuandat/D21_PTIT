#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Nmax=1e9+7;
ll f[1005];
void Init()
{
	f[0]=0;
	f[1]=1;
	for(int i=2; i<=1005; i++)
		f[i]=(f[i-1] % Nmax + f[i-2] % Nmax) % Nmax;
	
}
void ct()
{
	Init();
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		cout<<f[n]<<endl;
	}
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ct();
}
