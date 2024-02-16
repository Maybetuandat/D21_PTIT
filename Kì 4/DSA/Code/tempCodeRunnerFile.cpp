#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
set<int> adj[1001];
int V,E;
void eulercycle(int u)
{   
    stack<int> st;
    vector<int> ans;
    st.push(u);
    while(!st.empty())
    {
        int x = st.top();
        if(adj[x].size() != 0)
        {
            int k = *adj[x].begin();
            st.push(k);
            adj[x].erase(k);
            adj[k].erase(x);
        }
        else
        {
            st.pop();
            ans.push_back(x);
        }
    }
    reverse(ans.begin(), ans.end());
    for(int x : ans)
      cout<<x<<" ";
    cout<<endl;
}
void ct()
{
    cin>>V>>E;
    for(int i=0; i<E; i++)
    {
        int x,y; cin>>x>>y;
        adj[x].insert(y);
        adj[y].insert(x);
    }
    eulercycle(1);
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