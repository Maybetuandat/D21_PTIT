#include<bits/stdc++.h>
using namespace std;
int a[100], c[100], n,x, ok, minn =INT_MAX;
void in(int i)
{
	if(i < minn)
	  minn=i;
}
void ql(int i, int s)
{
	for(int j=1; j<=n; j++)
	{
		if(a[j] >= c[i-1] && s + a[j] <= x)
		{
			c[i] = a[j];
			s = s + a[j];
			if(s == x)
			{
				ok=1;
				in(i);
			}
			else
			  ql(i+1, s);
			
			
			s=s - a[j];
			
		}
	}
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		cin>>n>>x;
		ok=0;
		for(int i=1; i<=n; i++)
		  cin>>a[i];
		for(int j=0; j<=n; j++)
		  c[j] = 0;
		  
		 ql(1, 0);	
		 if(ok == 0)
		   cout<<"-1\n";
		else
		 cout<<minn<<endl;
	}
}
