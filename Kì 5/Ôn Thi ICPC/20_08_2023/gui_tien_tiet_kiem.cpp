#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
        if(a .first > b.first)
            return true;
        if(a.first == b.first)
        {
            if(a.second < b.second)
                return true;
        }
        return false;
}
int  main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n,k; cin>>n>>k;
    pair<ll, ll> pr[n];
  
    for(ll i=0; i<n; i++)
        cin>>pr[i].first>>pr[i].second;
       
    

       
    sort(pr, pr + n, cmp);
    // for(int i=0; i<n; i++)
    //    cout<<pr[i].first<<" "<<pr[i].second<<endl;
    ll ans = 0;
    ll vs[k+1] = {0};
    for(ll i=0; i<n; i++)
    {
        for(ll j=pr[i].second; j >= 0; j--)
             if(vs[j] == 0)
             {
                vs[j] = 1;
                ans += pr[i].first;
                break;
             }
    }
    cout<<ans;

    return 0;
}