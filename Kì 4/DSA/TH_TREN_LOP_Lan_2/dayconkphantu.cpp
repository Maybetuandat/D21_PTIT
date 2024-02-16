#include<bits/stdc++.h>
using namespace std;
void xuli(int n, int k)
{
	int ans[n + 1];
	for(int i=1; i<=n; i++)
	  cin>>ans[i];
	sort(ans + 1, ans + n + 1);

	int a[k+1];
	vector<string> res;
	for(int i=1; i<=k; i++)
	  a[i]=i;
	while(1)
	{
		string s="";
		for(int i=1; i<=k; i++)
		{
			s = s + to_string(ans[ a[i] ]) + " ";
		}

		res.push_back(s);
		int i = k;
		while(i > 0 && a[i] >= n - k + i)
		    i--;
		if(i == 0)
		  break;
		a[i]=a[i]+1;
		for(int j=i+1; j<=k; j++)
		  a[j] = a[i] + j - i;
	}
	sort(res.begin(), res.end());
	for(string x : res)
	  cout<<x<<endl;
}
int main ()
{
		int n,k; cin>>n>>k;
		xuli(n,k);
}
