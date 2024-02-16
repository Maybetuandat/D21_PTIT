#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[30][30];
void init()
{
	memset(f, 0, sizeof(f));
	for(int i=1; i<=25; i++)
	{
		f[0][i] = 1;
		f[i][0] = 1;
	}
	f[0][0] = 0;
	for(int i=1; i<=25; i++)
	{
		for(int j=1; j<=25; j++)
		if(i == 0 || j == 0)
		  continue;
		else
		
		  f[i][j] = f[i-1][j] + f[i][j-1];
	}
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	init();
	int t; cin>>t;
	while(t--)
	{
		int n,m; cin>>n>>m;
		cout<<f[n][m] <<endl;
	}
}
