#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int c,n; cin>>c>>n;
	int f[c+1] ={0};
	int a[n+1];
	f[0] = 1;
	for(int i=1; i<=n; i++)
	  cin>>a[i];
	sort(a + 1, a + n + 1);
	int maxx = 0;
	for(int i=1; i<=n; i++)
	{
		for(int j=c; j>= 1; j--)
		{
			if(f[j-a[i]] == 1 )
			{
				f[j] = 1;
				maxx = max(maxx, j);	
			}
		}
	}
	cout<<maxx<<endl;
}
