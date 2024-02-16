#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n; cin>>n;
	set<string> st;
	for(int i=0; i<n; i++)
	{
		string s; cin>>s;
		st.insert(s);
	}
	string res; cin>>res;
	st.erase(res);
	vector<string> ans;
	for(string x : st)
	  ans.push_back(x);
	n = ans.size();
	int a[n+1];
	for(int i=1; i<=n; i++)
	   a[i] = i;
	while(1)
	{
		cout<<res<<" ";
		for(int i=1; i<=n; i++)
		  cout<<ans[a[i] - 1]<<" ";
		cout<<endl;
		int i = n-1;
		while(i > 0 && a[i] > a[i+1])
		  i--;
		if(i == 0)
		  return 0;
		int k = n;
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
//	for(auto it : ans)
//	  cout<<it<<endl;
}
