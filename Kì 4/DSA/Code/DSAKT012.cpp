#include<bits/stdc++.h>
using namespace std;
int n,k,s, a[100], c[100];
void in()
{
	int tong  = 0;
	for(int i=1; i<=k; i++)
	{
		tong += a[c[i]];
	}
	if(tong == s)
	{
		cout<<k;
		exit(0);
	}
}
void trial(int i)
{
	for(int j = c[i-1] + 1; j<= n - k + i; j++)
	{
		c[i] = j;
		if(i == k)
		   in();
		else
			trial(i + 1);
	}
}
bool cmp(int a, int b)
{
	return a > b;
}
int main ()
{
	cin>>n>>s;
	for(int i=1; i<=n; i++)
	   cin>>a[i];
	sort(a + 1, a + n + 1, cmp);
	for(k = 1; k<=n; k++)
	  trial(1);
	cout<<"-1";
}
