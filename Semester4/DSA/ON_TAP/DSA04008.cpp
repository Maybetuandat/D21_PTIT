#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll kq[5][5], a[5][5];
void nhan(ll a[5][5], ll b[5][5])
{
    
}
void mu(ll f[5][5], int k)
{
    if(k <= 1)
      return;
    mu(f, k / 2);
    nhan(f, f);
    id(k % 2 == 1)
      nhan(f, a);
}
void ct()
{
        int n ; cin>>n;
        a[0][0] = 1;
        a[1][0] = 1;
        a[0][1] = 1;
        a[1][1] = 0;
        mu(a, n-1);
        cout<<kq[0][0]<<endl;
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