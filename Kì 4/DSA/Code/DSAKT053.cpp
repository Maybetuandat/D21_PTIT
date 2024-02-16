#include<bits/stdc++.h>
using namespace std;
void ct()
{
	string a,b;
	cin>>a>>b;
	int n=a.length(), m = b.length();
	int f[a.length() + 1][b.length()  + 1]={0};
	for(int i=0; i<=n; i++)
	    f[i][0] = 0;
	for(int i=0; i<=m; i++)
	   f[0][i] = 0;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			if(a[i-1] == b[j-1])
			   f[i][j] = f[i-1][j-1] + 1;
			else
			   f[i][j] = max(f[i-1][j], f[i][j-1]);
		}
	}
	cout<<f[n][m]<<endl;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
