#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n; cin>>n;
	int a[n];
	for(int &x : a)
	   cin>>x;
	int tong =0, maxx = INT_MIN;
	for(int i=0; i<n-1; i++)
	{
		tong =a[i];
		for(int j= i + 1; j<n; j++)
		 {
		 tong = tong + a[j];
		 	if(tong > maxx)
		 	   maxx = tong;
		   }  
	}
	cout<<maxx<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
