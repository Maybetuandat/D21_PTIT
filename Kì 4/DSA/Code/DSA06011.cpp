#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
	int a[n];
	for(int &x : a)
	  cin>>x;
	int res = INT_MAX, ans;
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			int sum = a[i] + a[j];
			if(abs(sum) <= res)
			{
			   res =abs(sum);
			   ans = sum;
	 	    }
		}
	}
	cout<<ans<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		xuli(n);
	}
}
