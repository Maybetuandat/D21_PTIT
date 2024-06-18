#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[100];
char  fbword(int n, ll k)
{
	if(n == 1)
	  return 'A';
	if(n == 2)
	  return 'B';
	if(k <= f[n-2])
	  return fbword(n-2, k);
	return fbword(n-1, k - f[n-2]);
}
int main ()
{
	f[1] = 1;
	f[2] = 1;
	for(int i=3; i<=92; i++)
	  f[i] = f[i-1] + f[i-2];
	int t; cin>>t;
	while(t--)
	{
		int n; ll k;cin>>n>>k;
		cout<<fbword(n,k)<<endl;
	}
}
