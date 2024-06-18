#include<bits/stdc++.h>
using namespace std;
int dem,n,m;
void backtrack(int i, int j)
{
	if(i == n && j == m)
	{
		dem++;
		return;
	}
	if(i < n)
	backtrack(i+1, j);
	if(j <m)
	backtrack(i, j+1);
}
void ct()
{
	cin>>n>>m;
	dem=0;
	int a[100][100];
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		   cin>>a[i][j];
	}
	backtrack(1,1);
	cout<<dem<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
