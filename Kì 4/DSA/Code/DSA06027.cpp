#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t; cin>>t;
	while(t--)
	{
	
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	  cin>>a[i];
	vector<string> ans(n);
	for(int i=0; i<n-1; i++)
	{
		for(int j= i +1; j<n; j++)
		  if(a[j] < a[i])
		    swap(a[i], a[j]);
		ans[i]= "Buoc " + to_string(i+1) + ": ";
		for(int x : a)
			ans[i]= ans[i] + to_string(x) + " ";
	}
	for(int i=n-2; i>=0; i--)
	  cout<<ans[i]<<endl;
   }
}

