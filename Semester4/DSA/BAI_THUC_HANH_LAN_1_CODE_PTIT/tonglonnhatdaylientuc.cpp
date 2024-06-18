#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
	int n,k; cin>>n;
	int a[n];
	for(int &x : a)
	  cin>>x;
	int l[1000001], r[1000001];
	stack<int> st1, st2;
	for(int i=0; i<n; i++)
	{
		while(!st1.empty() && a[st1.top()] <= a[i])
		  st1.pop();
		if(!st1.empty())
		   l[i] = st1.top();
		else
		  l[i] = -1;
		st1.push(i);
	}
	for(int i = n-1; i>= 0; i--)
	{
		while(!st2.empty() && a[st2.top()] < a[i])
		  st2.pop();
		
		if(!st2.empty())
		{
			r[i] = st2.top();
			
		}
		else
		   r[i] = n;
		st2.push(i);
	}
	ll ans = 0;
	for(int i=0; i<n; i++)
	{
		ans +=(long long ) (i - l[i]) * (r[i] - i) * a[i];
	}
	cout<<ans<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
