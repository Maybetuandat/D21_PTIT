#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n; cin>>n;
	int f[n+1]= {0};
	for(int i=1; i<=n; i++)
	{
		f[i] = i;
		for(int j=1; j<= sqrt(i); j++)
		  f[i] = min(f[i], f[i- j * j] + 1);
	}
	cout<<f[n]<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
