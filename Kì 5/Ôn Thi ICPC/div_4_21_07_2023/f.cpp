#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 ll dem[200009];
ll tinh(ll k)
{
    ll sum = 0;
    for(ll i=1; i<= sqrt(k); i++)
    {
        if(k % i == 0)
        {
             ll t = k / i;
             if(t != i)
             {
                sum = sum + dem[t] + dem[i];
             }
             else
               sum += dem[i];
        }
    }
    return sum;
}
void ct()
{
    ll n; cin>>n;
    memset(dem, 0, sizeof(dem));
    for(ll i =0; i<n; i++)
    {
        ll x; cin>>x;
        if(x <= n)
          dem[x]++;
    }
    ll maxx = 0;
    for(ll i=n; i>=1; i--)
    {
            maxx = max(maxx, tinh(i));
    }
    cout<<maxx<<endl;

}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int  t; cin>>t;
    while(t--)
    {
        ct();
    }
    return 0;
}