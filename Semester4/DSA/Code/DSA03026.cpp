#include<bits/stdc++.h>
using namespace std;
int main ()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,s; cin>>n>>s;
	if(n * 9 < s || s == 0)
	{
		cout<<"-1 -1";
		return 0;
	}
	int maxx[n] = {0}, minn[n] = {0};
	// tim max 
	int k = s, i = 0;
	while(k > 0)
	{
		if(k >= 9)
		{
			k -= 9;
			maxx[i] = 9;
			i++;
		}
		else
		{
			 maxx[i] = k;
			 k =0;
		}
	}
	
	
	// tim  minn
	i = n;
	s -= 1;
	while(s > 0)
	{
		if(s >= 9)
		{
			 s -= 9;
			 i--;
			 minn[i] = 9;
		}
		else
		{
			i--;
			minn[i] = s;
			s = 0;
			
		}
	}
	minn[0] += 1;
	for(int x : minn)
	  cout<<x;
	cout<<" ";
	for(int x : maxx)
	   cout<<x;
}
