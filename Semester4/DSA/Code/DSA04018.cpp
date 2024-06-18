#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n; cin>>n;
	int dem = 0;
	for(int i=0; i<n; i++)
	{
		int x; cin>>x;
		if(x == 0)
		  dem++;
	}
	cout<<dem<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
