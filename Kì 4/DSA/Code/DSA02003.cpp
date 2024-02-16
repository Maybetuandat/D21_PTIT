#include<bits/stdc++.h>
using namespace std;
int x[2] ={1, 0};
int y[2] = {0, 1};
int a[100][100];
int n;
set<string> ans;
string s="";
void dq(int i, int j)
{
	for(int k=0; k<=1; k++)
	{
		int i1 = i + x[k];
		int j1= j + y[k];
	    if(i1 < n && j1<n && a[i1][j1] == 1)
	    {
	    	if(k == 0)
	    	  s = s + 'D';
	    	else
	    	 s = s + 'R';
	    	if(i1 == n-1 && j1 == n-1)
	    	    ans.insert (s);
	    	else
	    	   dq(i1, j1);
	    	s.erase(s.length() - 1);
		}
	}
}
void xuli()
{
    ans.clear();
    s="";
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		  cin>>a[i][j];
	}
	if(a[0][0]==0 || a[n-1][n-1] == 0)
	{
	    cout<<"-1\n";
	    return;
	}
	dq(0,0);
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
	int t; cin>>t;
	while(t--)
	{
	    cin>>n;
		xuli();
	}
}
