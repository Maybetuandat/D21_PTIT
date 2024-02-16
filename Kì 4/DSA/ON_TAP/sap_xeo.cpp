#include<bits/stdc++.h>
using namespace std;
void ct()
{
	multiset<int> mst;
	int n; cin>>n;
	for(int i=0; i<n; i++)
	{
		int x; cin>>x;
		mst.insert(x);
	}
	for(int x : mst)
	  cout<<x<<" ";
	cout<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
