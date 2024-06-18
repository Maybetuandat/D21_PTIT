#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int m,n; cin>>m>>n;
	int a[m], b[n];
	for(int &x : a)
	  cin>>x;
	for(int &x : b)
	  cin>>x;
	  
	int kq[m+n-1]={0};
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			kq[i+j] += a[i] * b[j];
		}
	}
	for(int x : kq)
	  cout<<x<<" ";
	cout<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
