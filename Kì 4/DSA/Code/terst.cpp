#include<bits/stdc++.h>
using namespace std;

int n, m;
bool visited[1005];
vector<int> ke[1005];
int parent[1005];

void DFS(int u){
    
	visited[u] = true;
	for(int v: ke[u]){
		if(!visited[v]){
			parent[v] = u;
			DFS(v);
		}
	}	
}
int main(){
    int q; cin >> q;
    while (q--)
    {
        cin >> n >> m;
		int s, t; cin >> s >> t;
         memset(visited, false, sizeof(visited));
         memset(parent, 0, sizeof(parent));
         for(int i=0; i<= n; i++)	ke[i].clear();
        for(int i=1; i<=m; i++){
        	int x, y; cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);	
		}
		DFS(1);
		if(!visited[t]){
			cout << -1 << endl;
		}
		else{
			vector<int> p;
			while(t!=s){
				p.push_back(t);
				t = parent[t];
			}
			p.push_back(s);
			reverse(p.begin(), p.end());
			for(int x:p)	cout << x << ' ';
		}
		cout << endl;
    }
    return 0;
}
