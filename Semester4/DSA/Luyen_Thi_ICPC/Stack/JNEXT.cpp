#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
	deque<int>dq;
	int n; cin>>n;
	int a[n];
	for(int &x : a)
	  cin>>x;
	int vt;
	bool kt = false;
	for(int i=n-1; i>=0; i--)
	{
		if(!dq.empty() && a[i] < a[dq.back()])
		{
			vt = i;
			kt = true;
			break;
		}
		else
		   dq.push_back(i);
	}	
	if(!kt)
	{
		cout<<"-1\n";
		return;
	}
	for(int i=0; i<vt; i++)
	  cout<<a[i];
	vector<int> ans;
	while(!dq.empty())
	{
		if(a[dq.front()] <= a[vt])
		{
			int x = dq.front(); dq.pop_front();
			ans.push_back(x);

		}
		else
		{
			cout<<a[dq.front()];
			dq.pop_front();
			dq.push_front(vt);
			while(!ans.empty())
			{
				dq.push_front(ans.back());
				ans.pop_back();
			}
			break;
		}
	}
	while(!dq.empty())
	{
		cout<<a[dq.front()];
		dq.pop_front();
	}
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