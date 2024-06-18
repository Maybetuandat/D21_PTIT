#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int s,d; cin>>s>>d;
	if(9 * d < s || s  == 0)
	{
		cout<<"-1\n";
		return;
	}
	int vt = 1;
	s = s - 1;
	int dd = d;
	int a[d+1] = {0};
	while(s > 0)
	{
		if(s >= 9)
		{
			s = s - 9;
			a[d] = 9;
		}
		else
		{
			a[d] = s;
			s = 0;
		}
		d--;
	}
	a[1] += vt;
	for(int i=1; i<=dd; i++)
	  cout<<a[i];
	cout<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
