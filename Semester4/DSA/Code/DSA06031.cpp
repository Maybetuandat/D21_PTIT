#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
	int k; cin>>k;
	int a[n];
	for(int i=0; i<n; i++)
	  cin>>a[i];
	multiset<int> st;
	for(int i=0; i<k; i++)
		st.insert(a[i]);
	cout<<*st.rbegin()<<" ";
	for(int i=1; i<= n - k; i++)
	{
		
		st.erase(st.find(a[i-1]));
		st.insert(a[i+k-1]);
		cout<<*st.rbegin()<<" ";
	}
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

