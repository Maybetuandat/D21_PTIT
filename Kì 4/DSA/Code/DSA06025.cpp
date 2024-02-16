#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n; cin>>n;
	int a[n];
	for(int &x : a)
	   cin>>x;
	cout<<"Buoc 0: "<<a[0]<<endl;
	for(int i=1; i<n; i++)
	{
		int index = a[i];
		cout<<"Buoc "<<i<<": ";
		int j = i-1;
		while(j >= 0 && a[j] >= index)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j + 1]= index;
		for(int k=0; k<=i; k++)
		  cout<<a[k]<<" ";
		cout<<endl;
	}
}
