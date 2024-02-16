#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll  calculator( ll a[], ll n)
{

    ll  l[n + 1], r[n + 1];

    stack<ll> st;
    for (ll i = 1; i <= n; ++i) {
        while (!st.empty() && a[st.top()] >= a[i]) {
            st.pop();
        }
        if (st.empty()) l[i] = 1;
        else l[i] = st.top() + 1;
        st.push(i);
    }

    while (!st.empty()) st.pop();
    for (ll i = n; i >= 1; --i) {
        while (!st.empty() && a[st.top()] >= a[i]) {
            st.pop();
        }
        if (st.empty()) r[i] = n;
        else r[i] = st.top() - 1;
        st.push(i);
    }

    ll ans = 0;
    for (ll i = 1; i <= n; ++i) {
        ll s = (ll) a[i] * (r[i] - l[i] + 1);
        ans = max(ans, s);
    }
    return ans;
}
int main ()
{
	
	ll m,n; cin>>m>>n;
	ll a[n+1], b[n+1];
	for(ll i=1; i<=n; i++)
	{
		cin>>a[i];
		b[i] = m - a[i];
	}
	ll maxx = max(calculator(a, n), calculator(b, n));
	cout<<maxx<<endl;
}
