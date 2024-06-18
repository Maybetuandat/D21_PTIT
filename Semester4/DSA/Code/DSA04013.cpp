#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n; cin>>n;
	int a[n];
	for(int &x : a)
	  cin>>x;
	sort(a, a + n);
	int l = n/2, ans = n, r = n-1;
	while(l >= 0)
	{
		if(a[l] * 2 <= a[r])
		{
			l--;
			r--; ans --;
			
		}
		else
		   l--;
	}
	cout<<ans<<endl;
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
