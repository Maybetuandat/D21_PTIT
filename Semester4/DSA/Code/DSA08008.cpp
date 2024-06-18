#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
    ll n; cin>>n;
    queue<ll> q;
    q.push(1);
    if(n == 1)
    {
        cout<<"1\n";
        return;
    }
    while(1)
    {
        ll k = q.front(); q.pop();
        ll k1 = k * 10;
        if(k1 % n == 0)
        {
            cout<<k1<<endl;
            return;
        }
        q.push(k1);
        k1 = k * 10 + 1;
        if(k1 % n == 0)
        {
            cout<<k1<<endl;
            return;
        }
        q.push(k1);
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