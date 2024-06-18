#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t,n,i,a[100000];
	cin>>t;
	while( t--)
	{
		cin>>n;
		int min=INT_MAX;
		int max=INT_MIN;
		for(i=0; i<n; i++)
		{
			cin>>a[i];	
			if( a[i] < min)
			  min=a[i];
			if(a[i] > max)
			  max=a[i];
		}
		if( min == max)
		{
			cout<<"-1"<<endl;
		}
		else
		{
		
		  int min2=INT_MAX;
		  for(i=0; i<n; i++)
		  {
			if( a[i] < min2 && a[i] > min)
			  min2=a[i];
		  }
		  cout<<min <<" "<<min2<<endl;
	}
	}
}
