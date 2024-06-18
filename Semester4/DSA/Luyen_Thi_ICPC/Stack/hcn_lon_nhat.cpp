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
	ll i=0;
	ll res = INT_MIN;
	while(i < n)
	{
			if(st.empty() || a[st.top()] <= a[i])
			{
				st.push(i);
				i++;
			 } 
			 else
			 {
			 	ll index = st.top(); st.pop();
			 	if(st.empty())
			 	
			 	  res = max(res, i * a[index]);
			 	else
			 	{
			 		
			 		res = max(res, a[index] * (i - st.top() - 1));
				 }
			 }
	}
	while(!st.empty())
	{
		ll index = st.top(); st.pop();
		if(!st.empty())
		{
			res = max(res, a[index] * (n - st.top() - 1));
		}
		else
		{
			res = max(res, a[index] * (n));
		}
	}
	cout<<res<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
