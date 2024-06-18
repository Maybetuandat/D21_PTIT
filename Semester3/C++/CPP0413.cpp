#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int j,t,n,i,a[100000];
	cin>>t;
	while(t--)
	{
		cin >>n;
		for( i=0; i<n; i++)
		   cin>>a[i];
		sort(a,a+n);
		i=0;
		 j=n-1;
		while( i <= j)
		{
			
			if( i== j)
			{
				cout<<a[i]<<" ";
			}
			else
			{
				cout<<a[j] <<" "<<a[i] <<" ";
			}
			i++;
			j--;
		}
		cout<<"\n";
	}
}