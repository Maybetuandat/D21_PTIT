#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n, k;
	cin >> n >> k;
	
	priority_queue <ll, vector<ll>, greater<ll>> q;
	int ans = 0;
	for(int i = 0; i< n; i++)
	{
		int tmp;
		cin >> tmp;	
		q.push(tmp);
		ans += tmp;
	}
	
	ll chiphi = 0;

	while(q.size() > 1)
	{
		ll minn = 0;
		ll maxx = 0;
		ll sum = 0;
		
		if(q.size() >= k)
		{
			
			for(int i = 0; i< k; i++)
			{
				if(i == 0)
					minn = q.top();
				if(i == k-1)
					maxx = q.top();
					
				sum += q.top();
				q.pop();
			}	
		}
		else
		{
			if(q.size() > 0)
			{
				minn = q.top();
				q.pop();
			}
			
			 sum += minn;
			 
			while(q.size() > 1)
			{
				sum += q.top();
				q.pop();
			}
		
			maxx = q.top();
			sum += maxx;
			q.pop();

		}	
		
		chiphi += (maxx - minn);
			q.push(sum);
	}
	
 cout << q.top() << endl;
	
	cout << chiphi << endl;
}
