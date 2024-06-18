#include<bits/stdc++.h>
using namespace std;
void xuli(int n, int k)
{
	int a[k+1];
	set<int> st;
	for(int i=1; i<=k; i++)
	{
		cin>>a[i];
		st.insert(a[i]);
	}
	
		int i=k;
		while(i > 0 && a[i] >= n - k + i)
		   i--;
		if(i == 0)
		{
			cout<<k<<endl;
			return;
		}
		a[i] = a[i] + 1;
		for(int j=i+1; j<=k; j++)
		  a[j] = a[i]  + j - i;
		set<int>st2;
		for(int j=1; j<=k; j++)
		   st2.insert(a[j]);
		int dem=0;
		for(int x : st)
		{
			if(st2.count(x) == 0)
			   dem++;
		}
		cout<<dem<<endl;
	
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		int n,k; cin>>n>>k;
		xuli(n,k);
	}
}
