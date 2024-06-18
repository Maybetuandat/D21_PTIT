#include<bits/stdc++.h>
using namespace std;
int gra[600][600];
int  solve(int t, int m)
{
	vector<int> a(gra[t], gra[t] + m);
	stack<int> st;
	int i=0;
	int ans = 0;
	while(i < m)
	{
		if(st.empty() ||  a[st.top()] <= a[i])
		{
			st.push(i);
			i++;
		}
			
		else
		{
			int k  = st.top(); st.pop();
			if(st.empty())
			{
				if(i >= a[k])
				  ans = max(ans, a[k]);
			}
			else
			{
				int canh = i - st.top() - 1;
				if(canh >= a[k])
				  ans = max(ans, a[k]);	
			}
		}
	}
	while(!st.empty())
	{
		int k = st.top(); st.pop();
		if(st.empty())
		{
			if(m >= a[k])
			  ans = max(ans, a[k]);
		}
		else
		{
			int canh = m-st.top()  - 1;
			if(canh >= a[k])
			  ans = max(ans, a[k]);
		}
	}
	return ans;
}
void ct()
{
	int n,m; cin>>n>>m;
	for(int i=0; i<n; i++)
	  for(int j=0; j<m; j++)
	  {
		cin>>gra[i][j];
		if(i != 0 && gra[i][j] == 1 && gra[i-1][j] != 0 )
		    gra[i][j] = gra[i-1][j] + 1;
	  }
	int maxx = 0;
	for(int i=0; i<n; i++)
	{
		maxx = max(maxx, solve(i,m));
	} 	
	
	cout<<maxx<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}