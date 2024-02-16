#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n,k; cin>>n>>k;
	int a[n];
	long long tong = 0;;
	for(int i=0; i<n; i++)
	{
			   cin>>a[i];
			   tong += a[i];		
	}

	sort(a, a + n);
	int dodai = min(k, n - k);
	long long sum=0;
	for(int i =0; i<dodai; i++ )
	    sum = sum  + a[i];
	cout<<tong - 2* sum<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
