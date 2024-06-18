#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
	int a[n][n];
	for(int i=0; i<n; i++)
	  cin>>a[0][i];
	for(int i=1; i<n; i++)
	{
		for(int j=0; j< n - i; j++)
			a[i][j]=a[i-1][j] + a[i-1][j+1];
		
	}
	vector<string> ans(n);
	for(int i=0; i<n; i ++)
	{
		ans[i] = ans[i] + '[';
		for(int j=0; j< n  -i - 1; j++)
		{
			string tmp = to_string(a[i][j]);
			ans[i]= ans[i] + tmp + ' ';
		}  
		string tmp = to_string(a[i][n-i-1]);
		ans[i]= ans[i] + tmp + ']';
	}
	for(auto it = ans.end() - 1; it >= ans.begin(); it--)
	   cout<<*it<<" ";
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		xuli(n);
		cout<<endl;
	}
}
