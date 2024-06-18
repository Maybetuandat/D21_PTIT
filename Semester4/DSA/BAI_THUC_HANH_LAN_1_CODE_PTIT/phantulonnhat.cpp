#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n,k; cin>>n>>k;
	int a[n];
	for(int &x : a)
	  cin>>x;
	multiset<int> mst;
	for(int i=0; i<k; i++)
	  mst.insert(a[i]);
	cout<<*mst.rbegin()<<" ";
	for(int i=1; i<n-k+1; i++)
	{
		mst.erase(mst.find(a[i-1]));
		mst.insert(a[i + k -1]);
		cout<<*mst.rbegin()<<" ";
	}
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
