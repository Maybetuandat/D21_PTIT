#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
	int k; cin>>k;
	int vt;
	for(int i=0; i<n; i++)
	{
		int x; cin>>x;
		if(x == k)
			vt=i + 1;
	}
	cout<<vt<<endl;
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
