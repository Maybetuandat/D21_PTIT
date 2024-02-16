#include<bits/stdc++.h>
using namespace std;
int n,x, a[100];
bool kt ;
void sinh()
{
	int a[n+1];
	for(int i=1; i<=n; i++)
	   a[i] = 0;
	while(1)
	{
		long long ans=0;
		for(int j=1; j<=n; j++)
		{
			if(a[j] == 0)
		  	 	ans = ans * 10 + 0;
			else
		      	ans= ans * 10 + 9; 
	  	}
		if(ans % x == 0 && ans != 0)
		{
			kt=true;
			cout<<ans<<endl;
			return;
		}
		int i = n;
		while(a[i] && i >0)
		{
			a[i] = 0;
			i--;
		}
		if(i == 0)
		  return;
		a[i]= a[i] + 1;
	}
	
}
void xuli()
{
	cin>>x;
	if(9 % x == 0)
	{
		cout<<"9"<<endl;
		return;
	}
	n=2;
	while(1)
	{
	
		sinh();
		if(kt )
		   return;
		 n++;
	}
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		kt = false;
		xuli();
	}
}
