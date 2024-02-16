#include<bits/stdc++.h>
using namespace std;
void ct()
{
	string s; cin>>s;
	int n = s.length();
	s = '#' + s;
	int f[n + 1] [n+1];
	memset(f, 0, sizeof(f));
	for(int i=1; i<=n; i++)
	    f[i][i] = 1;
	int maxx = 1;
	for(int k=1; k< n ; k++)
	{
		for(int i=1; i<= n - k; i++)
		{
			int j = i + k;
			if(s[i] == s[j])
			{
				if(k == 1)
				  f[i][j] = 1;
				else
					f[i][j] = f[i+1][j-1];
			}	  
			else
			     f[i][j] = 0;
			if(f[i][j] == 1)
			  maxx = max(maxx, j - i + 1);
		}
	}
	cout<<s.length() - maxx - 1<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
