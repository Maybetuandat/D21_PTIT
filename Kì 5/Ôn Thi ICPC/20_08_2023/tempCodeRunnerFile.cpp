#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void xuli(string s, int k)
{
    ll ans = 0;
    for(char ch : s)
        ans = (ans * 10 + (ch - '0')) % k;
    if(ans == 0)
       cout<<"YES";
    else
      cout<<"NO";
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        string s;
        int k;
        cin>>s>>k;
          xuli(s, k);
    }
    return 0;
}