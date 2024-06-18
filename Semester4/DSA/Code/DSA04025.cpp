#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Nmax 1000000007
struct matran
{
	ll f[20][20];
};
matran operator*(matran A, matran B)
{
	matran C;
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			C.f[i][j] = 0 ;
			for(int k=0; k<2; k++)
			{
			  C.f[i][j] += (A.f[i][k] * B.f[k][j]) % Nmax;
			  C.f[i][j] = C.f[i][j] % Nmax;
		     }
		 }
	}
	return C;
}
matran powmod(matran A, int n)
{
	if(n == 1)
	   return A;
	matran X = powmod(A, n / 2);
	if( n % 2 == 0)
	   return X*X;
	return (X * X) * A;
}
void ct()
{
	int n; cin>>n;
	matran A;
	A.f[0][0] = 1;
	A.f[1][0] = 1;
	A.f[0][1] = 1;
	A.f[1][1] = 0;
	matran C = powmod(A, n - 1);
	cout<<C.f[0][0]<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
