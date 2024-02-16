#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<vector<int>> adj;
bool check[1001];
int V, E,s;
int parent[1001];
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    while(!q.empty())
    {
        int k = q.front(); q.pop();
        for(int x : adj[k])
        {
            if(!check[x])
            {
                check[x] = true;
                parent[x] = k;
                q.push(x);
            }
        }
    }
}
void ct()
{
    cin>>V>>E>>s;
    memset(check, false, sizeof(check));
    adj.clear();
    adj.resize(V+2);
    for(int i=0; i<E; i++)
    {
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bfs(s);
   for(int i=1; i<=V; i++)
   {
   	if(i != s)
   	{
   	   // tim duong tu i toi s
		   if(!check[i])
    		 { 
        			cout<<"No path\n";
    		 }
    		else
    		{
    			
				 int k = i;
    		vector<int> ans;
    		while(k != s)
   			 {
        		ans.push_back(k);
        		k = parent[k];
   			 }
    ans.push_back(s);
    reverse(ans.begin(), ans.end());
    for(int x : ans)
      cout<<x<<" ";
    cout<<endl;
				
				
					
			}
    			
	}
   }
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
