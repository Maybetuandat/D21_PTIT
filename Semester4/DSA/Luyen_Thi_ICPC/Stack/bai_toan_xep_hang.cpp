#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n; cin>>n;
	int a[n+1];
	for(int i=1; i<=n; i++)
	   cin>>a[i];
	stack<int> st;
	int minn = INT_MAX;
	for(int i=1; i<=n; i++)
	{
		while(!st.empty() && a[st.top()] <= a[i])
		  st.pop();
		int ans = -1;
		if(!st.empty())
		  ans= st.top();
		if(ans != -1)
		  minn = min(minn, abs(i - ans));
		st.push(i);
	}
	if(minn != INT_MAX)
	cout<<minn<<endl;
	else
	  cout<<"-1\n";
	
}
