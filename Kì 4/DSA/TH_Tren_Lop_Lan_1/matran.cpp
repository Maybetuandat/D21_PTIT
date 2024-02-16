#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Nmax = 1e9+7;
int n;
struct matran
{
	ll f[100][100];
};
matran operator*(matran A, matran B)
{
	matran C;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			C.f[i][j] = 0;
			for(int k=0; k<n; k++)
			{
			
			C.f[i][j] += (A.f[i][k] * B.f[k][j]) % Nmax;
			C.f[i][j] %= Nmax;	
			}
		}
	}
	return C;
}
matran mu(matran A, int k)
{
	matran C;
	for(int i=0; i<n; i++)
	  for(int j=0; j<n; j++)
	    C.f[i][j]=0;
	for(int i=0; i<n; i++)
	  C.f[i][i]  = 1;
	if(k == 0)
	  return C;
	while(k != 0)
	{
		if( k % 2  == 1)
		  C =  C * A;
		k = k/2;
		A = A * A;
		
	}
	return C;
}
void ct()
{
	int k; cin>>n>>k;
	matran A;
	for(int i=0; i<n; i++)
	  for(int j=0; j<n; j++)
	    cin>>A.f[i][j];
	matran B = mu(A, k);
	long long ans = 0;
	for(int i=0; i<n; i++)
	{
		ans += (B.f[n-1][i] );
		ans %= Nmax;
	}
	cout<<ans<<endl;
}
int main ()
{
		int t; cin>>t;
		while(t--)
		{
			ct();
		}
	
}
