#include<bits/stdc++.h>
using namespace std;
vector<int> ans[100];
void xuli(string s, int i)
{
	stringstream ss(s);
	string cmp;
	while(ss >> cmp)
	{
		int n = stoi(cmp);
		ans[i].push_back(n);
	}
}
int main()
{

	int n; cin>>n;
	cin.ignore();
	for(int i=1; i<=n; i++)
	{
			string s;
			getline(cin, s);
			xuli(s, i);		
	}
	for(int i=1; i<=n; i++)
	{
		sort(ans[i].begin(), ans[i].end());
		for(int x : ans[i])
		{
			if(x > i)
			  cout<<i<<" "<<x<<endl;
		}
	}
}
