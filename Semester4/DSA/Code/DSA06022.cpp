#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
	set<int> st;
	for(int i=0; i<n; i++)
	{
		int x; cin>>x;
		st.insert(x);
	}
	if(st.size() < 2)
	  cout<<"-1\n";
	else
	{
		auto it = st.begin();
		cout<<*it<<" ";
		it++;
		cout<<*it<<endl;
	}
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
