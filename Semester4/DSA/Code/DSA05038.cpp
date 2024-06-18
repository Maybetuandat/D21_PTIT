#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n; cin>>n;
	pair<int, int> minn;
	pair<int, int> pr[n];
	for(int i=0; i<n; i++)
	  cin>>pr[i].first>>pr[i].second;
//	sort(pr, pr + n);
	for(int i=0; i<n; i++)
	  cout<<pr[i].first<<" "<<pr[i].second<<endl;
	minn.first = 0;
	minn.second = 0;
	int dem = 0;
	for(int i=0; i<n; i++)
	{
		if(pr[i].first > minn.first && pr[i].second > minn.second)
		{
			dem++;
			minn.first = pr[i].first;
			minn.second = pr[i].second;
		}
	}
	cout<<dem<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 1;
	while(t--)
	{
		ct();
	}
}
