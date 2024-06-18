#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int  check(ll a[], ll w, ll n, ll k)
{
    ll sum = 0;
    for(ll i =0; i<n; i++ )
       sum +=( (a[i] + w * 2) * (a[i] + w * 2));
    if(sum == k)
     return 1;
    if(sum > k)
      return 2;
    return 0;
      
}
void ct()
{
    ll  n, k; cin>>n >> k;
    ll a[n];
    for(ll i =0; i<n; i++)
      cin>>a[i];
    ll t = sqrt(k / n) / 2;
   ll dau =1, cuoi = t;
   while(dau <= cuoi)
   {
    ll mid = (dau + cuoi) / 2;
    int kt = check(a, mid, n, k);
    if(kt==1)
    {
        cout<<mid<<endl;
        return;
    }
    else
    {
        if(kt == 0)
          dau = mid + 1;
        else
          cuoi = mid - 1;
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