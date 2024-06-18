#include<bits/stdc++.h>
using namespace std;
bool check(int a[], int n)
{
	
	for(int i=1; i<= n /2; i++)
	  if(a[i] != a[n-i+ 1])
	     return false;
	return true;
	
}
void ct()
{
	int n; cin>>n;
	int a[n+1] = {0};
	while(1)
	{
		if(check(a, n))
		{
			for(int i=1; i<=n; i++)
		  cout<<a[i]<<" ";
		cout<<endl;
		}
		int i = n;
		while(i > 0 && a[i] != 0)
		{
			a[i] = 0;
			i--;
		}
		if(i == 0)
	  		return;
	  	
	  	a[i]++;
	}
	
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 1;
	while(t--)
	{
		ct();
	}
}
