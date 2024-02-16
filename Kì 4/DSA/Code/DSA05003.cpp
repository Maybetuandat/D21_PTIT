#include<bits/stdc++.h>
using namespace std;
int f[101][101][101];
int max3so(int a, int b, int c)
{
	int maxx = a;
	if(maxx < b)
	  maxx = b;
	if(c > maxx)
	  maxx = c;
	return maxx;
}
void ct()
{
	int n1, n2, n3; cin>>n1>>n2>>n3;
	string s1,s2,s3; cin>>s1>>s2>>s3;
	for(int i=0; i<= n1; i++)
	{
		for(int j=0; j<=n2; j++)
		{
			for(int k=0; k<= n3; k++)
			{
				if(i == 0 || j == 0 || k == 0)
				
					f[i][j][k] = 0;
				else
				{
					if(s1[i-1] == s2[j-1]  && s2[j-1] == s3[k-1])
					
						f[i][j][k] = f[i-1][j-1][k-1] + 1;
					else
					{
						f[i][j][k] = max3so(f[i-1][j][k], f[i][j-1][k], f[i][j][k-1]);
					}
					
				}
			}
		}
	}
	cout<<f[n1][n2][n3]<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
