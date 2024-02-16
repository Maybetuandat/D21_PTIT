#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
	int k; cin>>k;
	int a[k+1];
	for(int i=1; i<=k; i++)
	  a[i]=i;
	vector<string> ans;
	while(1)
	{
		string s = "";
		for(int i=1; i<=k; i++)
		{
			s = s + to_string(a[i]) + " ";
		}
		ans.push_back(s);
		int i = k;
		while(i > 0 && a[i] >= n - k + i)
		    i--;
		if(i == 0)
		  break;
		a[i]=a[i]+1;
		for(int j=i+1; j<=k; j++)
		  a[j] = a[i] + j - i;
		  
	}
	for(int i= ans.size() - 1; i>=0; i--)
	{
		cout<<ans[i]<<endl;
	}
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		xuli(n);
	}
}
