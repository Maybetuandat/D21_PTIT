#include<bits/stdc++.h>
using namespace std;
int a[30][30];
int x[]= {1, 0};
int y[] = {0, 1};
vector<string> ans;
string adu = "DR";
int n;
void dq(int i, int j, string s)
{

	if(i == n-1 && j == n-1)
	{
		ans.push_back(s);
		return;
	}
	for(int k=0; k<2; k++)
	{
		int i1 = i + x[k];
		int j1 = j + y[k];
		if(i1 <n && j1 < n && a[i1][j1] == 1)
		  dq(i1, j1, s + adu[k]);
	}
}
void ct()
{
	 cin>>n;

	
	for(int i=0; i<n; i++)
	  for(int j=0; j<n; j++)
	     cin>>a[i][j];
	ans.clear();
	

	if(a[0][0] == 0 || a[n-1][n-1] == 0)
	{
		cout<<"-1\n";
		return;
	}
	dq(0, 0, "");
	sort(ans.begin(), ans.end());
	if(ans.size() == 0)
	  cout<<"-1\n";
	else
	{
			for(string x : ans)
	  cout<<x<<" ";
	cout<<endl;
	}

	
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
