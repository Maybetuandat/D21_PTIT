#include<bits/stdc++.h>
using namespace std;
struct dl
{
	int gt, vt;
};
bool cmp(dl a, dl b)
{
	return a.gt < b.gt;
}
int main ()
{
	int n; cin>>n;
	dl a[n + 1];
	for(int i=1; i<=n; i++)
	{
		cin>>a[i].gt;
		a[i].vt=i;	
	}
	sort(a + 1, a + n + 1 , cmp);
	int dem = 1, maxx = INT_MIN;
	for(int i=1; i<=n-1; i++)
	{
		if(a[i].vt < a[i+ 1].vt)
		   dem++;
		else
		{
			if(dem > maxx)
			{
				maxx = dem;
			}
			dem = 1;
		}
	}
	if(dem > maxx)
	   maxx = dem;
	cout<<n- maxx<<endl;
}
