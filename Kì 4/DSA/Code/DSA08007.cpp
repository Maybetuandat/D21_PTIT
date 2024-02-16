#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
    ll n; cin>>n;
    if(n < 1)
    {
        cout<<"0\n";
        return;
    }
    if(n == 1)
    {
        cout<<"1\n";
        return;
    }
    queue<ll> q;
    q.push(1);
    ll dem  = 1;
    while(1)
    {
        ll k = q.front(); q.pop();
        ll k1 = k * 10;
        if(k1 <= n)
        {
            dem++;
            q.push(k1);
        }
        else{
            cout<<dem<<endl;
            return;
        }
        ll k2 = k * 10 + 1;
        if(k2 <= n)
        {
            dem++;
            q.push(k2);
        }
        else
        {
            cout<<dem<<endl;
            return;
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