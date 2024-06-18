#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
	int a[n + 1];
	for(int i=1; i<=n; i++)
	   a[i]=i;
	vector<string> ans;
	while(1)
	{
		string s = "";
		for(int i=1; i<=n; i++)
		  {
		  	s = s + to_string(a[i]) ;
		  }
		ans.push_back(s);
		int i = n-1;
		while(i > 0 && a[i] > a[i+1])
		   i--;
		if(i == 0)
		     break;
		int k =n;
		while(a[k] < a[i])
		   k--;
		swap(a[i], a[k]);
		int l = i+1;
		int r = n;
		while(l < r)
		{
			swap(a[l], a[r]);
			l++;
			r--;
		}
	}
	for(int i= ans.size()-1; i>0; i--)
	  cout<<ans[i]<<",";
	cout<<ans[0]<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
			int n; cin>>n;
			xuli(n);
	}
	
}
