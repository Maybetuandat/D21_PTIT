#include<bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
	return a > b;
}
int main ()
{
	int n; cin>>n;
	int a[n + 1];
	for(int i=1; i<=n; i++)
	  cin>>a[i];
	vector<int> l,c;
	int i=1;
	while(i <= n)
	{
		l.push_back(a[i]);
		i+=2;
	}
	i=2;
	while(i <= n)
	{
		c.push_back(a[i]);
		i+=2;
	}
	sort(c.begin(), c.end(), cmp);
	sort(l.begin(), l.end());
	i=0;
	int j=0;
	for(int k=1; k<=n; k++)
	{
		if(k % 2 == 1)
		{
			cout<<l[i]<<" ";
			i++;
		}
		else
		{
			cout<<c[j]<<" ";
			j++;
		}
	}
}
