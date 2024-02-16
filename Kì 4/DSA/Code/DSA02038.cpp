#include<bits/stdc++.h>
using namespace std;
int a[100], c[100], n , k;
void in()
{
	for(int i=1; i<=k; i++)
	  cout<<a[c[i]]<<" ";
	cout<<endl;
}
void sinh(int i)
{
	for(int j = c[i-1] + 1; j<= n - k + i; j++)
	{
		c[i] = j;
		if(i == k)
		  in();
		else
		   sinh(i+1);
	}
}
void ct()
{
	cin>>n>>k;
	for(int i=1; i<=n; i++)
	  cin>>a[i];
	sort(a + 1, a + n + 1);
	sinh(1);
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
