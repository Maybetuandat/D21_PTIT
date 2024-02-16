#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int demcs(int n)
{
    int dem = 0;
    while(n != 0)
    {
        dem++;
        n /= 10;
    }
    return dem;
}
ll mu(ll ans, int cs)
{
    for(int i=0; i<cs; i++)
        ans *= 10;
    return ans;
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,k; cin>>n>>k;
    ll ans = 0;
    ll dem = 0;
    for(int i=1; i<=n; i++)
    {
        ans = (mu(ans, demcs(i)) + i) % k;
        if(ans == 0)
          dem++;
    }
    cout<<dem<<endl;
}