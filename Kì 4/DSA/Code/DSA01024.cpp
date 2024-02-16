#include<bits/stdc++.h>
using namespace std;
void xuli(int n, int k, vector<string> ans)
{
	int a[k+3];
	for(int i=1; i<=k; i++)
		a[i]=i;
	while(1)
	{
		for(int i=1; i<=k; i++)
		  cout<<ans[a[i] - 1]<<" ";
		cout<<endl;	
		int i = k;
		while(a[i] >= n - k + i && i > 0)
			i--;
		if(i  == 0)
		  return;
		a[i]+=1;
		for(int j=i+1; j<=k; j++)
		  a[j]= a[i] + j - i;
	}
}
int main ()
{
	int n,k; cin>>n>>k;
	set<string> st;
	for(int i=0; i<n; i++)
	{
		string s; cin>>s;
		st.insert(s);
	}
	vector<string> ans;
	for(string s : st)
	   ans.push_back(s);
	xuli(ans.size(), k, ans);
	
}
