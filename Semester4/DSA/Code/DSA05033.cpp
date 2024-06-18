#include<bits/stdc++.h>
using namespace std;
int xuli(string s)
{
	int n = s.length();
	int f[n+1][n+1];
	memset(f, 0, sizeof(f));
	for(int i=n-2; i>= 0; i--)
	{
		for(int j = i+1; j<=n; j++)
		{
			if(s[i] == s[j])
			  f[i][j] = f[i+1][j-1];// o hai vi tri nay doi xung nen khong can xoa
			else
			  f[i][j] = min(f[i+1][j], f[i][j-1]) + 1; // xoa ki tu o vi tri i hoac o vi tri j
		}
	}
	return f[0][n-1];
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		string s; cin>>s;
		cout<<xuli(s)<<endl;
	}
}
