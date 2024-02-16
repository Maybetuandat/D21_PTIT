#include<bits/stdc++.h>
using namespace std;
#define Nmax 1000000007
typedef long long ll;
void ct()
{
	priority_queue<ll,vector<ll>,  greater<ll> > pq;
	int n;  cin>>n;
	for(int i=0; i<n; i++)
	{
		ll x ; cin >>x;
		pq.push(x);
	}
	long long ans = 0;
	while(pq.size() > 1)
	{
		long long tong1 = pq.top();
		pq.pop();
		long long tong2 = pq.top();
		long long tong = (tong1+ tong2) % Nmax;
		pq.pop();
		ans = (ans + tong) % Nmax;
		pq.push((tong1 + tong2) % Nmax);
	}
	cout<<ans<<endl;
}
int main ()
{
	int t = 1; cin>>t;
	while(t--)
	{
		ct();
	}
}
