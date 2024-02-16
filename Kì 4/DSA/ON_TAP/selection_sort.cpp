#include<bits/stdc++.h>
using namespace std;
int main()
{
	//thuat toan sap xep chon
	int n; cin>>n;
	int a[n];
	for(int &x : a)
	   cin>>x;
	for(int i=0; i< n-1; i++)
	{
		int index = i;
		for(int j= i +1; j<n; j++)
		   if(a[j] < a[index])
		     index = j;
		swap(a[i], a[index]);
	}
	for(int x : a)
	   cout<<x<<" ";
	cout<<endl;
}
