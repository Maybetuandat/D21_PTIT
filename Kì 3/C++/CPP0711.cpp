#include<bits/stdc++.h>
using namespace std;
int n;
int mang[100]; 
void xuat()
{
	for(int i=0; i<n; i++)
	  cout<<mang[i];
	cout<<" ";
}
void sinhnhiphan(int k)
{
	if( k == n )
	  xuat();
	else
	{
		for(int i=0; i<=1; i++)
		{
			mang[k]=i;
			sinhnhiphan(k+1);
		}
	}
}
int main ()
{
	int t;
	cin>>t;
	while( t--)
	{
		cin>>n;
		sinhnhiphan(0);
		cout<<"\n";
	}
}
