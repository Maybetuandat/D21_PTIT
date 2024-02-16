#include<bits/stdc++.h>
using namespace std;
const int X[4] = {-1, 0, 1, 0};
const int Y[4] = {0, 1, 0, -1};
const string adu = "URDL";
int a[10][10];
int n;
vector<string> ans;

void dq(int i, int j, string s)
{
		if(i ==n && j == n)
		{
			ans.push_back(s);
			return;
		}
		
	for(int k=0; k<4; k++)
	{
		int i1= i + X[k];
		int j1= j + Y[k];	
		if(i1 >=1 && i1 <=n && j1 >=1 && j1 <=n && a[i1][j1] == 1 )
		{
			a[i1][j1] = 0;
			dq(i1, j1, s+ adu[k]);
			a[i1][j1] = 1;
		}
	}
}
void xuli()
{
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		  cin>>a[i][j];
	}
	if(a[1][1] == 0 || a[n][n] == 0)
	{
		cout<<"-1\n";
		return;
	}
	a[1][1] = 0;
	ans.clear();
	dq(1,1,"");
	if(ans.empty())
	{
		cout<<"-1\n";
		return;
	}
	sort(ans.begin(), ans.end());
	for(string s : ans)
	  cout<<s<<" ";
	cout<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		xuli();
	}
}
