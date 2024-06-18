#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n; cin>>n;
	int a[n+1][n+1];
	for(int i=0; i<n ; i++)
	{
		for(int j=0; j<n; j++)
		  cin>>a[i][j];
	}
	int i,j,tong[n+1][n+1];
	tong[0][0]=a[0][0];
	for(i=1; i<n; i++)
	{
		tong[i][0]=tong[i-1][0] +  a[i][0];
		tong[0][i]=tong[0][i-1] +  a[0][i];
	}
	for(int j=1; j<n; j++)
	{
		for(int i=1; i<n; i++)
		{
			tong[i][j]=a[i][j] + min(tong[i-1][j], tong[i][j-1]);
		}
	}
	cout<<tong[n-1][n-1]<<endl;
}
