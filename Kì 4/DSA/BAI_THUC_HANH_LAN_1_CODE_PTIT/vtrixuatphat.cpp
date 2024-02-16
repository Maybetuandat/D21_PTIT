#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&pos, int m, int mid) 
{
	int cnt = 1;
	int cur = pos[0];
	for(int i=1; i<pos.size(); i++) 
	{
		if(pos[i] - cur >= mid)
		{
			cnt ++;
			cur = pos[i];
		}
		if(cnt == m) return true;
	}
	return false;
}

int main() 
{
	int n, m;
	cin >> n >> m;
	vector<int> pos(n);
	for(int i=0; i<n; i++) 
		cin >> pos[i];
	sort(pos.begin(), pos.end());
	int l = 1;
	int r = pos[n-1] - pos[0];
	int ans = 0;
	while(l <= r) 
	{
		int mid = l + (r-l) / 2;
		cout<<mid<<endl;
		if(check(pos, m , mid)) 
		{
			ans = mid;
			l = mid+1;
		}
		else r = mid - 1;
	}
	
	cout << ans << endl;
}
