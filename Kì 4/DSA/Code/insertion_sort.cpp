#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n; cin>>n;
	int a[n];
	for(int & x : a)
	  cin>>x;
	for(int i=1; i<n; i++)
	{
		int index = a[i];
		int j = i-1;
		
		while(index < a[j] && j >= 0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=index;
	}
	for(int x : a)
	  cout<<x<<" ";
	cout<<endl;
}
