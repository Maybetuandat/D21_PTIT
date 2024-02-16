#include<bits/stdc++.h>
using namespace std;
int n,w,a[100], c[100], x[100], maxx = INT_MIN, xopt[100];
void in()
{
	int res = 0, ans = 0;
	for(int j=1; j<=n; j++)
	{
		res += x[j] * a[j];
		ans += x[j] * c[j];
	}
	if(res <= w)
	{
		if(ans > maxx)
		{
		
		  maxx=ans;
		  for(int j=1; j<=n; j++)
		     xopt[j]= x[j];
	    }
	}
}
void hv(int i)
{
	for(int j=0; j<=1; j++)
	{
		x[i] = j;
		if(i == n)
		  in();
		else
		   hv(i+1);
	}
}
int main ()
{
	freopen("data.in", "r", stdin);
	cin>>n>>w;
	for(int i=1; i<=n; i++)
		cin>>c[i];
	for(int i=1; i<=n; i++)
		cin>>a[i];
	hv(1);
	cout<<maxx<<endl;
	for(int i=1; i<=n; i++)
	  cout<<xopt[i]<<" ";
}
