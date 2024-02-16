#include<bits/stdc++.h>
using namespace std;
void right(int [][101],int ,int ,int ,int );
void left(int [][101], int ,int , int ,int);
void right(int a[][101], int x1, int y1, int x2, int y2)
{
	for(int i=x1; i<=x2; i++)
	{
		cout<<a[y1][i]<<" ";
	}
	for(int j=y1+1; j<=y2; j++)
	{
		cout<<a[j][x2]<<" ";
	}
	if( x2 - x1 >0 && y2 - y1 > 0)
	{
		y1++;
		x2--;
		left(a,x1,y1,x2,y2);
	}
}
void left(int a[][101]  , int x1, int y1, int x2, int y2)
{
	for(int i=x2; i>=x1; i--)
	{
		cout<<a[y2][i]<<" ";
	}
	for(int j = y2-1; j>=y1; j--)
	{
		cout<<a[j][x1]<<" ";
	}
	if( x2 > x1  && y2 -y1 >0 )
	{
		x1++;
		y2--;
		right(a,x1,y1,x2,y2);
	}
}
void ct()
{
	int t;
	int a[101][101];
	int m,n;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		for(int i=0; i<m; i++)
		{
			for(int j=0; j<n; j++)
			cin>>a[i][j];
		}
		right(a, 0 ,0 ,n-1, m-1);
		cout<<"\n";
	}
}
int main ()
{
	ct();	
}

