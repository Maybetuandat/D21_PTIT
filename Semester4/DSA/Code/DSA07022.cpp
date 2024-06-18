#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n; cin>>n;
	int a[n+1];
	map<int, int> mp;
	vector<int> ans;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		mp[a[i]]++;
	}
	for(int i=0; i<n; i++)
	   ans.push_back(mp[a[i]]);
	a[n] = -1;
	stack<int> st;
	vector<int> res;
	for(int i=n-1; i>=0; i--)
	{
		while(!st.empty() && ans[st.top()] <= ans[i])
		  st.pop();
		if(st.empty())
		   res.push_back(n);
		else
		   res.push_back(st.top());
		st.push(i);
	}
	reverse(res.begin(), res.end());
	for(int x : res)
	  cout<<a[x]<<" ";
	cout<<endl;
}
int main ()
{
	
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
