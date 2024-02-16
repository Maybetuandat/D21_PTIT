#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n; cin>>n;
	pair<int, int> pr[n];
	for(int i=0; i<n; i++)
	{
		cin>>pr[i].first;
		pr[i].second = i;
	}
	sort(pr, pr + n);
//	for(auto it : pr)
//	  cout<<it.first <<"  "<<it.second<<endl;
	int maxx= -1, amin = pr[0].first, vt = pr[0].second;
	for(int i=1; i<n; i++)
	{
		if(pr[i].first > amin)
		{
			if(pr[i].second > vt)
			{
				maxx = max(maxx, pr[i].second - vt);
			}
			else
			{
				amin = pr[i].first;
				vt= pr[i].second;
			}
		}
	}
	cout<<maxx<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
