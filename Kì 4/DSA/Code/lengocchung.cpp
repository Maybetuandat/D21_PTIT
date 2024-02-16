#include<bits/stdc++.h>
using namespace std;
int main ()
{
	freopen("matran.txt","r", stdin);
//	freopen("matran1.txt", "w", stdout);
	int n; cin>>n;
	int a[n][n];
	for(int i=0; i<n; i++)
	  for(int j=0; j<n; j++)
	    cin>>a[i][j];
	// cau a
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		  cout<<a[i][j]<<" ";
		cout<<endl;
	}
	
	
	// cau b 
	vector<int> ans;
	
	for(int i =0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		  ans.push_back(a[i][j]);
	}
	sort(ans.begin(), ans.end(), greater<int>());
	int k =0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			a[i][j] = ans[k];
			k++;
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		  cout<<a[i][j]<<" ";
		cout<<endl;
	}
	
	
	
	/// cauc
	freopen("matran1.txt", "w", stdout);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		  cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
