#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n,m; cin>>n>>m;
	multiset<int> ms;
	long long ans = 0;
	for(int i=0; i<n; i++)
	{
		int x; cin>>x;
		ans += x;
		ms.insert(x);
	}
	long long buoc = 0;
	while(ms.size() >= m)
	{
		int dem = 0;
		long long tong = 0;
		int minn = INT_MAX, maxx = INT_MIN;
		while(dem != m)
		{
			int x = *ms.begin();
			minn = min(minn, x);
			maxx = max(x, maxx);
			ms.erase(ms.find(x));
			tong += x;
			dem++;
		}
		buoc += maxx - minn;
		ms.insert(tong);
	}
	if(ms.size() != 0)
	{
		buoc += *ms.rbegin() - *ms.begin();
	}
	cout<<ans<<endl;
	cout<<buoc<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t= 1;
	while(t--)
	{
		ct();
	}
}
