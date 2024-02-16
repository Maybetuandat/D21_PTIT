#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n; cin>>n;
	int a[n+3], b[n+3]={0};
	for(int i=0; i<n; i++)
		cin>>a[i];
	map<int, int> mp;
	for(int i=0; i<n; i++)
	{
		if(mp[a[i]] == 0)
		{
			cout<<a[i]<<" ";
			mp[a[i]]++;
		}
	}
}
