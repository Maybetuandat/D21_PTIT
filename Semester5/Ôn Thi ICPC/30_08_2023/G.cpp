#include<bits/stdc++.h>
using namespace std;

int vs[1005], n, m, cnt = 0, dem = 1;
vector<vector<int>> ke;
map<int, int> mp;
int ok;
void dfs(int u){
    if(ok )
      return;
	vs[u] = 1;
	for(auto v : ke[u]){
		if (vs[v] == 0){
			dfs(v);
		}
		else{
			mp[v] ++;
			if(mp[v] == 1){
				dem = 0;
			
			}
            ok = 1;
			return;
		}
	}
}

int main(){
	cin >> n >> m;
	ke.assign(n+1, {});
	
	memset(vs, 0, sizeof(vs));
	for (int i = 0; i< m; i++){
		int x, y;
		cin >> x >> y;
		ke[x].push_back(y);
	}
	
	
	for(int i = 1; i<= n; i++){
		if(vs[i] == 0){
            ok = 0;
		    dem = 1;
			dfs(i);
			cnt += dem;
		}
	}
	
	cout << cnt << endl;
}