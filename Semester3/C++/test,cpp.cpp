#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int,int> b)
{
	return a.first<b.first;
}
int main ()
{
	int n;
	cin>>n;
	vector<pair <int, int>> ss(100);
	for(int i=0; i<n; i++)
	{
		cin>>ss[i].first>>ss[i].second;
	}
	cout<<"-------------------------"<<endl;
	sort(ss.begin(),ss.begin() +n,cmp);
	for(int i=0; i<n; i++)
	   cout<<ss[i].first<<" "<<ss[i].second<<endl;
	cout<<endl;
	return 0;
}