#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int  n,k; cin>>n>>k;
	int a[n+1][n+1];
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		   cin>>a[i][j];
	}
	int x[n+1];
	for(int i=1; i<=n; i++)
	     x[i] = i;
	int dem=0;
	vector<string> ans;
	while(1)
	{
		int tong = 0;
		for(int i=1; i<=n; i++ )
		{
			tong += a[i][x[i]];
		}
		if(tong == k)
		{
			string s ="";
			dem++;
			for(int i=1; i<=n; i++)
			    s += to_string(x[i]) + " ";
			ans.push_back(s);
		}
		int i = n-1;
		while(i > 0 && x[i] >= x[i+1])
			i--;
		if(i == 0)
		  break;
		int k =n;
		while(x[k] < x[i])
		   k--;
		swap(x[i], x[k]);
		int l = i+1;
		int r = n;
		while(l < r)
		{
			swap(x[l], x[r]);
			l++;
			r--;
		}
	}
	cout<<dem<<endl;
	for(string s: ans)
	  cout<<s<<endl;
}
