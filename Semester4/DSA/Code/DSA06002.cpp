#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
	return a.first < b.first;
}
void xuli(int n, int k)
{
	pair<int , int > pr[n];
	for(int i=0; i<n; i++)
	{
		int x;	cin>>x;
		pr[i].second = x;
		pr[i].first= abs (k - x);
	}
	stable_sort(pr, pr + n, cmp);
	for(auto it : pr)
		cout<<it.second<<" ";
	cout<<endl;
}
int main ()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int  t; cin>>t;
	
	while(t--)
	{
		int n, k;  cin>>n>>k;
		xuli(n,k);
	}
}
