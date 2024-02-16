#include<bits/stdc++.h>
using namespace std;
void xuli(int n, int m)
{
	int a[n], b[m];
	for(int i=0; i<n; i++)
	   cin>>a[i];
	for(int i=0; i<m; i++)
	  cin>>b[i];
	sort(a, a + n);
	sort(b, b + m);
	int i=0,j=0;
	vector<int> ans;
	while(i < n &&  j < m)
	{
		if(a[i] < b[j])
		{
			ans.push_back(a[i]);
			i++;
		}
		else
		{
			ans.push_back(b[j]);
			j++;
		}
	}
	if(i < n)
	{
		for(int k =i; k <n; k++)
		   ans.push_back(a[k]);
	}
	if(j < m)
	{
		for(int k =j; k < m; k++)
		  ans.push_back(b[k]);
	}
	for(int x : ans)
	  cout<<x<<" ";
	cout<<endl;
}
int main ()
{

	int t; cin>>t;
	while(t--)
	{
		int n,m; cin>>n>>m;
		xuli(n,m);
	}	
}
