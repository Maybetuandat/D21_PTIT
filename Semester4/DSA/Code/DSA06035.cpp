#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n; cin>>n;
	int a[n + 1];
	for(int i=1; i<=n; i++)
	   cin>>a[i];
	int incre[n+1] = {0}, decre[n+1] = {0};
	incre[1] = 1;
	for(int i=2; i<=n; i++)
	{
		if(a[i] >= a[i-1])
		{
			incre[i] = incre[i-1] + 1;
		}
		else
		   incre[i] = 1;
	}

	decre[n] = 1;
	for(int i=n - 1; i>=1; i--)
	{
		if(a[i] >= a[i  + 1] )
			decre[i] = decre[i + 1] + 1;
		
		else
		   decre[i] = 1;
	}
	int maxx = INT_MIN;
	for(int i=1; i<=n ; i++)
	  maxx = max(maxx, decre[i] + incre[i] - 1);
	cout<<maxx<<endl;
//	for(int i=1; i<=n; i++)
//	  cout<<incre[i] <<" "<<decre[i]<<" "<<a[i] <<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}	
}
