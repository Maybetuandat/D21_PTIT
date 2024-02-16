#include<bits/stdc++.h>
using namespace std;
long long f[100];
char fbword(long long  n, long long k)
{
	if(n == 1)
	   return '0';
	if(n == 2)
	  return '1';
	if(k <= f[n-2])
	  return fbword(n-2,k);
	return fbword(n-1, k - f[n-2]);
}
int main ()
{
	int t; cin>>t;
	long long n,k;
	f[0] = 0;
	f[1] = 1;
	for(int i=2; i<=92; i++)
	  f[i] = f[i-1] + f[i-2];
	
 	while(t--)
	{
		cin>>n>>k;
		cout<<fbword(n,k)<<endl;
	}
}
