#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll C[1005][1005];
#define Nmax  1000000007
void init()
{
	for(int i=0; i<=1000; i++)
	{
		for(int j=0; j<=i; j++)
		{
			if(i ==j || j == 0)
			  C[i][j] = 1;
			else
			{
				C[i][j] = C[i-1][j] + C[i-1][j-1];
				C[i][j] %= Nmax;
			}
		}
	}
}
void ct()
{
	int n,k; cin>>n>>k;
	cout<<C[n][k]<<endl;
}
int main ()
{
	int t; cin>>t;
	init();
	while(t--)
	{
		ct();
	}
}
