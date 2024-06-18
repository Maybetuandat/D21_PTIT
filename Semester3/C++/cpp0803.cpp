#include<bits/stdc++.h>
using namespace std;
void ct()
{
	ifstream f;
	f.open("DATA.in", ios::in);
	int x;
	map<int, int> mp;
	while(f>>x)
	{
		mp[x]++;
	}
	for(auto it : mp)
	{
		cout<<it.first<<" "<<it.second<<endl;
	}
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ct();
	return 0;
}
