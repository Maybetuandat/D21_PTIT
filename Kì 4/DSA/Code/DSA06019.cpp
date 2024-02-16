#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
	if(a.first > b.first)
	   return true;
	if(a.first == b.first)
	{
		if(a.second < b.second)
		  return true;
		else
		   return false;
	}
	return false;
	
}
void xuli(int n)
{
	map<int, int> mp;
	for(int i=0; i<n; i++)
	{
		int x; cin>>x;
		mp[x]++;
	}
	pair<int, int> pr[n];
	int dem=0;
	for(auto it : mp)
	{
		pr[dem].first = it.second;
		pr[dem].second = it.first;
		dem++;
	}
	sort(pr, pr + dem , cmp);
	for(int i=0; i<dem; i++)
	{
		for(int j=0; j<pr[i].first; j++)
		  cout<<pr[i].second<<" ";
		
	}
	cout<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		xuli(n);
	}
}
