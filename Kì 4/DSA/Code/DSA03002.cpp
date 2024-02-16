#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
	ll a,b;
	cin>>a>>b;
	int x[20], y[20];
	int dem1 = 0, dem2 = 0;
	while(a)
	{
		dem1++;
		x[dem1] = a % 10;
		a= a / 10;
	}
	while(b)
	{
		dem2++;
		y[dem2] = b % 10;
		b= b / 10;
	}
	a=0;b=0;
	for(int i=dem1; i>=1; i--)
	{
		if(x[i] == 6)
		{
			a = a * 10 + 5;
		}
		else
		 a= a * 10 + x[i];
	}
		for(int i=dem2; i>=1; i--)
	{
		if(y[i] == 6)
		{
			b = b * 10 + 5;
		}
		else
		 b = b * 10 + y[i];
	}
	cout<<a + b <<" ";
	a=0;b=0;
		for(int i=dem1; i>=1; i--)
	{
		if(x[i] == 5)
		{
			a = a * 10 + 6;
		}
		else
		 a= a * 10 + x[i];
	}
		for(int i=dem2; i>=1; i--)
	{
		if(y[i] == 5)
		{
			b = b * 10 + 6;
		}
		else
		 b = b * 10 + y[i];
	}
	cout<<a+b;
	return 0;
}
