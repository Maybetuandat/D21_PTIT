#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n; cin>>n;
	int a[n];
	for(int &x : a)
	   cin>>x;
	stack<int> st;
	int i=0;
	int ans = 0;
	while(i < n)
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
			if(n >= a[k])
			  ans = max(ans, a[k]);
		}
		else
		{
			int canh = n-st.top()  - 1;
			if(canh >= a[k])
			  ans = max(ans, a[k]);
		}
	}
	cout<<ans<<endl;
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
