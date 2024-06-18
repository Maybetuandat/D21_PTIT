#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
	int n;cin>>n;
	queue<int> q;
	while(n--)
	{
		int x; cin>>x;
		switch (x)
		{
		case 1:
			{
				cout<<q.size()<<endl;
				break;
			}
		case 2: 
			{
				if(q.empty())
					cout<<"YES\n";
				else
					cout<<"NO\n";
				break;
			}
		case 3: 
			{
				int k; cin>>k; 
				q.push(k);	
					break;
			}
		case 4: 
			{
			
			if(!q.empty())
				q.pop();
				break;	
			}
		case 5: 
			{
				if(!q.empty())
					cout<<q.front()<<endl;
				
				else
					cout<<"-15\n";
					break;
			}
		default : 
			{
				if(!q.empty())
					cout<<q.back()<<endl;
				
				else
					cout<<"-16\n";
				
			}
		}
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
	return 0;
}