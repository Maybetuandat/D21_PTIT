#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int demcs(ll n)
{
    int dem  = 0;
    while(n != 0)
    {
        dem++;
        n = n / 10;
    }
    return dem;
}
void ct()
{
    int n; cin>>n;
    queue<ll> q;
    q.push(6);
    q.push(8);

    vector<ll> ans;
    ans.push_back(6);
    ans.push_back(8);
    while(1)
    {
        ll k = q.front(); q.pop();
        if(demcs(k) == n)
           break;
        ans.push_back(k * 10 + 6);
        ans.push_back(k * 10 + 8);
        q.push(k * 10 + 6);
        q.push( k * 10 + 8);
    }   
    sort(ans.begin(), ans.end(), greater<ll>());
    cout<<ans.size()<<endl;
    for(ll x : ans)
      cout<<x<<" ";
    cout<<endl;
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