#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
    int n; cin>>n;
    vector<pair<int, int> > ans;
    for(int i=1; i<=n; i++)
    {
        int x,y; cin>>x>>y;
        if(x > 10)
          continue;
        ans.push_back({y, i});
    }
    sort(ans.begin(), ans.end());
    cout<<ans.back().second<<endl;
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