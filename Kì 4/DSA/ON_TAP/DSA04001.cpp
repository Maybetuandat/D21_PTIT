#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int nmax = 1e9+7;
ll mu(int n, int k)
{
    if(k == 0)
      return 1;
    ll res = mu(n, k / 2);
    if(k % 2 == 0)
      return res * res % nmax;
    return ((res * res) % nmax * n) % nmax; 
}
void ct()
{
    int n,k; cin>>n>>k;
    cout<<mu(n,k)<<endl;
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