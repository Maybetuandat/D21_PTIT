#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n,m; cin>>n>>m;
	int a[n+1];
	for(int i=1; i<=n; i++)
	  a[i] = i;
	int dem = 0;
	while(1)
	{
		dem++;
		if(dem % m == 0)
		{
			for(int i=1; i<=n; i++)
			  cout<<a[i]<<" ";
			cout<<endl;
		}
		int i = n-1;
		while(i > 0 && a[i] > a[i+1])
		  i--;
		if(i == 0)
		  return;
		int k = n;
		while(a[k] < a[i])
		  k--;
		swap(a[i], a[k]);
		int l = i+1;
		int r = n;
		while(l < r)
		{
			swap(a[l], a[r]);
			l++;
			r--;
		}
	}
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 1; 
	while(t--)
	{
		ct();
	}
}
