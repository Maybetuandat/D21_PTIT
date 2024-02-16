#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int V,E;
vector<int> adj[25];
bool vs[25];
int check;
void haminton(int u, int count)
{
	if(count == V )
	{
		check =1;
		return;
	}
	for(int x : adj[u])
	{
		if(!vs[x])
		{
			vs[x]= true;
			haminton(x, count + 1);
			vs[x] = false;
		}
	}
}
void ct()
{
 	cin>>V>>E;
 	check = 0;
 	for(int i=0; i<25; i++)
 		  adj[i].clear();
 	for(int i=0; i<E; i++)
 	{
 		int x,y; cin>>x>>y;
 		adj[x].push_back(y);
 		adj[y].push_back(x);
 	}
 	for(int i=1; i<=V; i++)
 	{
 		memset(vs, false, sizeof(vs));
 		vs[i] = true;
 	    haminton(i, 1);	
 	    if(check == 1)
 	    {
 	    	cout<<check<<endl;
 	    	return ;
 	    }
 	}
 	cout<<"0\n";
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