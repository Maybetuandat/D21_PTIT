#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int tinh( int  n, ll k)
{
	int x = pow(2, n-1);
	if(k == x)
	  return n;
	if(k < x)
	  return tinh(n-1, k);
	return tinh(n - 1, k - x);
	
}
void ct()
{
	int n;
	ll k;  cin>>n>>k;
	char ch = tinh(n,k) - 1 + 'A';
	cout<< ch<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
