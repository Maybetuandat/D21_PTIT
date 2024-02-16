#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1005][1005];
int n;
bool check[1005];
void dfs(int u)
{
	cout<<u<<" ";
	check[u] = true;
	for(int i=1; i<=n; i++)
	{
		if(a[u][i] == 1 && !check[i])
		{
		
			dfs(i);
		}
	}
}
void ct()
{
		cin>>n;
		memset(check, false, sizeof(check));
		for(int i=1; i<=n; i++)
		  for(int j=1; j<=n; j++)
		     cin>>a[i][j];
		int u; cin>>u;
		dfs(u);
		cout<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
	return 0;
}