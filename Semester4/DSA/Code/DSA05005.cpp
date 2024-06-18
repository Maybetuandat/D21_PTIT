#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n; cin>>n;
	int a[n];
	int f[n];
	int maxx = INT_MIN;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		f[i] =1;
		for(int j=0; j<i; j++)
		   if(a[j] <= a[i])
		   {
		   	f[i] = max(f[i], f[j] + 1);
		   }
		if(f[i] > maxx)
		  maxx = f[i];
	}
	cout<<n - maxx<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
