#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n; cin>>n;
	int a[n], b[n];
	set<int> st;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		b[i] = a[i];
		st.insert(a[i]);
	}
	if(st.size() != n)
	{
		cout<<"0\n";
		return;
	}
	
	sort(a, a + n);
	for(int i=0; i<n; i++)
	{
		if(a[i] != b[i])
		{
			cout<<"0\n";
			return;
		}
	}
	cout<<"1\n";
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
