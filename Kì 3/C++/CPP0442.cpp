#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t,n,k,i,begin,end,mid,a[1000];
	cin>>t;
	while( t--)
	{
		cin>>n>>k;
		for(i=0; i<n; i++)
		  cin>>a[i];
		sort(a,a+n);
		begin=0;
		end=n-1;
		bool kt=false;
		while( begin <=end)
		{
			mid=(begin +end) / 2;
			if( a[mid] == k)
			{
				cout<<"1\n";
				kt=true;
				break;
			}
			else
			 if( a[mid] > k)
		     	{
				end=mid-1;
		    	}
			 else
			  {
				begin=mid+1;
			  }  
		}
		if( kt == false )
		{
			cout<<"-1\n";
		}
	}
}
