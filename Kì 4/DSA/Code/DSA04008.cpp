#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Nmax = 1e9 + 7;
struct matran
{
	ll f[2][2];
};
matran operator* (matran A, matran B)
{
	matran C;
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			C.f[i][j] = 0;
			for(int k=0; k<2; k++)
			{
				C.f[i][j] += (A.f[i][k] * B.f[k][j]) % Nmax;
				C.f[i][j] %= Nmax;	
			}
		}
	}
	return C;
}
matran mu(matran A, int n)
{
	if(n == 1)
	   return A;
	matran C = mu(A, n / 2);
	if(n % 2 == 0)
	  return C*C;
	return A*C*C;
}

void ct()
{
	int n; cin>>n;
	matran A;
	A.f[0][0] = 1;
	A.f[0][1] = 1;
	A.f[1][0] = 1;
	A.f[1][1] = 0;
	matran C= mu(A, n - 1);
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
