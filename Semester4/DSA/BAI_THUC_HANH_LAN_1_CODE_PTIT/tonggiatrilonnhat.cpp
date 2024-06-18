#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n,s; cin>>n>>s;
	int w[n+1], v[n+1];
	for(int i=1; i<=n; i++)
	  cin>>w[i]>>v[i];
	int f[n+1][s+1] ;
	memset(f, 0, sizeof(f));
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=s; j++ )
		{
			f[i][j] = f[i-1][j];
			if(j >= w[i])
			{
				f[i][j] = max(f[i][j], f[i-1][j-w[i]] + v[i]);
			}
		}
	}
	cout<<f[n][s]<<endl;
}
int main ()
{

		ct();
}
