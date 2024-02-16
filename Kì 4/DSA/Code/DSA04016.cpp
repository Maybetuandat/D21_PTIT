#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n, m, k;
	cin>>n>>m>>k;
	int a[n], b[m];
	for(int &x : a)
	  cin>>x;
	for(int &x : b)
	  cin>>x;
	int dem  = 0;
	int i=0, j =0;
	int merger[n + m + 1];
	while(i < n && j < m)
	{
		if(a[i] < b[j])
		{
			dem++;
			merger[dem] = a[i];
			if(dem  == k)
			{
				cout<<a[i]<<endl;
				return;
			}
			i++;
		}
		else
		{
			dem++;
			merger[dem] = b[j];
			if(dem  == k)
			{
				cout<<b[j]<<endl;
				return;
			}
			j++;
		}
	}
	for(int t = i; t < n; t++)
	{
		dem++;
		merger[dem] = a[t];
		if(dem  == k)
		{
			cout<<a[t]<<endl;
			return;
		}
	}
	for(int t = j; t < m; t++)
	{
		dem++;
		merger[dem] = b[t];
		if(dem  == k)
		{
			cout<<b[t]<<endl;
			return;
		}
	}
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
