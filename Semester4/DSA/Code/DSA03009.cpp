#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
	if(a.second == b.second)
		return a.first > b.first;
	return a.second > b.second;
}
void ct()
{
	int n; cin>>n;
	pair<int, int> pr[n];
	int maxx = 0;
	for(int i=0; i<n; i++)
	{
		int x; cin>>x;
		cin>>pr[i].first>>pr[i].second;
		maxx = max(maxx, pr[i].first);
	}
	sort(pr, pr + n, cmp);
	vector<bool> check(maxx + 1, 0);
	int time = 0, profit = 0;
	for(int i=0; i<n; i++)
	{
		for(int j = pr[i].first; j>=1; j--)
		{
			if(!check[j])
			{
				check[j] = 1;
				time += 1;
				profit += pr[i].second;
				break;
			}
		}
	}
	cout<<time<<" "<<profit<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
