#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll p[1001][1001];
ll Nmax = 1e9 + 7;
void init()
{
	for(int i=1; i<= 1000; i++)
	   p[i][1] = i;
	for(int i=2; i<= 1000; i++)
	{
		for(int j=2; j<=i; j++)
			p[i][j]  = i * p[i-1][j-1] % Nmax;
	}
}
void ct()
{
	int n,k; cin>>n>>k;
	cout<<p[n][k]<<endl;
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
	return 0;
}
