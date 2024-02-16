#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n; cin>>n;
	int a[n];
	for(int &x : a)
	   cin>>x;
	int vt = n + 1, i;
	for( i =0; i<n; i++)
	{
		int x; cin>>x;
		if(x != a[i])
		{
			vt=i+1;
			break;
		}
	}
	for(int j =i + 1; j<n-1; j++)
	{
		int x; cin>>x;
	}
	cout<<vt<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
