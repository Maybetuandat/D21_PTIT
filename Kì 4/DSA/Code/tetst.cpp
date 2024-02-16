#include<bits/stdc++.h>
using namespace std;
int f[1001][1001];
int Nmax = 1e9 + 7;
void init()
{
	for(int i=0; i<= 1000; i++)
	{
		for(int j=0; j<= i; j++)
		  if(j == 0 || j == i)
		    f[i][j] = 1;
		else
		   f[i][j] = (f[i-1][j-1] + f[i-1][j]) % Nmax;
	}
}
int main ()
{
	int t; cin>>t;
	init();
	while(t--)
	{
		int n,k; cin>>n>>k;
		cout<<f[n][k]<<endl;
	}
}
