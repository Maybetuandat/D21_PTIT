#include<bits/stdc++.h>
using namespace std;
void casetest()
{
	int n; cin>>n;
	pair<int, int> pr[n+1];
	for(int i=1; i<=n; i++)
	   cin>>pr[i].first;
	for(int i=1; i<=n; i++)
	   cin>>pr[i].second;
	sort(pr + 1, pr + n + 1);
	int l[n+1], maxx=INT_MIN;
	for(int i=1; i<=n; i++)
	{
		l[i]=1;
		for(int j=1; j<i; j++)
		{
			if(l[j] + 1 > l[i] && pr[j].second <= pr[i].first )
			   l[i] = l[j] + 1;
		}
		if(l[i] > maxx)
		  maxx=l[i];
	}
	cout<<maxx<<endl;
}
int main ()
{
	 ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		casetest();
	}
}
