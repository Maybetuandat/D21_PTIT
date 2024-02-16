#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
long long  V;
ll graph[50][50];
long long  tsp( long long  s)
{
    vector<ll> vertex;
    for (ll i = 0; i < V; i++)
        if (i != s)
            vertex.push_back(i);
    long long  min_cost = INT_MAX;
    while(next_permutation(vertex.begin(), vertex.end()))
     {
        long long  current_cost = 0;
        ll j = s;
        for (ll i = 0; i < vertex.size(); i++) {
            current_cost += graph[j][vertex[i]];
            j = vertex[i];
        }
        current_cost += graph[j][s];
        min_cost = min(min_cost, current_cost);
        return min_cost;
	}
}
int main()
{
	cin>>V;
	for(ll i=0; i<V; i++)
	{
		for(ll j=0; j<V; j++)
		   cin>>graph[i][j];
	}
    long long  s = 0;
    cout << tsp(s) << endl;
    return 0;
}
