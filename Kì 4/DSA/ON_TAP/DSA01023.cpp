#include<bits/stdc++.h>
using namespace std;
int n,k; 
int ans[100];
int a[100];
int ok,dem;
bool check()
{
	for(int i=1; i<=k; i++)
	  if(ans[i] != a[i])
	    return false;
	return true;
}
void sinh(int i)
{
	if(ok)
	 return;
	for(int j = a[i-1] + 1; j <= n - k + i; j++)
	{
		a[i] = j;
		if(i == k)
		{
			dem++;
			if(check())
			{
				cout<<dem<<endl;
				ok = 1;
				return;
			}
		}
		else
		   sinh(i+1);
	}
}
void ct()
{
	cin>>n>>k;
	for(int i=1; i<=k; i++)
	  cin>>ans[i];
	memset(a, 0, sizeof(a));
	dem= 0;
	ok = 0;
	sinh(1);
}
int main ()
{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
