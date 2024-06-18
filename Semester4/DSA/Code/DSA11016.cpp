#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n;cin>>n;
	 set<int> st;
	for(int i=0; i<n; i++)
	{
		int x,y;
		char ch;
		cin>>x>>y>>ch;
		st.insert(x);
		st.insert(y);
	}
	for(int x : st)
	  cout<<x<<" ";
	cout<<endl; 
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
