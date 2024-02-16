#include<bits/stdc++.h>
using namespace std;
int n, a[30], k, c[30];
vector<string> res;
void in()
{
	vector<int> ans;
	for(int i=1; i<= k; i++)
	   ans.push_back(a[c[i]]);
	for(int i=0; i < ans.size() - 1; i++)
	  if(ans[i] >= ans[i+1])
	     return;
	string s ="";
	for(int x : ans)
	   s = s + to_string(x) + " ";
	res.push_back(s);
}
void sinh(int i)
{
	for(int j = c[i-1] + 1; j<= n - k + i; j++)
	{
		c[i] = j;
		if(i == k)
		  in();
		else
			sinh(i + 1);
	}
}
int main ()
{
	 cin>>n;
	 res.clear();
	for(int i=1; i<=n; i++)
	  cin>>a[i];
	for( k=2; k<=n; k++)
	   sinh(1);
	sort(res.begin(), res.end());
	for(string x : res)
	  cout<<x<<endl;
}
