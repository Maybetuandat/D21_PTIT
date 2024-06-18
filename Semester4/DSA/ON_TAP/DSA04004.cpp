#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mu(ll x)
{
    ll ans = 1;
    for(ll i=0; i<x; i++)
      ans *= 2;
    return ans;
}
ll devide(ll n, ll k)
{
    if(n == 1)
      return 1;
    ll res = mu(n-1);
    if(k == res)
      return n;
    if(k >  res)
      return devide(n-1, k - res);
    return devide(n-1, k);
}
void ct()
{
    ll n,k; cin>>n>>k;
    cout<<devide(n,k)<<endl;
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