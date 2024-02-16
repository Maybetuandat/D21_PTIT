#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100],n, dem = 0;
int minn = INT_MAX;
void in()
{
	if(dem < minn)
	  minn= dem;
}
void dq(ll i, ll sum)
{
	for(int j = i; j<=n; j++)
	{
		if(a[j] <= sum)
		{
			dem++;
			if(sum - a[j] == 0)
			  in();
			else
			  dq(i+1, sum - a[j]);
			dem--;
		}
	}
}
int main ()
{
	ll s; cin>>n>>s;
	for(int i=1; i<=n; i++)
	  cin>>a[i];
	sort(a+1, a + n +1);

	dem=0;
	dq(1, s);
	cout<<minn<<endl;
}
