#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n; cin>>n;
	vector<int> a;
	for(int i=0; i<n; i++)
	{
		int x; cin>>x;
		if(x != 0)
		   a.push_back(x);
	}
	sort(a.begin(), a.end());
	int tich1 = a[0] * a[1];
	int tich2 = tich1 * a[n-1];
	int tich3 = a[n-1] * a[n-2];
	int tich4 = tich3 * a[n-3];
	int maxx = tich1;
	if(maxx < tich2)
	  maxx = tich2;
	if(maxx < tich3)
	  maxx = tich3;
	if(maxx < tich4)
	  maxx = tich4;
	cout<<maxx;
}
