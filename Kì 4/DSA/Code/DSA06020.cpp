#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
	int k; cin>>k;
	bool kt=false;
	for(int i=0; i<n; i++)
	{
		int x; cin>>x;
		if(x == k)
			kt=true;
		
	}
	if(kt )
	  cout<<"1\n";
	else
	  cout<<"-1\n";
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
