#include<bits/stdc++.h>
using namespace  std;
typedef long long ll;
#define ii pair<int, int>
int pr[200005], sz[200005];
int n;
struct edge
{
    int x, y;
    ll z;
};
vector<edge> E;
void init()
{
	for(int i = 1; i<=n; i++)
	{
		pr[i] = i;
		sz[i] = 1;
	}
}

int Find(int u)
{
	if(pr[u] == u)
		return u;
	else
	{
		pr[u] = Find(pr[u]);
		return pr[u];
	}
}
bool DJS(int u, int v)
{
	u = Find(u);
	v = Find(v);
	if(u == v)
		return false;
	if(sz[u] < sz[v])
		swap(u, v);
	sz[u] += sz[v];
	pr[v] = u;
	return true;
}
void Kruskal()
{
	vector<edge> MST;
	MST.clear();
	long long d = 0;
	
	sort(E.begin(), E.end(), [](edge a, edge b) -> bool
	{
		return a.z < b.z;
	});
	for(edge k : E)
	{
		if(MST.size() == n-1)
			break;
		else
		{
			if(DJS(k.x, k.y))
				MST.push_back(k);
		}
	}
	// for(edge k : MST)
    //     cout<<k.x<<" "<<k.y<<" "<<k.z<<endl;
	cout << MST.back().z << "\n";
}


int main()
{
  
         cin>>n;
           init();
        ii pr[n+1];
        for(int i=1; i<=n; i++)
          cin>>pr[i].first>>pr[i].second;
        for(int i=1; i<n; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                ll canh = (pr[i].first - pr[j].first) * (pr[i].first - pr[j].first)+ (pr[i].second - pr[j].second) * (pr[i].second - pr[j].second);
                E.push_back({i, j, canh});
            }
        }   
        Kruskal();
}   
