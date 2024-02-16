#include<bits/stdc++.h>
using namespace std;
struct data
{
	int value;
	int count;
	data(int value, int count)
	{
		this->value = value;
		this->count = count;
	}
};
void ct()
{
	int s,t; cin>>s>>t;
	queue<data> q;
	q.push(data(t, 0));
	while(!q.empty())
	{
		data cmp = q.front(); q.pop();
//		cout<<cmp.value<<" "<<cmp.count<<endl;
		if(cmp.value == s)
		{
			cout<<cmp.count<<endl;
			return;
		}
		if(cmp.value % 2 == 0)
		   q.push(data(cmp.value / 2, cmp.count + 1 ));
		q.push(data(cmp.value + 1, cmp.count + 1));
	}	
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}

