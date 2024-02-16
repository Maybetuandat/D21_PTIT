#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n; cin>>n;
	int a[n];
	for(int &x : a)
	  cin>>x;
	vector<string> ans(n);
	for(int i=0; i< n-1; i++)
	{
		int index = i;
		for(int j=i+1; j<n; j++)
			if(a[j] < a[index])
			  index=j;
		swap(a[i], a[index]);
		ans[i] = ans[i] +  "Buoc " +to_string(i+1) + ": ";
		for(int x : a)
		  ans[i] = ans[i] + to_string(x) + " ";
	}
	for(int i=n-2; i>=0; i--)
	  cout<<ans[i]<<endl;
}
