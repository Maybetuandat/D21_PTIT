#include<bits/stdc++.h>
using namespace std;
int ans,n,m;
int a[1000][1000];
void solve(int k)
{
	vector<int> v(m);
	for(int i=0; i<m; i++)
	   v[i] = a[k][i];
	stack<int> st;
	int i=0,size = v.size(); 
	while(i < v.size())
	{
		if(st.empty() || v[st.top()] <= v[i])
		{
		
			st.push(i);
			i++;
			
		}   
		   
		else
		{
			int t = st.top(); st.pop();
			if(st.empty())
			{
				ans = max(ans, v[t] * i );
			}
			else
			{
				ans = max(ans, v[t] * (i - st.top() - 1));
			}
		}
	}
	while(!st.empty())
	{
			int t = st.top(); st.pop();
			if(st.empty())
			{
				ans = max(ans, v[t] * size );
			}
			else
			{
				ans = max(ans, v[t] * (size - st.top() - 1));
			}
	}
}
void ct()
{
	 cin>>n>>m;
	 ans = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
		
			cin>>a[i][j];
			if(a[i][j] == 1 && i > 0 && a[i-1][j] > 0)
			   a[i][j] = a[i-1][j] + 1;
		}  
	}
	for(int i=0; i<n; i++)
	  solve(i);
	cout<<ans<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
