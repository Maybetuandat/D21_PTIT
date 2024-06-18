#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n; cin>>n;
	int a[n];
	for(int &x : a)
	   cin>>x;
	bool check;
	for(int i=0 ;i<n; i++)
	{
		check = false;
		for(int j=0; j< n -i -1; j++)
		{
			if(a[j] > a[j + 1])
			{
				check = true;
				swap(a[j + 1], a[j]);
				for(int x : a)
	   cout<<x<<" ";
	cout<<endl;
				//int tg= a[i]; a[i]=a[j]; a[j] = tg;
			}
		}
		if(!check)
		  break;
	}
	for(int x : a)
	   cout<<x<<" ";
	cout<<endl;
}
