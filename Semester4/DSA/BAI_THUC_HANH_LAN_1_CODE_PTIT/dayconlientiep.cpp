#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	int a[n];
	int nmax = INT_MIN;
	for(int &x : a)
	{
		cin>>x;
		if(x > nmax)
		   nmax = x;
		   
	}
	int maxx = 1;
	int i=0;
	while(i < n-1)
	{
		if(a[i] ==  nmax)
		{
			 int j = i+1;
			while(a[j] == nmax && j < n)
			   j++;
			if(j - i > maxx)
			  maxx = j-i;
			i = j;
		}
		else i++;
	}
	cout<<maxx<<endl;
}
