//https://code.ptit.edu.vn/student/question/CPP0725
//TÍNH S? T? H?P


#include<bits/stdc++.h>
using namespace std;
int  C[1000][1000];
const int  mod = (int  ) 1e9 + 7;
void init()
{
	for(int  i=0; i<=1000; i++)
	{
		for(int  j=0; j<=i; j++)
		{
			if( j == 0 || i == j)
			  C[i][j]=1;
			else
			{
				C[i][j]= C[i-1] [j] + C[i-1] [j-1];
				C[i][j] %= mod;
			}
		}
	}
}
int main ()
{
	init();
	int t; cin>>t;
	while(t--)
	{
	 int  m,n;
	 cin>>n>>m;
	 cout<<C[m+n-1][n] % mod <<endl;	
	}
	
}

