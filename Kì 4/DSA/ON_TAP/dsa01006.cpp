#include<bits/stdc++.h>
using namespace std;
int n;
int a[100];
int vs[100];
vector<string> ans;
void in()
{
	string s = "";
	for(int i=1; i<=n; i++)
	{
		char ch = char(a[i] + '0');
		s += ch;
	}
	ans.push_back(s);
}
void sinhhv(int i)
{
	for(int j=1; j<=n; j++)
	{
		if(!vs[j])
		{
			a[i] = j;
			vs[j]  = 1;
			if(i == n)
			 in();
			else
			   sinhhv(i+1);
			vs[j] = 0;
		}
	}
}
void ct()
{
	 cin>>n;
	 memset(a, 0, sizeof(a));
	 memset(vs, 0, sizeof(vs));
	 ans.clear();
	 sinhhv(1);
	 reverse(ans.begin(), ans.end());
	 for(auto it : ans)
	   cout<<it<<" ";
	cout<<endl;
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
