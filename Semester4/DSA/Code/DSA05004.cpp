#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n; cin>>n;
	int a[n+1];
	for(int i=1; i<=n; i++)
	  cin>>a[i];
	 int f[n+1];
	 int maxx = INT_MIN;
	 for(int i=1; i<=n; i++)
	 {
		f[i] = 1;
		for(int j=1; j<i; j++)
		{
			if(a[j] < a[i] && f[i] < f[j] + 1)
			   f[i] = f[j] + 1;
		} 	
		if(f[i] > maxx)
		  maxx = f[i];
	}	
	cout<<maxx;
}
