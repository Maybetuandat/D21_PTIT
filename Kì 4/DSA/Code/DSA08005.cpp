#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
	int n; cin>>n;
	queue<string> q;
	q.push("1");
	while(n--)
	{
		string s = q.front();
		cout<<s<<" ";
		q.pop();
		q.push(s+ "0");
		q.push(s + "1");
	}
	cout<<endl;
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
	return 0;
}