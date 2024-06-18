#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
	ll n; cin>>n;
	ll a[n];
	for(ll &x : a)
	  cin>>x;
	stack<ll> st;
	ll res = 0;
	ll i=0; 
	while(i < n)
	{
		if(st.empty() || a[st.top()] <= a[i])
		{
		
			st.push(i);
			i++;
			
		}   
		   
		else
		{
			ll k = st.top(); st.pop();
			if(st.empty())
			{
				res = max(res, a[k] * i );
			}
			else
			{
				res = max(res, a[k] * (i - st.top() - 1));
			}
		}
	}
	while(!st.empty())
	{
			ll k = st.top(); st.pop();
			if(st.empty())
			{
				res = max(res, a[k] * n );
			}
			else
			{
				res = max(res, a[k] * (n - st.top() - 1));
			}
	}
	cout<<res<<endl;
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
