#include<bits/stdc++.h>
using namespace std;
void xuli(long long  n)
{
	vector<long long > ans(n+2);
	long long  i,j;
	long long max=INT_MIN;
	for(i=0; i<n; i++)
	   cin>>ans[i];
	for(i=0; i<n; i++)
	{
		long long res=ans[i];
		if(res > max)
		  max=res;
		for(j=i+1; j<n; j++)
		{
		
		   res*=ans[j];
		   if(res > max)
		     max=res;
	    }
	}
	cout<<max<<endl;
}
void ct()
{
	int t; cin>>t;
	while(t--)
	{
		long long  n; cin>>n;
		xuli(n);
	}
}
int main ()
{
	ct();
}
