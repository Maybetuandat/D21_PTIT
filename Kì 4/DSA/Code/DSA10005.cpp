    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    set<int> adj[1001];
    void ct()
    {
        int v,e; cin>>v>>e;
        for(int i=1; i<=v; i++)
        adj[i].clear();
        for(int i=0; i<e; i++)
        {
            int x, y; cin>>x>>y;
            adj[x].insert(y);
        }
        for(int i=1; i<=v; i++)
        {
            int degtru = 0;
            for(int  j = 1; j<=v; j++)
            {
                if(j != i)
                {
                    if(adj[j].count(i) != 0)
                    degtru++;
                }
            }
            if(degtru != adj[i].size())
            {
                cout<<"0\n";
                return;
            }
        }
        cout<<"1\n";
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