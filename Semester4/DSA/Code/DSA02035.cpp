#include<bits/stdc++.h>
using namespace std;
int m,n;
string ans[20];
int vs[20], a[20], adu = INT_MAX;
void in()
{
	vector<int> res;
	int minn = INT_MAX, maxx = INT_MIN;
	for(int i=1; i<=m; i++)
	{
		int tong = 0;
		for(int j= 1; j<=n; j++)
			tong = tong * 10 + ans[i][a[j] - 1] - '0';
		if(tong < minn)
		  minn = tong;
		if(tong > maxx)
		  maxx = tong;
	}
	if(maxx - minn < adu)
	  adu = maxx - minn;
	
}
void hv(int i)
{
	for(int j=1; j<=n; j++)
	{
		if(!vs[j])
		{
			a[i] = j;
			vs[j] = 1;
			if(i == n)
			  in();
			else
			   hv(i+ 1);
			vs[j] = 0;
		}
	}
}
int main ()
{
	cin>>m>>n;
	for(int i=1; i<=m; i++)
	  cin>>ans[i];
	hv(1);
	cout<<adu<<endl;
}
