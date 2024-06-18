#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];
int visit[1005];
int n,m,d,c;
void clear(){
	for(int i=1;i<=n;i++){
		v[i].clear();
	}
}
void cd(){
	for(int i=1;i<=n;i++){
		visit[i]=0;
	}
}
void dfs(int u){
	visit[u]=1;
	for(auto &x:v[u]){
		if(u==d && x==c || u==c && x==d) continue;
		if(!visit[x]){
			dfs(x);
		}
	}
}
int tplt(){
	int dem=0;
	for(int i=1;i<=n;i++){
		if(!visit[i]){
			dem++;
			dfs(i);
		}
	}
	return dem;
}
void canhcau(int x,int y){
	cd(); d=0,c=0;
	int tplt1=tplt();
	cd();
	d=x,c=y;
	int tplt2=tplt();
	if(tplt2>tplt1) cout << x << " " << y << " ";
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		vector<pair<int,int>> v1;
		while(m--){
			int a, b; cin >> a >> b;
			v1.push_back(make_pair(a,b));
			v[a].push_back(b);
			v[b].push_back(a);
		}
		for(auto &x:v1){
			canhcau(x.first,x.second);
		}
		cout << endl;
		clear();
	}
}
