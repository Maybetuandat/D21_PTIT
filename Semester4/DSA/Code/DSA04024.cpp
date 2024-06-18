#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,b;
#define Nmax  1000000007
struct matran
{
	ll f[100][100];
};
matran operator *(matran A, matran B)
{
	int i,j,k;
	matran C;
	for( i=0; i<n; i++)
	{
		for( j=0; j<n; j++)
		{
			C.f[i][j] = 0;
			for( k=0; k<n; k++)
			{
				C.f[i][j] += (A.f[i][k] * B.f[k][j]) % Nmax;
				C.f[i][j] = C.f[i][j] % Nmax;	
			}
			  
		}
	}
	return C;
}
//matran powmod(matran A, int b)
//{
//	if(b == 0)
//	  return A;
//	matran X= powmod(A, b / 2);
//	if(b % 2 == 0)
//	  return X*X;
//	return (X*X) * A;
//}
matran powmod(matran A, int b)
{
	matran C;
	for(int i=0; i<n; i++)
	  for(int j=0; j<n; j++)
	    C.f[i][j] = 0;
	for(int i=0; i<n; i++)
	   C.f[i][i] = 1;
	while(b)
	{
		if( b % 2 == 1)
		   C = C * A;
		A = A * A;
		b = b / 2;
	}
	return C;
}
void ct()
{
	 cin>>n>>b;
	matran A;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		   cin>>A.f[i][j];
	}
	matran C = powmod(A, b);
	ll ans = 0;
	for(int i=0; i<n; i++)
	{
		ans = ans + C.f[i][n-1] % Nmax;
		ans = ans % Nmax;
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
