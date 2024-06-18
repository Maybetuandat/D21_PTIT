#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int k; cin>>k;
	string s; cin>>s;
	map<char, int> mp;
	for(char ch : s)
	   mp[ch]++;
	priority_queue <int> pq;
	for(auto it : mp)
	   pq.push(it.second);
	while(k > 0)
	{
		int a = pq.top();
		k--;
		pq.pop();
		a--;
		pq.push(a);	  
	}
	long long ans= 0;
	while(!pq.empty())
	{
		long long a = pq.top();
		ans = ans + a * a;
		pq.pop();
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
