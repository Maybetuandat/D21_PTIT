#include<bits/stdc++.h>
using namespace std;
bool check(int ans[], int a[], int k, int n)
{
	int tong = 0;
	for(int i=1; i<=n; i++)
	  tong += a[i] * ans[i];
	if(tong == k)
	  return true;
	return false;
}
void in(int ans[],int a[],  int n)
{
	for(int i = 1; i<=n; i++ )
	  if(a[i] != 0)
	    cout<<ans[i]<<" ";
	cout<<endl;
}
void ct()
{
	int n,k; cin>>n>>k;
	int ans[n+1];
	for(int i=1; i<=n; i++)
	  cin>>ans[i];
	int a[n+1] = {0};
	int dem = 0;
	while(1)
	{
		if(check(a, ans, k, n))
		{
			in(ans,a,  n);
			dem++;
		}
			
				int i = n;
				while(i > 0 && a[i] != 0)
				{
					a[i] = 0;
					i--;
				}
				if(i == 0)
				  break;
				a[i]++;
	
	}
	cout<<dem<<endl;
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
