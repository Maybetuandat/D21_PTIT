//#include<bits/stdc++.h>
//using namespace std;
//void xuli(int m, int n)
//{
//	int first[m], second[n];
//	for(int i=0; i<m; i++)
//	   cin>>first[i];
//	for(int i=0; i<n; i++)
//	  cin>>second[i];
//	vector<int> ans(m + n);
//	auto it = set_union(first, first + m, second, second + n, ans.begin());
//	ans.resize(it - ans.begin());
//	for(int x : ans )
//	  cout<<x<<" ";
//	cout<<endl;
//	vector<int> res( m + n);
//	 it = set_intersection(first, first + m, second , second + n, res.begin());
//	res.resize(it - res.begin());
//	for(int x : res)
//	  cout<<x<<" ";
//	cout<<endl;
//}
//int main ()
//{
//	int t; cin>>t;
//	while(t--)
//	{
//		int m,n;   cin>>m>>n;
//		xuli(m,n);	
//	} 
//}
#include<bits/stdc++.h>
using namespace std;
void xuli(int n, int m)
{
	map<int, int> mp;
	for(int i=0; i<n; i++)
	{
		int x; cin>>x;
		mp[x]++;
	}
	for(int i=0; i<m; i++)
	{
		int x; cin>>x;
		mp[x]++;
	}
	for(auto it : mp)
		cout<<it.first<<" ";
	cout<<endl;
	for(auto it : mp)
	{
		if(it.second > 1)
		  cout<<it.first<<" ";
	}
	cout<<endl;
	
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		int n,m; cin>>n>>m;
		xuli(n,m);
	}
}
