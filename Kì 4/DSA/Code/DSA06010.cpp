#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
	set<int> st;
	while(n --)
	{
		int x; cin>>x;
		int k = x;
		while(k != 0)
		{
			st.insert(k % 10);
			k /= 10;
		}
	}
	for(int x : st)
	  cout<<x<<" ";
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
