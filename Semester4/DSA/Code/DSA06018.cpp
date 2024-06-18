#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
	int minn= INT_MAX, maxx = INT_MIN;
	set<int> st;
	for(int i=0; i<n; i++)
	{
		int x ; cin>>x;
		if(x > maxx)
		  maxx=x;
		if( x <  minn)
		   minn=x;
		st.insert(x);
	}
	cout<<(maxx - minn + 1) - st.size()<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		xuli(n);
	}
}
