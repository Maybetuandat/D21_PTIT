// co so quy hoach dong 
// 
#include<bits/stdc++.h>
using namespace std;
int min3so(int a, int b, int c)
{
	int miin = a;
	if(miin > b)
	  miin = b;
	if(miin > c)
	  miin = c;
	return miin;
}
void ct()
{
	int n;   cin>>n;
	int cop, del, inse;  cin>>inse>>del>>cop;
	int f[n+1];
	f[1] = inse;
	for(int i=2; i<=n; i++)
	{
		if(i % 2 == 0)
		{
			f[i] = min(f[i-1]  + inse,f[i/2] + cop); 
		}
		else
		{
			f[i] = min3so(f[i-1] + inse, f[(i-1) / 2] + cop + inse, f[(i+1) / 2] + cop + del);
		}
	}
	cout<<f[n]<<endl;
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
