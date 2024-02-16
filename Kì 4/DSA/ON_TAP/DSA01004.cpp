#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[100];
void in()
{
	for(int i=1; i<=k; i++)
	  cout<<a[i];
	cout<<" ";
}
void sinh(int i)
{
	for(int j = a[i-1] + 1; j<= n - k + i; j++)
	{
		a[i] = j;
		if(i == k)
		  in();
		else
		    sinh(i+1);
	}
}
void ct()
{
	 cin>>n>>k;
	memset(a, 0, sizeof(a));
	sinh(1);
	cout<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
