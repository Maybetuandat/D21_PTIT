#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[100], c[100];
vector< vector<int> > res;
bool cmp(int a, int b)
{
	return a > b;
}
void in()
{
	vector<int> ans;
	int tong = 0;
	for(int j=1; j<=k; j++)
	{
		ans.push_back(a[c[j]]);
		tong += ans.back();
	}
	
	if(tong % 2 == 1)
	{
		sort(ans.begin(), ans.end(), cmp);
		
		res.push_back(ans);
	}
}
void sinh(int i)
{
	for(int j= c[i-1] + 1; j <= n - k + i; j++)
	{
		 c[i] = j;
		 if(i == k)
		   in();
		else
		   sinh(i+1);
	}
	
}
void ct()
{
	cin>>n;
	res.clear();
	for(int i=1; i <= n; i++)
	   cin>>a[i];
	for( k =1; k<=n; k++ )
	   sinh(1);
	sort(res.begin(), res.end());
	
	for(auto x : res)
	{
		for( auto i : x)
		  cout<<i<<" ";
		cout<<endl;
	}
}

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
