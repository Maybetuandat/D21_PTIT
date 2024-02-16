#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
    ll n;  cin>>n;
    ll a[n];
    for(ll &x : a)
     cin>>x;
    
    ll maxx = INT_MIN;
    ll i = 0;
    stack<ll> st;
    while(i < n)
    {
        if(st.empty() || a[st.top()]  <= a[i])
        {
            st.push(i);
            i++;
        }
        else
        {
            ll k =st.top(); st.pop();
            if(st.empty())
              maxx = max(maxx, i * a[k]);
            else
                maxx = max(maxx, a[k] * (i - st.top() - 1));
        }
    }
    while(!st.empty())
    {
        ll k = st.top(); st.pop();
        if(st.empty())
          maxx = max(maxx, a[k] *n );
        else
          maxx = max(maxx, a[k] * (i - st.top() - 1));
    }
    cout<<maxx<<endl;
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