#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
	int a[n];
	for(int &x : a)
	  cin>>x;
	bool check;
	vector<string> ans(n);
	int dem=0;
	for(int i=0; i<n; i++)
	{
		check = false;
		for(int j=0; j< n -i -1; j++)
		{
			if(a[j] > a[j+1])
			{
				check = true;
				swap(a[j+1], a[j]);
			}
		}
		if(check == true)
		{
			ans[dem]="Buoc " + to_string(i+1) + ": ";
			for(int x : a)
			   ans[dem] += to_string(x) + " ";
			dem++;
		}
		else
		   break;
	}
	for(int i=dem-1; i>=0; i--)
	  cout<<ans[i]<<endl;
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

