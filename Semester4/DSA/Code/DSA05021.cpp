#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n;  cin>>n;
	pair<int, int> pr[n+1];
	for(int i=1; i<=n; i++)
	  cin>>pr[i].first>>pr[i].second;
	sort(pr + 1, pr + n + 1) ;
	int f[n + 1];
	int maxx = 0;
	for(int i=1; i<=n; i++)
	{
		f[i] = 1;
		for(int j=1; j<i; j++)
		{
			if(pr[j].second < pr[i].first &&  f[j] + 1 > f[i])
			{
				f[i] = f[j] + 1;
				
			}
		}
		maxx = max(maxx, f[i]);
	}
	cout<<maxx<<endl;
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
