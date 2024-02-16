#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
	if(a.second < b.second)
	  return true;
	if(a.second == b.second)
	{
		if(a.first < b.first)
		   return true;
		else
		  return false;
	}
	return false;
}
void ct()
{
	int n; cin>>n;
	pair<int, int> pr[n];
	for(int i=0; i<n; i++)
	   cin>>pr[i].first >>pr[i].second;
	sort(pr, pr + n, cmp);
	int dem = 0;
	vector<pair<int, int>> ans;
	for(int i =0; i< n; i++)
	{
		if( ans.size() == 0 ||  ans.back().second <= pr[i].first)
		 {
		 	  dem++;
			   ans.push_back(pr[i]);	
		 }
		 
	}
	cout<<dem<<endl;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
