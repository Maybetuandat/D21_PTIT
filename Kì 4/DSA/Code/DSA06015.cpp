#include<bits/stdc++.h>
using namespace std;
#define Nmax  1000009
void merger(int a[], int l, int m, int r)
{
	vector<int> x(a + l, a + m + 1);
	vector<int> y (a + m + 1, a + r + 1);
	int i=0, j=0;
	while( i < x.size() && j < y.size())
	{
		if(x[i] <= y[j])
		{
			a[l] = x[i];
			l++; i++;
		}
		else
		{
			a[l]= y[j]; l++; j++;
		}
	}
	while(i < x.size())
	{
		a[l]= x[i];
		l++; i++;
	}
	while(j < y.size())
	{
		a[l]= y[j];
		 l++; j++;
	}
}
void mergersort(int a[], int l, int r)
{
	if(l >= r)
	  return;
	int mid = (l + r) / 2;
	mergersort(a, l, mid );
	mergersort(a, mid + 1, r);
	merger(a, l, mid, r );
}
void xuli(int n)
{
	int a[n];
	for(int i=0; i<n; i++)
	   cin>>a[i];
	mergersort(a, 0, n - 1);
	for(int x : a)
	  cout<<x<<" ";
	cout<<endl;
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
