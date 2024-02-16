#include<bits/stdc++.h>
using namespace std;
int n;
vector<string> ans;
set<string> st;
void sinh(int k)
{
	int a[k+1];
	for(int i=1; i<=k; i++)
	   a[i]= i;
	while(1)
	{
		string s = "";
		for(int i=1; i<=k; i++)
		   s += ans[a[i] - 1];
		st.insert(s);
		int i = k;
		while(i > 0 && a[i] >= n - k + i)
		  i--;
		if(i == 0)
		  return;
		a[i]++;
		for(int j=i+1; j<=k; j++) 
		  a[j] = a[i] + j-i;
	}
}
int main()
{
	 cin>>n;
	for(int i=0; i<n; i++)
	{
		string s; cin>>s;
		ans.push_back(s);
	}
	for(int i=1; i<=n; i++)
	  sinh(i);
	for(auto it : st)
	  cout<<it<<endl;
	
}

