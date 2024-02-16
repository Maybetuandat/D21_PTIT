#include<bits/stdc++.h>
using namespace std;
int  C[1009][1009];
const int  mod = (int  ) 1e9 + 7;
void init()
{
	for(int  i=0; i<=1009; i++)
	{
		for(int  j=0; j<=i; j++)
		{
			if( j == 0 || i == j)
			  C[i][j]=1;
			else
			{
				C[i][j]= C[i-1] [j] + C[i-1] [j-1];
				C[i][j] %= mod;
			}
		}
	}
}
int main ()
{
	init();
	int  m,n;
	cin>>n>>m;
	cout<<C[m+n-1][n] % mod <<endl;
}
