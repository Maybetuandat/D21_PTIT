#include<bits/stdc++.h>
using namespace std;
int n, k, a[100], mang[100], ct=0;
void in()
{
	int tong=0;
	for(int i=1; i<=n; i++)
	{
		tong+= a[i] * mang[i];
	}
	if(tong == k)
	{
		for(int i=1; i<=n; i++)
			if(a[i] == 1)
			cout<<mang[i]<<" ";
		cout<<endl;
		ct++;
	}
}
void sinh(int i)
{
	for(int j=0; j<=1; j++)
	{
		a[i]=j;
		if(i  == n)
		   in();
		else
			sinh(i+1);
	}
}
int main ()
{
	cin>>n>>k;
	for(int i=1; i<=n; i++)
	  cin>>mang[i];
	sinh(1);
	cout<<ct<<endl;
}
