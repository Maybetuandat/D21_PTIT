#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n; cin>>n;
	int a[n];
	for(int &x : a)
	   cin>>x;
	vector<string> ans(n);
	ans[0]="Buoc 0: " + to_string(a[0]);
	for(int i=1; i<n; i++)
	{
		int index = a[i];
		ans[i]="Buoc "+ to_string(i) + ": ";
		int j = i-1;
		while(j >= 0 && a[j] >= index)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j + 1]= index;
		for(int k=0; k<=i; k++)
		  ans[i] = ans[i] + to_string(a[k]) + " ";
	}
	for(int i= n-1; i>=0; i--)
	  cout<<ans[i]<<endl;
}

