#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
vector<vector<ii>> v;
int n, m, s;

void dijkstra(int s)
{
	vector<long long> d(n+1, 1e9);
	d[s] = 0;
	
	priority_queue<ii, vector<ii>, greater<ii>> q;
	//(khoang cach, dinh)
	q.push({0, s});
	while(!q.empty())
	{
		//chon ra dinh co khoan cach tu s nho nhat
		ii top = q.top();
		q.pop();
		
		int u = top.second;
		int kc = top.first;
		if(kc > d[u])	continue; //u da xet;
		//cap nhat khoang cach tu s den moi dinh ke voi u
		
		for(auto it : v[u])
		{
			int v = it.first;
			int w = it.second;
			
			//so sanh tu s den v va di qua u den v
			if(d[v] > d[u] + w)
			{
				d[v] = d[u] + w;
				q.push({d[v], v});
			}
		}
	}
	
	for(int i = 1; i<= n; i++)
	{
		cout << d[i] << " ";
	}
		
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		v.clear();
	
		cin >> n >> m >> s;
		v.assign(n+1, {});
		while(m--)
		{
			int x, y, w;
			cin >> x >> y >> w;
			v[x].push_back({y, w});
			v[y].push_back({x, w});
		}	
		dijkstra(s);
		cout << endl;
	}
}
